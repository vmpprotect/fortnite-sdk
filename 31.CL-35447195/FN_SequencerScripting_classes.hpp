#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SequencerScripting
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SequencerScripting.MovieSceneScriptingKey
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMovieSceneScriptingKey : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingActorReferenceKey");
			return ret;
		}

		void SetValue(FMovieSceneObjectBindingID& InNewValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414B8FC38
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B8FB58
		FMovieSceneObjectBindingID GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B8FA78
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B8F998
	};


	// Class SequencerScripting.MovieSceneScriptingChannel
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMovieSceneScriptingChannel : public UObject	
	{
	public:
		FName ChannelName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel");
			return ret;
		}

		void SetDefault(FMovieSceneObjectBindingID InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B90338
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B90258
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B90178
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90098
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B8FFB8
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B8FED8
		FMovieSceneObjectBindingID GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B8FDF8
		UMovieSceneScriptingActorReferenceKey AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414B8FD18
	};


	// Class SequencerScripting.MovieSceneScriptingBoolKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingBoolKey");
			return ret;
		}

		void SetValue(bool InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B906B8
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B905D8
		bool GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B904F8
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90418
	};


	// Class SequencerScripting.MovieSceneScriptingBoolChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingBoolChannel");
			return ret;
		}

		void SetDefault(bool InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B91058
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B90F78
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B90E98
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90DB8
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90CD8
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B90BF8
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90B18
		bool GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90A38
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90958
		FSequencerScriptingRange ComputeEffectiveRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B90878
		UMovieSceneScriptingBoolKey AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B90798
	};


	// Class SequencerScripting.MovieSceneScriptingByteKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingByteKey");
			return ret;
		}

		void SetValue(char InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B913D8
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B912F8
		char GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91218
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91138
	};


	// Class SequencerScripting.MovieSceneScriptingByteChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingByteChannel");
			return ret;
		}

		void SetDefault(char InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B91AD8
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B919F8
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B91918
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91838
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B91758
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91678
		char GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91598
		UMovieSceneScriptingByteKey AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B914B8
	};


	// Class SequencerScripting.MovieSceneScriptingDoubleKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingDoubleKey");
			return ret;
		}

		void SetValue(double InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B92A98
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B929B8
		void SetTangentWeightMode(TEnumAsByte InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B928D8
		void SetTangentMode(TEnumAsByte InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B927F8
		void SetLeaveTangentWeight(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B92718
		void SetLeaveTangent(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B92638
		void SetInterpolationMode(TEnumAsByte InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B92558
		void SetArriveTangentWeight(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B92478
		void SetArriveTangent(float InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B92398
		double GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B922B8
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B921D8
		TEnumAsByte GetTangentWeightMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B920F8
		TEnumAsByte GetTangentMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B92018
		float GetLeaveTangentWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91F38
		float GetLeaveTangent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91E58
		TEnumAsByte GetInterpolationMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91D78
		float GetArriveTangentWeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91C98
		float GetArriveTangent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B91BB8
	};


	// Class SequencerScripting.MovieSceneScriptingDoubleChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingDoubleChannel");
			return ret;
		}

		void SetPreInfinityExtrapolation(TEnumAsByte InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B937B8
		void SetPostInfinityExtrapolation(TEnumAsByte InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B936D8
		void SetDefault(double InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B935F8
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B93518
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B93438
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93358
		TEnumAsByte GetPreInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93278
		TEnumAsByte GetPostInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93198
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B930B8
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B92FD8
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B92EF8
		double GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B92E18
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B92D38
		FSequencerScriptingRange ComputeEffectiveRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B92C58
		UMovieSceneScriptingDoubleKey AddKey(FFrameNumber& InTime, double NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B92B78
	};


	// Class SequencerScripting.MovieSceneScriptingEventKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingEventKey");
			return ret;
		}

		void SetValue(FMovieSceneEvent& InNewValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414B93B38
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B93A58
		FMovieSceneEvent GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93978
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93898
	};


	// Class SequencerScripting.MovieSceneScriptingEventChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingEventChannel");
			return ret;
		}

		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B93EB8
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B93DD8
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93CF8
		UMovieSceneScriptingEventKey AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B93C18
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

		void SetValue(float InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94E78
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B94D98
		void SetTangentWeightMode(TEnumAsByte InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94CB8
		void SetTangentMode(TEnumAsByte InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94BD8
		void SetLeaveTangentWeight(float InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94AF8
		void SetLeaveTangent(float InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94A18
		void SetInterpolationMode(TEnumAsByte InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94938
		void SetArriveTangentWeight(float InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94858
		void SetArriveTangent(float InNewValue); // Flags: Native|Public|BlueprintCallable 0x7FF414B94778
		float GetValue(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B94698
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B945B8
		TEnumAsByte GetTangentWeightMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B944D8
		TEnumAsByte GetTangentMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B943F8
		float GetLeaveTangentWeight(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B94318
		float GetLeaveTangent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B94238
		TEnumAsByte GetInterpolationMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B94158
		float GetArriveTangentWeight(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B94078
		float GetArriveTangent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B93F98
	};


	// Class SequencerScripting.MovieSceneScriptingActualFloatKey
	// Inherited from UMovieSceneScriptingFloatKey -> UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x40]; // 0x30(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingFloatChannel");
			return ret;
		}

		void SetPreInfinityExtrapolation(TEnumAsByte InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B95B98
		void SetPostInfinityExtrapolation(TEnumAsByte InExtrapolation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B95AB8
		void SetDefault(float InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B959D8
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B958F8
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B95818
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95738
		TEnumAsByte GetPreInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95658
		TEnumAsByte GetPostInfinityExtrapolation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95578
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95498
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B953B8
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B952D8
		float GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B951F8
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95118
		FSequencerScriptingRange ComputeEffectiveRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95038
		UMovieSceneScriptingFloatKey AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B94F58
	};


	// Class SequencerScripting.MovieSceneScriptingIntegerKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingIntegerKey");
			return ret;
		}

		void SetValue(int32_t InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B95F18
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B95E38
		int32_t GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95D58
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B95C78
	};


	// Class SequencerScripting.MovieSceneScriptingIntegerChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingIntegerChannel");
			return ret;
		}

		void SetDefault(int32_t InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B967D8
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B966F8
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B96618
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96538
		int32_t GetNumKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96458
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B96378
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96298
		int32_t GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B961B8
		TArray EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B960D8
		UMovieSceneScriptingIntegerKey AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B95FF8
	};


	// Class SequencerScripting.MovieSceneScriptingObjectPathKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingObjectPathKey");
			return ret;
		}

		void SetValue(UObject InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B96B58
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B96A78
		UObject GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96998
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B968B8
	};


	// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingObjectPathChannel");
			return ret;
		}

		void SetDefault(UObject InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B97258
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B97178
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B97098
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96FB8
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B96ED8
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96DF8
		UObject GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B96D18
		UMovieSceneScriptingObjectPathKey AddKey(FFrameNumber InTime, UObject NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414B96C38
	};


	// Class SequencerScripting.MovieSceneScriptingStringKey
	// Inherited from UMovieSceneScriptingKey -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingStringKey");
			return ret;
		}

		void SetValue(FString InNewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B975D8
		void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B974F8
		FString GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B97418
		FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B97338
	};


	// Class SequencerScripting.MovieSceneScriptingStringChannel
	// Inherited from UMovieSceneScriptingChannel -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SequencerScripting.MovieSceneScriptingStringChannel");
			return ret;
		}

		void SetDefault(FString InDefaultValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B97CD8
		void RemoveKey(UMovieSceneScriptingKey Key); // Flags: Native|Public|BlueprintCallable 0x7FF414B97BF8
		void RemoveDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414B97B18
		bool HasDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B97A38
		TArray GetKeysByIndex(TArray& Indices); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414B97958
		TArray GetKeys(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B97878
		FString GetDefault(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414B97798
		UMovieSceneScriptingStringKey AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B976B8
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

		void SetSpawnableBindingID(FMovieSceneBindingProxy& InBinding, FMovieSceneObjectBindingID& SpawnableBindingID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98F38
		void SetSortingOrder(FMovieSceneBindingProxy& InBinding, int32_t SortingOrder); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98E58
		void SetParent(FMovieSceneBindingProxy& InBinding, FMovieSceneBindingProxy& InParentBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98D78
		void SetName(FMovieSceneBindingProxy& InBinding, FString InName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98C98
		void SetDisplayName(FMovieSceneBindingProxy& InBinding, FText& InDisplayName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98BB8
		void RemoveTrack(FMovieSceneBindingProxy& InBinding, UMovieSceneTrack TrackToRemove); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98AD8
		void Remove(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B989F8
		void MoveBindingContents(FMovieSceneBindingProxy& SourceBindingId, FMovieSceneBindingProxy& DestinationBindingId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98918
		bool IsValid(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414B98838
		TArray GetTracks(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98758
		int32_t GetSortingOrder(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98678
		UClass GetPossessedObjectClass(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98598
		FMovieSceneBindingProxy GetParent(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B984B8
		UObject GetObjectTemplate(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B983D8
		FString GetName(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B982F8
		FGuid GetId(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414B98218
		FText GetDisplayName(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98138
		TArray GetChildPossessables(FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B98058
		TArray FindTracksByType(FMovieSceneBindingProxy& InBinding, UClass TrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B97F78
		TArray FindTracksByExactType(FMovieSceneBindingProxy& InBinding, UClass TrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B97E98
		UMovieSceneTrack AddTrack(FMovieSceneBindingProxy& InBinding, UClass TrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B97DB8
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

		UClass GetBoundObjectPropertyClass(FMovieSceneEvent& EventKey); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B991D8
		UMovieSceneEventTriggerSection AddEventTriggerSection(UMovieSceneEventTrack InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B990F8
		UMovieSceneEventRepeaterSection AddEventRepeaterSection(UMovieSceneEventTrack InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99018
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

		bool SetFolderName(UMovieSceneFolder Folder, FName InFolderName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99D38
		bool SetFolderColor(UMovieSceneFolder Folder, FColor InFolderColor); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B99C58
		bool RemoveChildTrack(UMovieSceneFolder Folder, UMovieSceneTrack InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99B78
		bool RemoveChildObjectBinding(UMovieSceneFolder Folder, FMovieSceneBindingProxy InObjectBinding); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99A98
		bool RemoveChildFolder(UMovieSceneFolder TargetFolder, UMovieSceneFolder FolderToRemove); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B999B8
		FName GetFolderName(UMovieSceneFolder Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B998D8
		FColor GetFolderColor(UMovieSceneFolder Folder); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414B997F8
		TArray GetChildTracks(UMovieSceneFolder Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B99718
		TArray GetChildObjectBindings(UMovieSceneFolder Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B99638
		TArray GetChildFolders(UMovieSceneFolder Folder); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B99558
		bool AddChildTrack(UMovieSceneFolder Folder, UMovieSceneTrack InTrack); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99478
		bool AddChildObjectBinding(UMovieSceneFolder Folder, FMovieSceneBindingProxy InObjectBinding); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99398
		bool AddChildFolder(UMovieSceneFolder TargetFolder, UMovieSceneFolder FolderToAdd); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B992B8
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

		void SetMaterialInfo(UMovieSceneComponentMaterialTrack Track, FComponentMaterialInfo& MaterialInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9A0B8
		void SetMaterialIndex(UMovieSceneComponentMaterialTrack Track, int32_t MaterialIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99FD8
		FComponentMaterialInfo GetMaterialInfo(UMovieSceneComponentMaterialTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99EF8
		int32_t GetMaterialIndex(UMovieSceneComponentMaterialTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B99E18
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

		void SetMaterialInfo(UMovieScenePrimitiveMaterialTrack Track, FComponentMaterialInfo& MaterialInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9A438
		void SetMaterialIndex(UMovieScenePrimitiveMaterialTrack Track, int32_t MaterialIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A358
		FComponentMaterialInfo GetMaterialInfo(UMovieScenePrimitiveMaterialTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A278
		int32_t GetMaterialIndex(UMovieScenePrimitiveMaterialTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A198
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

		void SetPropertyNameAndPath(UMovieScenePropertyTrack Track, FName& InPropertyName, FString InPropertyPath); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9AB38
		void SetObjectPropertyClass(UMovieSceneObjectPropertyTrack Track, UClass PropertyClass); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9AA58
		void SetByteTrackEnum(UMovieSceneByteTrack Track, UEnum InEnum); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A978
		FName GetUniqueTrackName(UMovieScenePropertyTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A898
		FString GetPropertyPath(UMovieScenePropertyTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A7B8
		FName GetPropertyName(UMovieScenePropertyTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A6D8
		UClass GetObjectPropertyClass(UMovieSceneObjectPropertyTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9A5F8
		UEnum GetByteTrackEnum(UMovieSceneByteTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9A518
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

		void SetStartFrameSeconds(UMovieSceneSection Section, float StartTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C038
		void SetStartFrameBounded(UMovieSceneSection Section, bool bIsBounded); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BF58
		void SetStartFrame(UMovieSceneSection Section, int32_t StartFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BE78
		void SetRangeSeconds(UMovieSceneSection Section, float StartTime, float EndTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BD98
		void SetRange(UMovieSceneSection Section, int32_t StartFrame, int32_t EndFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BCB8
		void SetEndFrameSeconds(UMovieSceneSection Section, float EndTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BBD8
		void SetEndFrameBounded(UMovieSceneSection Section, bool bIsBounded); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BAF8
		void SetEndFrame(UMovieSceneSection Section, int32_t EndFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9BA18
		bool HasStartFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B938
		bool HasEndFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B858
		float GetStartFrameSeconds(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B778
		int32_t GetStartFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B698
		int32_t GetParentSequenceFrame(UMovieSceneSubSection Section, int32_t InFrame, UMovieSceneSequence ParentSequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B5B8
		float GetEndFrameSeconds(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B4D8
		int32_t GetEndFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B3F8
		TArray GetChannelsByType(UMovieSceneSection Section, UClass ChannelType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B318
		UMovieSceneScriptingChannel GetChannel(UMovieSceneSection Section, FName& ChannelName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9B238
		float GetAutoSizeStartFrameSeconds(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B158
		int32_t GetAutoSizeStartFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9B078
		bool GetAutoSizeHasStartFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9AF98
		bool GetAutoSizeHasEndFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9AEB8
		float GetAutoSizeEndFrameSeconds(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9ADD8
		int32_t GetAutoSizeEndFrame(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9ACF8
		TArray GetAllChannels(UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9AC18
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

		void SortMarkedFrames(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9FC98
		void SetWorkRangeStart(UMovieSceneSequence InSequence, double StartTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9FBB8
		void SetWorkRangeEnd(UMovieSceneSequence InSequence, double EndTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9FAD8
		void SetViewRangeStart(UMovieSceneSequence InSequence, double StartTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F9F8
		void SetViewRangeEnd(UMovieSceneSequence InSequence, double EndTimeInSeconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F918
		void SetTickResolutionDirectly(UMovieSceneSequence Sequence, FFrameRate TickResolution); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F838
		void SetTickResolution(UMovieSceneSequence Sequence, FFrameRate TickResolution); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F758
		void SetReadOnly(UMovieSceneSequence Sequence, bool bInReadOnly); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F678
		void SetPlaybackStartSeconds(UMovieSceneSequence Sequence, float StartTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F598
		void SetPlaybackStart(UMovieSceneSequence Sequence, int32_t StartFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F4B8
		void SetPlaybackRangeLocked(UMovieSceneSequence Sequence, bool bInLocked); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F3D8
		void SetPlaybackEndSeconds(UMovieSceneSequence Sequence, float EndTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F2F8
		void SetPlaybackEnd(UMovieSceneSequence Sequence, int32_t EndFrame); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F218
		void SetMarkedFramesLocked(UMovieSceneSequence Sequence, bool bInLocked); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9F138
		void SetMarkedFrameInSequence(UMovieSceneSequence Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9F058
		void SetMarkedFrame(UMovieSceneSequence Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9EF78
		void SetEvaluationType(UMovieSceneSequence InSequence, EMovieSceneEvaluationType InEvaluationType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9EE98
		void SetDisplayRate(UMovieSceneSequence Sequence, FFrameRate DisplayRate); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9EDB8
		void SetClockSource(UMovieSceneSequence InSequence, EUpdateClockSource InClockSource); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9ECD8
		FMovieSceneBindingProxy ResolveBindingID(UMovieSceneSequence RootSequence, FMovieSceneObjectBindingID InObjectBindingID); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9EBF8
		bool RemoveTrack(UMovieSceneSequence Sequence, UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9EB18
		void RemoveRootFolderFromSequence(UMovieSceneSequence Sequence, UMovieSceneFolder Folder); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9EA38
		FSequencerScriptingRange MakeRangeSeconds(UMovieSceneSequence Sequence, float StartTime, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9E958
		FSequencerScriptingRange MakeRange(UMovieSceneSequence Sequence, int32_t StartFrame, int32_t duration); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9E878
		TArray LocateBoundObjects(UMovieSceneSequence Sequence, FMovieSceneBindingProxy& InBinding, UObject Context); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9E798
		bool IsReadOnly(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9E6B8
		bool IsPlaybackRangeLocked(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9E5D8
		double GetWorkRangeStart(UMovieSceneSequence InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9E4F8
		double GetWorkRangeEnd(UMovieSceneSequence InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9E418
		double GetViewRangeStart(UMovieSceneSequence InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9E338
		double GetViewRangeEnd(UMovieSceneSequence InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9E258
		TArray GetTracks(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9E178
		FFrameRate GetTickResolution(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9E098
		TArray GetSpawnables(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9DFB8
		TArray GetRootFoldersInSequence(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9DED8
		TArray GetPossessables(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9DDF8
		FMovieSceneObjectBindingID GetPortableBindingID(UMovieSceneSequence RootSequence, UMovieSceneSequence DestinationSequence, FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9DD18
		float GetPlaybackStartSeconds(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9DC38
		int32_t GetPlaybackStart(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9DB58
		FSequencerScriptingRange GetPlaybackRange(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9DA78
		float GetPlaybackEndSeconds(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D998
		int32_t GetPlaybackEnd(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D8B8
		UMovieScene GetMovieScene(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D7D8
		TArray GetMarkedFramesFromSequence(UMovieSceneSequence Sequence, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D6F8
		TArray GetMarkedFrames(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D618
		EMovieSceneEvaluationType GetEvaluationType(UMovieSceneSequence InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9D538
		FFrameRate GetDisplayRate(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D458
		EUpdateClockSource GetClockSource(UMovieSceneSequence InSequence); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414B9D378
		TArray GetBindings(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D298
		FMovieSceneObjectBindingID GetBindingID(UMovieSceneSequence Sequence, FMovieSceneBindingProxy& InBinding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9D1B8
		TArray FindTracksByType(UMovieSceneSequence Sequence, UClass TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9D0D8
		TArray FindTracksByExactType(UMovieSceneSequence Sequence, UClass TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9CFF8
		int32_t FindNextMarkedFrameInSequence(UMovieSceneSequence Sequence, FFrameNumber InFrameNumber, bool bForward, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9CF18
		int32_t FindNextMarkedFrame(UMovieSceneSequence Sequence, FFrameNumber InFrameNumber, bool bForward); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9CE38
		int32_t FindMarkedFrameByLabel(UMovieSceneSequence Sequence, FString InLabel); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9CD58
		int32_t FindMarkedFrameByFrameNumberInSequence(UMovieSceneSequence Sequence, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9CC78
		int32_t FindMarkedFrameByFrameNumber(UMovieSceneSequence Sequence, FFrameNumber InFrameNumber); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9CB98
		FMovieSceneBindingProxy FindBindingByName(UMovieSceneSequence Sequence, FString Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9CAB8
		FMovieSceneBindingProxy FindBindingById(UMovieSceneSequence Sequence, FGuid BindingID); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9C9D8
		void DeleteMarkedFrames(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C8F8
		void DeleteMarkedFrame(UMovieSceneSequence Sequence, int32_t DeleteIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C818
		bool AreMarkedFramesLocked(UMovieSceneSequence Sequence); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C738
		UMovieSceneTrack AddTrack(UMovieSceneSequence Sequence, UClass TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C658
		FMovieSceneBindingProxy AddSpawnableFromInstance(UMovieSceneSequence Sequence, UObject ObjectToSpawn); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C578
		FMovieSceneBindingProxy AddSpawnableFromClass(UMovieSceneSequence Sequence, UClass ClassToSpawn); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C498
		UMovieSceneFolder AddRootFolderToSequence(UMovieSceneSequence Sequence, FString NewFolderName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C3B8
		FMovieSceneBindingProxy AddPossessable(UMovieSceneSequence Sequence, UObject ObjectToPossess); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9C2D8
		int32_t AddMarkedFrameToSequence(UMovieSceneSequence Sequence, FMovieSceneMarkedFrame& InMarkedFrame, EMovieSceneTimeUnit TimeUnit); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9C1F8
		int32_t AddMarkedFrame(UMovieSceneSequence Sequence, FMovieSceneMarkedFrame& InMarkedFrame); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414B9C118
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

		void SetTrackRowDisplayName(UMovieSceneTrack Track, FText& InName, int32_t RowIndex); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA07F8
		void SetSortingOrder(UMovieSceneTrack Track, int32_t SortingOrder); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA0718
		void SetSectionToKey(UMovieSceneTrack Track, UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA0638
		void SetDisplayName(UMovieSceneTrack Track, FText& InName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA0558
		void SetColorTint(UMovieSceneTrack Track, FColor& ColorTint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BA0478
		void RemoveSection(UMovieSceneTrack Track, UMovieSceneSection Section); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA0398
		FText GetTrackRowDisplayName(UMovieSceneTrack Track, int32_t RowIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA02B8
		int32_t GetSortingOrder(UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA01D8
		UMovieSceneSection GetSectionToKey(UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA00F8
		TArray GetSections(UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA0018
		FText GetDisplayName(UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9FF38
		FColor GetColorTint(UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414B9FE58
		UMovieSceneSection AddSection(UMovieSceneTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414B9FD78
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

		void SetNumChannelsUsed(UMovieSceneFloatVectorTrack Track, int32_t InNumChannelsUsed); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA09B8
		int32_t GetNumChannelsUsed(UMovieSceneFloatVectorTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA08D8
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

		void SetNumChannelsUsed(UMovieSceneDoubleVectorTrack Track, int32_t InNumChannelsUsed); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA0B78
		int32_t GetNumChannelsUsed(UMovieSceneDoubleVectorTrack Track); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BA0A98
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

		void SetStartSeconds(FSequencerScriptingRange& Range, float Start); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA15F8
		void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA1518
		void SetEndSeconds(FSequencerScriptingRange& Range, float End); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA1438
		void SetEndFrame(FSequencerScriptingRange& Range, int32_t End); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA1358
		void RemoveStart(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA1278
		void RemoveEnd(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA1198
		bool HasStart(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA10B8
		bool HasEnd(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA0FD8
		float GetStartSeconds(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA0EF8
		int32_t GetStartFrame(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA0E18
		float GetEndSeconds(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA0D38
		int32_t GetEndFrame(FSequencerScriptingRange& Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA0C58
	};

}
