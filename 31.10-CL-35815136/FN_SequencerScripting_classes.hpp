#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SequencerScripting
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SequencerScripting.MovieSceneScriptingKey
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMovieSceneScriptingKey : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingKey");
			return ret;
		}
	};


	// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingActorReferenceKey");
			return ret;
		}

		void SetValue(FMovieSceneObjectBindingID& InNewValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503F521C(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		FMovieSceneObjectBindingID GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F41AC(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingChannel
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMovieSceneScriptingChannel : public UObject	
	{
	public:
		FName ChannelName; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingChannel");
			return ret;
		}
	};


	// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel");
			return ret;
		}

		void SetDefault(FMovieSceneObjectBindingID InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F47C0(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F44FC(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F43CC(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		FMovieSceneObjectBindingID GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3CA0(relative to base address)
		UMovieSceneScriptingActorReferenceKey AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F265C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingBoolKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingBoolKey");
			return ret;
		}

		void SetValue(bool InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F5340(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		bool GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F41F0(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingBoolChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingBoolChannel");
			return ret;
		}

		void SetDefault(bool InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F48FC(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4554(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F4420(relative to base address)
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3F3C(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		bool GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3CD8(relative to base address)
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3800(relative to base address)
		FSequencerScriptingRange ComputeEffectiveRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3768(relative to base address)
		UMovieSceneScriptingBoolKey AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F29D8(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingByteKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingByteKey");
			return ret;
		}

		void SetValue(char InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F5414(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		char GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F4280(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingByteChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingByteChannel");
			return ret;
		}

		void SetDefault(char InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F49DC(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F45CC(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F4460(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		char GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3D20(relative to base address)
		UMovieSceneScriptingByteKey AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F2CC0(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingDoubleKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingDoubleKey");
			return ret;
		}

		void SetValue(double InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F54E4(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4F08(relative to base address)
		void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4E2C(relative to base address)
		void SetLeaveTangentWeight(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4C8C(relative to base address)
		void SetLeaveTangent(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4C0C(relative to base address)
		void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4B30(relative to base address)
		void SetArriveTangentWeight(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4740(relative to base address)
		void SetArriveTangent(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F46C0(relative to base address)
		double GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F4328(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
		TEnumAsByte GetTangentWeightMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F40C8(relative to base address)
		TEnumAsByte GetTangentMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F4074(relative to base address)
		float GetLeaveTangentWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3F14(relative to base address)
		float GetLeaveTangent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3EEC(relative to base address)
		TEnumAsByte GetInterpolationMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3D90(relative to base address)
		float GetArriveTangentWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3C78(relative to base address)
		float GetArriveTangent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3C50(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingDoubleChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingDoubleChannel");
			return ret;
		}

		void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4D9C(relative to base address)
		void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4D0C(relative to base address)
		void SetDefault(double InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4AAC(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4644(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F44A0(relative to base address)
		TEnumAsByte GetPreInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F4030(relative to base address)
		TEnumAsByte GetPostInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3FEC(relative to base address)
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3F94(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		double GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3D68(relative to base address)
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3A28(relative to base address)
		FSequencerScriptingRange ComputeEffectiveRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F37B4(relative to base address)
		UMovieSceneScriptingDoubleKey AddKey(FFrameNumber& InTime, double NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F3088(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingEventKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingEventKey");
			return ret;
		}

		void SetValue(FMovieSceneEvent& InNewValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503F5568(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		FMovieSceneEvent GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F437C(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingEventChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingEventChannel");
			return ret;
		}

		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		UMovieSceneScriptingEventKey AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F343C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingFloatKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingFloatKey");
			return ret;
		}

		void SetValue(float InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD664(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503FD448(relative to base address)
		void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD3C4(relative to base address)
		void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD340(relative to base address)
		void SetLeaveTangentWeight(float InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FCC54(relative to base address)
		void SetLeaveTangent(float InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FCBD0(relative to base address)
		void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FCB4C(relative to base address)
		void SetArriveTangentWeight(float InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC6E4(relative to base address)
		void SetArriveTangent(float InNewValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A3EA0(relative to base address)
		float GetValue(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3D5014(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
		TEnumAsByte GetTangentWeightMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5AD654(relative to base address)
		TEnumAsByte GetTangentMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C45C864(relative to base address)
		float GetLeaveTangentWeight(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFD1FC0(relative to base address)
		float GetLeaveTangent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB988(relative to base address)
		TEnumAsByte GetInterpolationMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3493C4(relative to base address)
		float GetArriveTangentWeight(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1850(relative to base address)
		float GetArriveTangent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB63C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingActualFloatKey
	// Inherited from UMovieSceneScriptingFloatKey -> UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingActualFloatKey");
			return ret;
		}
	};


	// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
	// Inherited from UMovieSceneScriptingFloatKey -> UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingDoubleAsFloatKey");
			return ret;
		}
	};


	// Class SequencerScripting.MovieSceneScriptingFloatChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x30(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingFloatChannel");
			return ret;
		}

		void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD00C(relative to base address)
		void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FCF70(relative to base address)
		void SetDefault(float InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC768(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC4C8(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FC0CC(relative to base address)
		TEnumAsByte GetPreInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FBD54(relative to base address)
		TEnumAsByte GetPostInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FBCF8(relative to base address)
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FBA68(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		float GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB710(relative to base address)
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FAEAC(relative to base address)
		FSequencerScriptingRange ComputeEffectiveRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FAE20(relative to base address)
		UMovieSceneScriptingFloatKey AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F9F9C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingIntegerKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingIntegerKey");
			return ret;
		}

		void SetValue(int32_t InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD6E8(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		int32_t GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FBF3C(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingIntegerChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingIntegerChannel");
			return ret;
		}

		void SetDefault(int32_t InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC7E8(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC4DC(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FC160(relative to base address)
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3F94(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		int32_t GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB738(relative to base address)
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB0D4(relative to base address)
		UMovieSceneScriptingIntegerKey AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503FA34C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingObjectPathKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingObjectPathKey");
			return ret;
		}

		void SetValue(UObject* InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD7B8(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		UObject GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FBFE4(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingObjectPathChannel");
			return ret;
		}

		void SetDefault(UObject* InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC8B8(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F44FC(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FC1BC(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		UObject GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB79C(relative to base address)
		UMovieSceneScriptingObjectPathKey AddKey(FFrameNumber InTime, UObject* NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503FA634(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingStringKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingStringKey");
			return ret;
		}

		void SetValue(FString InNewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FD838(relative to base address)
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503F4FE4(relative to base address)
		FString GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FC040(relative to base address)
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F411C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneScriptingStringChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingStringChannel");
			return ret;
		}

		void SetDefault(FString InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503FC950(relative to base address)
		void RemoveKey(UMovieSceneScriptingKey* Key); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87CD00(relative to base address)
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7503F4644(relative to base address)
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FC1E8(relative to base address)
		TArray GetKeysByIndex(TArray<int32_t>& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3E24(relative to base address)
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503F3DE4(relative to base address)
		FString GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503FB7C0(relative to base address)
		UMovieSceneScriptingStringKey AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503FA98C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneBindingExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneBindingExtensions");
			return ret;
		}

		void SetSpawnableBindingID(FMovieSceneBindingProxy& InBinding, FMovieSceneObjectBindingID& SpawnableBindingID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FD1F8(relative to base address)
		void SetSortingOrder(FMovieSceneBindingProxy& InBinding, int32_t SortingOrder); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FD0A8(relative to base address)
		void SetParent(FMovieSceneBindingProxy& InBinding, FMovieSceneBindingProxy& InParentBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FCE54(relative to base address)
		void SetName(FMovieSceneBindingProxy& InBinding, FString InName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FCCD8(relative to base address)
		void SetDisplayName(FMovieSceneBindingProxy& InBinding, FText& InDisplayName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FCA58(relative to base address)
		void RemoveTrack(FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FC554(relative to base address)
		void Remove(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FC414(relative to base address)
		void MoveBindingContents(FMovieSceneBindingProxy& SourceBindingId, FMovieSceneBindingProxy& DestinationBindingId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FC328(relative to base address)
		bool IsValid(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7503FC258(relative to base address)
		TArray GetTracks(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FBE40(relative to base address)
		int32_t GetSortingOrder(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FBDB0(relative to base address)
		UClass GetPossessedObjectClass(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FBC60(relative to base address)
		FMovieSceneBindingProxy GetParent(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FBB78(relative to base address)
		UObject GetObjectTemplate(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FBAE4(relative to base address)
		FString GetName(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FB9B4(relative to base address)
		FGuid GetId(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7503FB8F8(relative to base address)
		FText GetDisplayName(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FB800(relative to base address)
		TArray GetChildPossessables(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FB668(relative to base address)
		TArray FindTracksByType(FMovieSceneBindingProxy& InBinding, UClass* TrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FB49C(relative to base address)
		TArray FindTracksByExactType(FMovieSceneBindingProxy& InBinding, UClass* TrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FB2FC(relative to base address)
		UMovieSceneTrack AddTrack(FMovieSceneBindingProxy& InBinding, UClass* TrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FAC98(relative to base address)
	};


	// Class SequencerScripting.MovieSceneEventTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneEventTrackExtensions");
			return ret;
		}

		UClass GetBoundObjectPropertyClass(FMovieSceneEvent& EventKey); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750401FF0(relative to base address)
		UMovieSceneEventTriggerSection AddEventTriggerSection(UMovieSceneEventTrack* InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FF830(relative to base address)
		UMovieSceneEventRepeaterSection AddEventRepeaterSection(UMovieSceneEventTrack* InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FF77C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneFolderExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneFolderExtensions");
			return ret;
		}

		bool SetFolderName(UMovieSceneFolder* Folder, FName InFolderName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750406FE8(relative to base address)
		bool SetFolderColor(UMovieSceneFolder* Folder, FColor InFolderColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750406E8C(relative to base address)
		bool RemoveChildTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405C04(relative to base address)
		bool RemoveChildObjectBinding(UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405A74(relative to base address)
		bool RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405970(relative to base address)
		FName GetFolderName(UMovieSceneFolder* Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750402D84(relative to base address)
		FColor GetFolderColor(UMovieSceneFolder* Folder); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750402D00(relative to base address)
		TArray GetChildTracks(UMovieSceneFolder* Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7504025A8(relative to base address)
		TArray GetChildObjectBindings(UMovieSceneFolder* Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750402400(relative to base address)
		TArray GetChildFolders(UMovieSceneFolder* Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7504022FC(relative to base address)
		bool AddChildTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FF668(relative to base address)
		bool AddChildObjectBinding(UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FF4B0(relative to base address)
		bool AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FF39C(relative to base address)
	};


	// Class SequencerScripting.MovieSceneMaterialTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneMaterialTrackExtensions");
			return ret;
		}

		void SetMaterialInfo(UMovieSceneComponentMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750407634(relative to base address)
		void SetMaterialIndex(UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407560(relative to base address)
		FComponentMaterialInfo GetMaterialInfo(UMovieSceneComponentMaterialTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403020(relative to base address)
		int32_t GetMaterialIndex(UMovieSceneComponentMaterialTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402F90(relative to base address)
	};


	// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions");
			return ret;
		}

		void SetMaterialInfo(UMovieScenePrimitiveMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750407634(relative to base address)
		void SetMaterialIndex(UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407560(relative to base address)
		FComponentMaterialInfo GetMaterialInfo(UMovieScenePrimitiveMaterialTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403020(relative to base address)
		int32_t GetMaterialIndex(UMovieScenePrimitiveMaterialTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402F90(relative to base address)
	};


	// Class SequencerScripting.MovieScenePropertyTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieScenePropertyTrackExtensions");
			return ret;
		}

		void SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750407E24(relative to base address)
		void SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504077E4(relative to base address)
		void SetByteTrackEnum(UMovieSceneByteTrack* Track, UEnum* InEnum); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504062E0(relative to base address)
		FName GetUniqueTrackName(UMovieScenePropertyTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404A7C(relative to base address)
		FString GetPropertyPath(UMovieScenePropertyTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403E50(relative to base address)
		FName GetPropertyName(UMovieScenePropertyTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403DB8(relative to base address)
		UClass GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504031E0(relative to base address)
		UEnum GetByteTrackEnum(UMovieSceneByteTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7504020B0(relative to base address)
	};


	// Class SequencerScripting.MovieSceneSectionExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneSectionExtensions");
			return ret;
		}

		void SetStartFrameSeconds(UMovieSceneSection* Section, float StartTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504088AC(relative to base address)
		void SetStartFrameBounded(UMovieSceneSection* Section, bool bIsBounded); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504087A4(relative to base address)
		void SetStartFrame(UMovieSceneSection* Section, int32_t StartFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75040851C(relative to base address)
		void SetRangeSeconds(UMovieSceneSection* Section, float StartTime, float EndTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75040813C(relative to base address)
		void SetRange(UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407F90(relative to base address)
		void SetEndFrameSeconds(UMovieSceneSection* Section, float EndTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750406B10(relative to base address)
		void SetEndFrameBounded(UMovieSceneSection* Section, bool bIsBounded); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750406A08(relative to base address)
		void SetEndFrame(UMovieSceneSection* Section, int32_t EndFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750406780(relative to base address)
		bool HasStartFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404EFC(relative to base address)
		bool HasEndFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404DC8(relative to base address)
		float GetStartFrameSeconds(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504045B4(relative to base address)
		int32_t GetStartFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404420(relative to base address)
		int32_t GetParentSequenceFrame(UMovieSceneSubSection* Section, int32_t InFrame, UMovieSceneSequence* ParentSequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403278(relative to base address)
		float GetEndFrameSeconds(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402A5C(relative to base address)
		int32_t GetEndFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504028C8(relative to base address)
		TArray GetChannelsByType(UMovieSceneSection* Section, UClass* ChannelType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402208(relative to base address)
		UMovieSceneScriptingChannel GetChannel(UMovieSceneSection* Section, FName& ChannelName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750402148(relative to base address)
		float GetAutoSizeStartFrameSeconds(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401D34(relative to base address)
		int32_t GetAutoSizeStartFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401CB4(relative to base address)
		bool GetAutoSizeHasStartFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401BE8(relative to base address)
		bool GetAutoSizeHasEndFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401B1C(relative to base address)
		float GetAutoSizeEndFrameSeconds(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401A9C(relative to base address)
		int32_t GetAutoSizeEndFrame(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401A1C(relative to base address)
		TArray GetAllChannels(UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401514(relative to base address)
	};


	// Class SequencerScripting.MovieSceneSequenceExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneSequenceExtensions");
			return ret;
		}

		void SortMarkedFrames(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750409274(relative to base address)
		void SetWorkRangeStart(UMovieSceneSequence* InSequence, double StartTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504091B4(relative to base address)
		void SetWorkRangeEnd(UMovieSceneSequence* InSequence, double EndTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504090F4(relative to base address)
		void SetViewRangeStart(UMovieSceneSequence* InSequence, double StartTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750409034(relative to base address)
		void SetViewRangeEnd(UMovieSceneSequence* InSequence, double EndTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750408F74(relative to base address)
		void SetTickResolutionDirectly(UMovieSceneSequence* Sequence, FFrameRate TickResolution); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750408CAC(relative to base address)
		void SetTickResolution(UMovieSceneSequence* Sequence, FFrameRate TickResolution); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750408B30(relative to base address)
		void SetReadOnly(UMovieSceneSequence* Sequence, bool bInReadOnly); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504082EC(relative to base address)
		void SetPlaybackStartSeconds(UMovieSceneSequence* Sequence, float StartTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407CF4(relative to base address)
		void SetPlaybackStart(UMovieSceneSequence* Sequence, int32_t StartFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407BD0(relative to base address)
		void SetPlaybackRangeLocked(UMovieSceneSequence* Sequence, bool bInLocked); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407B1C(relative to base address)
		void SetPlaybackEndSeconds(UMovieSceneSequence* Sequence, float EndTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504079EC(relative to base address)
		void SetPlaybackEnd(UMovieSceneSequence* Sequence, int32_t EndFrame); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504078C8(relative to base address)
		void SetMarkedFramesLocked(UMovieSceneSequence* Sequence, bool bInLocked); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504074AC(relative to base address)
		void SetMarkedFrameInSequence(UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750407274(relative to base address)
		void SetMarkedFrame(UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7504070C4(relative to base address)
		void SetEvaluationType(UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750406DAC(relative to base address)
		void SetDisplayRate(UMovieSceneSequence* Sequence, FFrameRate DisplayRate); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75040660C(relative to base address)
		void SetClockSource(UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504063A4(relative to base address)
		FMovieSceneBindingProxy ResolveBindingID(UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504060C0(relative to base address)
		bool RemoveTrack(UMovieSceneSequence* Sequence, UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405FA8(relative to base address)
		void RemoveRootFolderFromSequence(UMovieSceneSequence* Sequence, UMovieSceneFolder* Folder); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405D98(relative to base address)
		FSequencerScriptingRange MakeRangeSeconds(UMovieSceneSequence* Sequence, float StartTime, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504057C0(relative to base address)
		FSequencerScriptingRange MakeRange(UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t duration); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405660(relative to base address)
		TArray LocateBoundObjects(UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding, UObject* Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7504050A0(relative to base address)
		bool IsReadOnly(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75040501C(relative to base address)
		bool IsPlaybackRangeLocked(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404F98(relative to base address)
		double GetWorkRangeStart(UMovieSceneSequence* InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750404CA4(relative to base address)
		double GetWorkRangeEnd(UMovieSceneSequence* InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750404C18(relative to base address)
		double GetViewRangeStart(UMovieSceneSequence* InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750404B8C(relative to base address)
		double GetViewRangeEnd(UMovieSceneSequence* InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750404B00(relative to base address)
		TArray GetTracks(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404930(relative to base address)
		FFrameRate GetTickResolution(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504047C0(relative to base address)
		TArray GetSpawnables(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404224(relative to base address)
		TArray GetRootFoldersInSequence(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750403F1C(relative to base address)
		TArray GetPossessables(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403BF0(relative to base address)
		FMovieSceneObjectBindingID GetPortableBindingID(UMovieSceneSequence* RootSequence, UMovieSceneSequence* DestinationSequence, FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750403AD0(relative to base address)
		float GetPlaybackStartSeconds(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403988(relative to base address)
		int32_t GetPlaybackStart(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403890(relative to base address)
		FSequencerScriptingRange GetPlaybackRange(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504037A4(relative to base address)
		float GetPlaybackEndSeconds(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75040365C(relative to base address)
		int32_t GetPlaybackEnd(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403564(relative to base address)
		UMovieScene GetMovieScene(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504030D0(relative to base address)
		TArray GetMarkedFramesFromSequence(UMovieSceneSequence* Sequence, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402EB4(relative to base address)
		TArray GetMarkedFrames(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402E18(relative to base address)
		EMovieSceneEvaluationType GetEvaluationType(UMovieSceneSequence* InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750402C68(relative to base address)
		FFrameRate GetDisplayRate(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402840(relative to base address)
		EUpdateClockSource GetClockSource(UMovieSceneSequence* InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750402674(relative to base address)
		TArray GetBindings(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401EA4(relative to base address)
		FMovieSceneObjectBindingID GetBindingID(UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750401DB4(relative to base address)
		TArray FindTracksByType(UMovieSceneSequence* Sequence, UClass* TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401338(relative to base address)
		TArray FindTracksByExactType(UMovieSceneSequence* Sequence, UClass* TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750401164(relative to base address)
		int32_t FindNextMarkedFrameInSequence(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750400E98(relative to base address)
		int32_t FindNextMarkedFrame(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750400C60(relative to base address)
		int32_t FindMarkedFrameByLabel(UMovieSceneSequence* Sequence, FString InLabel); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750400B60(relative to base address)
		int32_t FindMarkedFrameByFrameNumberInSequence(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750400964(relative to base address)
		int32_t FindMarkedFrameByFrameNumber(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750400810(relative to base address)
		FMovieSceneBindingProxy FindBindingByName(UMovieSceneSequence* Sequence, FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750400668(relative to base address)
		FMovieSceneBindingProxy FindBindingById(UMovieSceneSequence* Sequence, FGuid BindingID); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7504004B4(relative to base address)
		void DeleteMarkedFrames(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750400424(relative to base address)
		void DeleteMarkedFrame(UMovieSceneSequence* Sequence, int32_t DeleteIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504002F8(relative to base address)
		bool AreMarkedFramesLocked(UMovieSceneSequence* Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750400274(relative to base address)
		UMovieSceneTrack AddTrack(UMovieSceneSequence* Sequence, UClass* TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504000E0(relative to base address)
		FMovieSceneBindingProxy AddSpawnableFromInstance(UMovieSceneSequence* Sequence, UObject* ObjectToSpawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FFFA8(relative to base address)
		FMovieSceneBindingProxy AddSpawnableFromClass(UMovieSceneSequence* Sequence, UClass* ClassToSpawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FFE70(relative to base address)
		UMovieSceneFolder AddRootFolderToSequence(UMovieSceneSequence* Sequence, FString NewFolderName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FFCAC(relative to base address)
		FMovieSceneBindingProxy AddPossessable(UMovieSceneSequence* Sequence, UObject* ObjectToPossess); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FFB9C(relative to base address)
		int32_t AddMarkedFrameToSequence(UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FF9DC(relative to base address)
		int32_t AddMarkedFrame(UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7503FF8E4(relative to base address)
	};


	// Class SequencerScripting.MovieSceneTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneTrackExtensions");
			return ret;
		}

		void SetTrackRowDisplayName(UMovieSceneTrack* Track, FText& InName, int32_t RowIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750408E20(relative to base address)
		void SetSortingOrder(UMovieSceneTrack* Track, int32_t SortingOrder); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750408468(relative to base address)
		void SetSectionToKey(UMovieSceneTrack* Track, UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7504083A0(relative to base address)
		void SetDisplayName(UMovieSceneTrack* Track, FText& InName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750406534(relative to base address)
		void SetColorTint(UMovieSceneTrack* Track, FColor& ColorTint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750406480(relative to base address)
		void RemoveSection(UMovieSceneTrack* Track, UMovieSceneSection* Section); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750405E4C(relative to base address)
		FText GetTrackRowDisplayName(UMovieSceneTrack* Track, int32_t RowIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404848(relative to base address)
		int32_t GetSortingOrder(UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750404194(relative to base address)
		UMovieSceneSection GetSectionToKey(UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403FCC(relative to base address)
		TArray GetSections(UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75040406C(relative to base address)
		FText GetDisplayName(UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750402798(relative to base address)
		FColor GetColorTint(UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750402714(relative to base address)
		UMovieSceneSection AddSection(UMovieSceneTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7503FFDAC(relative to base address)
	};


	// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions");
			return ret;
		}

		void SetNumChannelsUsed(UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407720(relative to base address)
		int32_t GetNumChannelsUsed(UMovieSceneFloatVectorTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403150(relative to base address)
	};


	// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions");
			return ret;
		}

		void SetNumChannelsUsed(UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750407720(relative to base address)
		int32_t GetNumChannelsUsed(UMovieSceneDoubleVectorTrack* Track); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750403150(relative to base address)
	};


	// Class SequencerScripting.SequencerScriptingRangeExtensions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.SequencerScriptingRangeExtensions");
			return ret;
		}

		void SetStartSeconds(FSequencerScriptingRange& Range, float Start); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7504089C4(relative to base address)
		void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75040863C(relative to base address)
		void SetEndSeconds(FSequencerScriptingRange& Range, float End); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750406C28(relative to base address)
		void SetEndFrame(FSequencerScriptingRange& Range, int32_t End); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7504068A0(relative to base address)
		void RemoveStart(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750405F18(relative to base address)
		void RemoveEnd(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750405D08(relative to base address)
		bool HasStart(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750404E64(relative to base address)
		bool HasEnd(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750404D30(relative to base address)
		float GetStartSeconds(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750404700(relative to base address)
		int32_t GetStartFrame(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750404520(relative to base address)
		float GetEndSeconds(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750402BA8(relative to base address)
		int32_t GetEndFrame(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7504029C8(relative to base address)
	};

}
