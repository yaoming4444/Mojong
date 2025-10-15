#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860;
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F;
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3;
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948;
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791;
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t10EFAE6B6BF86D3EA246CD7BB5216D28DFA57F5C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F____617D465DD3D2530191F741B2EE7C9C999B4D498075176B20433E534279DB5D1A_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F____F7F9FD5597FD62BE99F5888C9C9C42B1FF0D900D273F5D9BEB76FC07B7DED897_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612;
IL2CPP_EXTERN_C String_t* _stringLiteral2478869FE087903451AEBC85CA33DBDF081CCAF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4013E5E88C2171694988C9818C0339FDA4E6B30F;
IL2CPP_EXTERN_C String_t* _stringLiteral43F467B57F117AB9881882BD47460419D59340FD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F88ED9B30F2AB64825F279EE35E3EE38153DDCF;
IL2CPP_EXTERN_C String_t* _stringLiteral97E1360CCA07F4C93334C1ACF7ADEA68AFAC743F;
IL2CPP_EXTERN_C String_t* _stringLiteralA211FD6F9DC081A1311C02E414175007CA919044;
IL2CPP_EXTERN_C String_t* _stringLiteralBF666DC28A44A677A8B7129A21CFC5D281CF7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC8EA794C7E2E6B3E854B5482BBB1C0DDD0D67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE697DBBAC6F5DC17B8F0F13A9F1560E8F8404117;
IL2CPP_EXTERN_C String_t* _stringLiteralF226672299FAF2A220099C0767092B56B36F869A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tEBB047F14326BC2B16C3B96AE3154012B1FC8904 
{
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F  : public RuntimeObject
{
};
struct BitUtils_tDAE91775AF6F77789525230E47CC57F947162DB1  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860  : public RuntimeObject
{
	String_t* ___applicationIdentifier;
	String_t* ___applicationAuthCode;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___applicationData;
};
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	int32_t ___currentByte;
	int32_t ___currentBitPosition;
	int32_t ___currentBufferPosition;
	int32_t ___currentBufferSize;
	bool ___endReached;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer;
};
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948  : public RuntimeObject
{
	bool ___userInput;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors;
	int32_t ___delay;
};
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dictionaryEntryOffsets;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dictionaryEntrySizes;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionaryHeap;
	int32_t ___dictionarySize;
	int32_t ___dictionaryHeapPosition;
	int32_t ___initialDictionarySize;
	int32_t ___initialLzwCodeSize;
	int32_t ___initialDictionaryHeapPosition;
	int32_t ___nextLzwCodeGrowth;
	int32_t ___currentMinLzwCodeSize;
	int32_t ___codeSize;
	int32_t ___clearCodeId;
	int32_t ___stopCodeId;
	int32_t ___lastCodeId;
	bool ___isFull;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t10EFAE6B6BF86D3EA246CD7BB5216D28DFA57F5C  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	bool ___isInterlaced;
	bool ___hasLocalColorTable;
	int32_t ___localColorTableSize;
};
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___isInterlaced;
	int32_t ___hasLocalColorTable;
	int32_t ___localColorTableSize;
};
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___isInterlaced;
	int32_t ___hasLocalColorTable;
	int32_t ___localColorTableSize;
};
struct GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 
{
	bool ___hasLoopCount;
	bool ___hasBufferSize;
	int32_t ___loopCount;
	int32_t ___bufferSize;
};
struct GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke
{
	int32_t ___hasLoopCount;
	int32_t ___hasBufferSize;
	int32_t ___loopCount;
	int32_t ___bufferSize;
};
struct GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com
{
	int32_t ___hasLoopCount;
	int32_t ___hasBufferSize;
	int32_t ___loopCount;
	int32_t ___bufferSize;
};
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___palette;
	int32_t ___size;
	bool ___isGlobal;
};
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___palette;
	int32_t ___size;
	int32_t ___isGlobal;
};
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___palette;
	int32_t ___size;
	int32_t ___isGlobal;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1564_t75198E67B89D780D2D2D858DC53BBAFAC38777A4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1564_t75198E67B89D780D2D2D858DC53BBAFAC38777A4__padding[1564];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D744_t2D51E59FEBAECBF76C41EDC30F3318DB56B95817 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D744_t2D51E59FEBAECBF76C41EDC30F3318DB56B95817__padding[744];
	};
};
#pragma pack(pop, tp)
struct U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10 
{
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___U3CU3E4__this;
	int32_t ___y;
	int32_t ___x;
	int32_t ___currentRow;
	int32_t ___width;
};
struct MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	int32_t ___value__;
};
struct GifDisposalMethod_tB7BD71E9CF412E646E00E69FBC87E666F824A869 
{
	int32_t ___value__;
};
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A 
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___charWidth;
	int32_t ___charHeight;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor;
	String_t* ___text;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors;
};
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___charWidth;
	int32_t ___charHeight;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor;
	char* ___text;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors;
};
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com
{
	int32_t ___left;
	int32_t ___top;
	int32_t ___width;
	int32_t ___height;
	int32_t ___charWidth;
	int32_t ___charHeight;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor;
	Il2CppChar* ___text;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors;
};
struct GifVersion_t7319E3B216530639E6D8AE657B680573E630A39B 
{
	int32_t ___value__;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	int32_t ___value__;
};
struct Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7 
{
	int32_t ___value__;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
};
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3  : public RuntimeObject
{
	bool ___U3CFlipVerticallyU3Ek__BackingField;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___U3CBackgroundColorU3Ek__BackingField;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___canvasColors;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___revertDisposalBuffer;
	int32_t ___canvasWidth;
	int32_t ___canvasHeight;
	bool ___canvasIsEmpty;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___framePalette;
	int32_t ___frameDisposalMethod;
	int32_t ___frameCanvasPosition;
	int32_t ___frameCanvasRowEndPosition;
	int32_t ___frameTransparentColorIndex;
	int32_t ___frameRowCurrent;
	int32_t ___frameX;
	int32_t ___frameY;
	int32_t ___frameWidth;
	int32_t ___frameHeight;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frameRowStart;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frameRowEnd;
};
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 
{
	bool ___userInput;
	int32_t ___disposalMethod;
	int32_t ___delayTime;
	bool ___hasTransparency;
	int32_t ___transparentColorIndex;
};
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke
{
	int32_t ___userInput;
	int32_t ___disposalMethod;
	int32_t ___delayTime;
	int32_t ___hasTransparency;
	int32_t ___transparentColorIndex;
};
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com
{
	int32_t ___userInput;
	int32_t ___disposalMethod;
	int32_t ___delayTime;
	int32_t ___hasTransparency;
	int32_t ___transparentColorIndex;
};
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 
{
	int32_t ___version;
	int32_t ___width;
	int32_t ___height;
	bool ___hasGlobalColorTable;
	int32_t ___globalColorTableSize;
	int32_t ___transparentColorIndex;
	bool ___sortColors;
	int32_t ___colorResolution;
	int32_t ___pixelAspectRatio;
};
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke
{
	int32_t ___version;
	int32_t ___width;
	int32_t ___height;
	int32_t ___hasGlobalColorTable;
	int32_t ___globalColorTableSize;
	int32_t ___transparentColorIndex;
	int32_t ___sortColors;
	int32_t ___colorResolution;
	int32_t ___pixelAspectRatio;
};
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com
{
	int32_t ___version;
	int32_t ___width;
	int32_t ___height;
	int32_t ___hasGlobalColorTable;
	int32_t ___globalColorTableSize;
	int32_t ___transparentColorIndex;
	int32_t ___sortColors;
	int32_t ___colorResolution;
	int32_t ___pixelAspectRatio;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD  : public RuntimeObject
{
	bool ___U3CDrawPlainTextBackgroundU3Ek__BackingField;
	int32_t ___U3CCurrentTokenU3Ek__BackingField;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___currentStream;
	int64_t ___headerStartPosition;
	int64_t ___firstFrameStartPosition;
	GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 ___header;
	GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 ___graphicControl;
	GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 ___imageDescriptor;
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___canvas;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* ___lzwDictionary;
	GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___blockReader;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___globalColorTable;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___localColorTable;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___headerBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorTableBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extensionApplicationBuffer;
	bool ___nextPaletteIsGlobal;
};
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F_StaticFields
{
	__StaticArrayInitTypeSizeU3D744_t2D51E59FEBAECBF76C41EDC30F3318DB56B95817 ___617D465DD3D2530191F741B2EE7C9C999B4D498075176B20433E534279DB5D1A;
	__StaticArrayInitTypeSizeU3D1564_t75198E67B89D780D2D2D858DC53BBAFAC38777A4 ___F7F9FD5597FD62BE99F5888C9C9C42B1FF0D900D273F5D9BEB76FC07B7DED897;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___4_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, bool ___4_deinterlace, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_row, U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* ___1_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_disposePrevious, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3 (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, String_t* ___1_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F (uint8_t ___0_b, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF (int32_t ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0 (uint8_t ___0_b, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, int32_t ___1_expectedValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_lzwMinCodeSize, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___5_colorTable, int32_t ___6_transparentColorIndex, bool ___7_isInterlaced, int32_t ___8_disposalMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt32LittleEndian_m7BB989504B2207AC7B4CF6495A7BCCD1A997448F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifApplicationExtension__ctor_m6224C7111883A017C592A7A88B839E67A1928BE6 (GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* __this, const RuntimeMethod* method) ;
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___4_palette, int32_t ___5_transparentColorIndex, bool ___6_isInterlaced, int32_t ___7_disposalMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_minLzwCodeSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___0_reader, GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___1_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___0_collection, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifImage_get_DelayMs_mEFDA5F3F7FFF218E5A536FCF1D7893A80962E539 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelayMs_mB05AF7D32EF57699413249C3BDDDD49B2758DFA9 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_baseEntry, int32_t ___1_deriveEntry, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m0BCC98EE09A58B1AD1F4622BE64C0EEF3F6E8494 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F____617D465DD3D2530191F741B2EE7C9C999B4D498075176B20433E534279DB5D1A_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F____F7F9FD5597FD62BE99F5888C9C9C42B1FF0D900D273F5D9BEB76FC07B7DED897_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1564));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F____F7F9FD5597FD62BE99F5888C9C9C42B1FF0D900D273F5D9BEB76FC07B7DED897_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)744));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tE92A1B75B8ACCD75E17B237C2F1B6F05892CBE9F____617D465DD3D2530191F741B2EE7C9C999B4D498075176B20433E534279DB5D1A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)13);
		(&V_0)->___TotalTypes = ((int32_t)13);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 148864
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m998BB1A8C0DF5CD22006FD5F3D5174F2A287CA7E (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t10EFAE6B6BF86D3EA246CD7BB5216D28DFA57F5C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshal_pinvoke(const MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF& unmarshaled, MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshal_pinvoke_back(const MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_pinvoke& marshaled, MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshal_pinvoke_cleanup(MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshal_com(const MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF& unmarshaled, MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshal_com_back(const MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_com& marshaled, MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshal_com_cleanup(MonoScriptData_tBA47313D53537057C1C6E232BDFB165BCD0440AF_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148865
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:19>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:21>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:22>
		return;
	}
}
// Method Definition Index: 148866
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mE63DA83DBB10E85909B556CFDD1531FE9161155A (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:24>
		GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:26>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline(__this, L_0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:27>
		return;
	}
}
// Method Definition Index: 148867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:34>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream), (void*)L_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:35>
		return;
	}
}
// Method Definition Index: 148868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:42>
		__this->___currentByte = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:43>
		__this->___currentBitPosition = 8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:44>
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:45>
		return;
	}
}
// Method Definition Index: 148869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0008;
	}

IL_0002:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:54>
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
	}

IL_0008:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:52>
		bool L_0 = __this->___endReached;
		if (!L_0)
		{
			goto IL_0002;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:56>
		return;
	}
}
// Method Definition Index: 148870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B9_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:65>
		V_0 = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:66>
		int32_t L_0 = ___0_count;
		V_1 = L_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:67>
		V_2 = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:68>
		int32_t L_1 = __this->___currentBitPosition;
		V_3 = ((int32_t)il2cpp_codegen_subtract(8, L_1));
		goto IL_00bf;
	}

IL_0014:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:72>
		int32_t L_2 = __this->___currentBitPosition;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:74>
		__this->___currentBitPosition = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:75>
		V_3 = 8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:77>
		bool L_3 = __this->___endReached;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:81>
		__this->___currentByte = 0;
		goto IL_006c;
	}

IL_0037:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:85>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buffer;
		int32_t L_5 = __this->___currentBufferPosition;
		V_6 = L_5;
		int32_t L_6 = V_6;
		__this->___currentBufferPosition = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_6;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		__this->___currentByte = L_9;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:86>
		int32_t L_10 = __this->___currentBufferPosition;
		int32_t L_11 = __this->___currentBufferSize;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:87>
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
	}

IL_006c:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:91>
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___currentBitPosition;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 1))<<((int32_t)(L_13&((int32_t)31))))));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:92>
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_16 = V_1;
		G_B9_0 = L_16;
		goto IL_0089;
	}

IL_0088:
	{
		int32_t L_17 = V_3;
		G_B9_0 = L_17;
	}

IL_0089:
	{
		V_5 = G_B9_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:94>
		int32_t L_18 = V_0;
		uint8_t L_19 = V_4;
		int32_t L_20 = __this->___currentByte;
		int32_t L_21 = __this->___currentBitPosition;
		int32_t L_22 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_19&L_20))>>((int32_t)(L_21&((int32_t)31)))))<<((int32_t)(L_22&((int32_t)31)))))));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:96>
		int32_t L_23 = __this->___currentBitPosition;
		int32_t L_24 = V_5;
		__this->___currentBitPosition = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:97>
		int32_t L_25 = V_1;
		int32_t L_26 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:98>
		int32_t L_27 = V_2;
		int32_t L_28 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
	}

IL_00bf:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:70>
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:101>
		int32_t L_30 = V_0;
		return L_30;
	}
}
// Method Definition Index: 148871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:106>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		__this->___currentBufferSize = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:107>
		__this->___currentBufferPosition = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:108>
		int32_t L_2 = __this->___currentBufferSize;
		__this->___endReached = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:110>
		bool L_3 = __this->___endReached;
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:111>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___buffer;
		int32_t L_6 = __this->___currentBufferSize;
		int32_t L_7;
		L_7 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_4, L_5, 0, L_6);
	}

IL_0048:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:112>
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:16>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = __this->___canvasColors;
		return L_0;
	}
}
// Method Definition Index: 148873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:27>
		bool L_0 = __this->___U3CFlipVerticallyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:27>
		bool L_0 = ___0_value;
		__this->___U3CFlipVerticallyU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:33>
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundColorU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:33>
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundColorU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:27>
		__this->___U3CFlipVerticallyU3Ek__BackingField = (bool)1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:55>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:57>
		__this->___canvasIsEmpty = (bool)1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:58>
		return;
	}
}
// Method Definition Index: 148878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_m3F5CB0FF20699716E83C786471D3279B7360C0EB (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:60>
		GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:62>
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D(__this, L_0, L_1, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:63>
		return;
	}
}
// Method Definition Index: 148879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:72>
		int32_t L_0 = ___0_width;
		int32_t L_1 = __this->___canvasWidth;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___1_height;
		int32_t L_3 = __this->___canvasHeight;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004f;
		}
	}

IL_0012:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:74>
		int32_t L_4 = ___0_width;
		int32_t L_5 = ___1_height;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:75>
		int32_t L_6 = V_0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___canvasColors = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasColors), (void*)L_7);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:76>
		int32_t L_8 = ___1_height;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___frameRowStart = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRowStart), (void*)L_9);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:77>
		int32_t L_10 = ___1_height;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___frameRowEnd = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRowEnd), (void*)L_11);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:78>
		__this->___revertDisposalBuffer = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___revertDisposalBuffer), (void*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:80>
		int32_t L_12 = ___0_width;
		__this->___canvasWidth = L_12;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:81>
		int32_t L_13 = ___1_height;
		__this->___canvasHeight = L_13;
	}

IL_004f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:84>
		GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:85>
		return;
	}
}
// Method Definition Index: 148880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:92>
		__this->___frameDisposalMethod = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:93>
		__this->___frameX = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:94>
		__this->___frameY = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:95>
		int32_t L_0 = __this->___canvasWidth;
		__this->___frameWidth = L_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:96>
		int32_t L_1 = __this->___canvasHeight;
		__this->___frameHeight = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:98>
		bool L_2 = __this->___canvasIsEmpty;
		if (L_2)
		{
			goto IL_0077;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:100>
		int32_t L_3 = __this->___canvasWidth;
		int32_t L_4 = __this->___canvasHeight;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		L_5 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_6 = L_5.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_8 = L_7.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_10 = L_9.___b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_11), L_6, L_8, L_10, (uint8_t)0, NULL);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(__this, 0, 0, L_3, L_4, L_11, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:101>
		__this->___canvasIsEmpty = (bool)1;
	}

IL_0077:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:103>
		return;
	}
}
// Method Definition Index: 148881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___4_palette, int32_t ___5_transparentColorIndex, bool ___6_isInterlaced, int32_t ___7_disposalMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:119>
		int32_t L_0 = __this->___frameDisposalMethod;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0077;
	}

IL_0011:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:122>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:123>
		int32_t L_3 = __this->___frameX;
		int32_t L_4 = __this->___frameY;
		int32_t L_5 = __this->___frameWidth;
		int32_t L_6 = __this->___frameHeight;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_8 = L_7.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_10 = L_9.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		L_11 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_12 = L_11.___b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_13), L_8, L_10, L_12, (uint8_t)0, NULL);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(__this, L_3, L_4, L_5, L_6, L_13, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:125>
		goto IL_0077;
	}

IL_0058:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:128>
		int32_t L_14 = ___7_disposalMethod;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:129>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_15 = __this->___revertDisposalBuffer;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_16 = __this->___canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_17 = __this->___revertDisposalBuffer;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
	}

IL_0077:
	{
		int32_t L_18 = ___7_disposalMethod;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b2;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:136>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_19 = __this->___revertDisposalBuffer;
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:137>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_20 = __this->___canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_21 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)));
		__this->___revertDisposalBuffer = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___revertDisposalBuffer), (void*)L_21);
	}

IL_0097:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:139>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:140>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_22 = __this->___canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_23 = __this->___revertDisposalBuffer;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_24 = __this->___revertDisposalBuffer;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 0, ((int32_t)(((RuntimeArray*)L_24)->max_length)), NULL);
	}

IL_00b2:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:144>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_25 = ___4_palette;
		__this->___framePalette = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___framePalette), (void*)L_25);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:145>
		int32_t L_26 = ___7_disposalMethod;
		__this->___frameDisposalMethod = L_26;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:146>
		__this->___canvasIsEmpty = (bool)0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:147>
		int32_t L_27 = ___2_width;
		__this->___frameWidth = L_27;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:148>
		int32_t L_28 = ___3_height;
		__this->___frameHeight = L_28;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:149>
		int32_t L_29 = ___0_x;
		__this->___frameX = L_29;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:150>
		int32_t L_30 = ___1_y;
		__this->___frameY = L_30;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:153>
		__this->___frameCanvasPosition = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:154>
		__this->___frameRowCurrent = (-1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:155>
		__this->___frameCanvasRowEndPosition = (-1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:156>
		int32_t L_31 = ___5_transparentColorIndex;
		__this->___frameTransparentColorIndex = L_31;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:158>
		int32_t L_32 = ___0_x;
		int32_t L_33 = ___1_y;
		int32_t L_34 = ___2_width;
		int32_t L_35 = ___3_height;
		bool L_36 = ___6_isInterlaced;
		GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034(__this, L_32, L_33, L_34, L_35, L_36, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:159>
		return;
	}
}
// Method Definition Index: 148882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_color, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:170>
		int32_t L_0 = __this->___frameCanvasPosition;
		int32_t L_1 = __this->___frameCanvasRowEndPosition;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:172>
		int32_t L_2 = __this->___frameRowCurrent;
		__this->___frameRowCurrent = ((int32_t)il2cpp_codegen_add(L_2, 1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:173>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___frameRowStart;
		int32_t L_4 = __this->___frameRowCurrent;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		__this->___frameCanvasPosition = L_6;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:174>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___frameRowEnd;
		int32_t L_8 = __this->___frameRowCurrent;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		__this->___frameCanvasRowEndPosition = L_10;
	}

IL_0042:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:177>
		int32_t L_11 = ___0_color;
		int32_t L_12 = __this->___frameTransparentColorIndex;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0068;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:178>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = __this->___canvasColors;
		int32_t L_14 = __this->___frameCanvasPosition;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_15 = __this->___framePalette;
		int32_t L_16 = ___0_color;
		int32_t L_17 = L_16;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_18);
	}

IL_0068:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:180>
		int32_t L_19 = __this->___frameCanvasPosition;
		__this->___frameCanvasPosition = ((int32_t)il2cpp_codegen_add(L_19, 1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:181>
		return;
	}
}
// Method Definition Index: 148883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___4_color, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:188>
		int32_t L_0 = ___2_width;
		int32_t L_1 = __this->___canvasWidth;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_2 = ___3_height;
		int32_t L_3 = __this->___canvasHeight;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:190>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = __this->___canvasColors;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		goto IL_0032;
	}

IL_0020:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:191>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = __this->___canvasColors;
		int32_t L_6 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___4_color;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_7);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:190>
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0032:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:190>
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0037:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:198>
		bool L_10;
		L_10 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:200>
		int32_t L_11 = __this->___canvasHeight;
		int32_t L_12 = ___1_y;
		int32_t L_13 = __this->___canvasWidth;
		int32_t L_14 = ___0_x;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), L_13)), L_14));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:201>
		int32_t L_15 = V_2;
		int32_t L_16 = __this->___canvasWidth;
		int32_t L_17 = ___3_height;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17))));
		goto IL_0076;
	}

IL_005f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:205>
		int32_t L_18 = ___1_y;
		int32_t L_19 = __this->___canvasWidth;
		int32_t L_20 = ___0_x;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, L_19)), L_20));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:206>
		int32_t L_21 = V_1;
		int32_t L_22 = ___3_height;
		int32_t L_23 = __this->___canvasWidth;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23))));
	}

IL_0076:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:209>
		int32_t L_24 = V_1;
		V_3 = L_24;
		goto IL_00a8;
	}

IL_007a:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:211>
		int32_t L_25 = V_3;
		int32_t L_26 = ___2_width;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:212>
		int32_t L_27 = V_3;
		V_5 = L_27;
		goto IL_0099;
	}

IL_0084:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:213>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28 = __this->___canvasColors;
		int32_t L_29 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30 = ___4_color;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_30);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:212>
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0099:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:212>
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0084;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:209>
		int32_t L_34 = V_3;
		int32_t L_35 = __this->___canvasWidth;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_00a8:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:209>
		int32_t L_36 = V_3;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_007a;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:216>
		return;
	}
}
// Method Definition Index: 148884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, bool ___4_deinterlace, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		int32_t L_0 = ___1_y;
		(&V_0)->___y = L_0;
		int32_t L_1 = ___0_x;
		(&V_0)->___x = L_1;
		int32_t L_2 = ___2_width;
		(&V_0)->___width = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:225>
		(&V_0)->___currentRow = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:238>
		bool L_3 = ___4_deinterlace;
		if (!L_3)
		{
			goto IL_008a;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:240>
		V_1 = 0;
		goto IL_003d;
	}

IL_0030:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:240>
		int32_t L_4 = V_1;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_4, (&V_0), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:240>
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_003d:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:240>
		int32_t L_6 = V_1;
		int32_t L_7 = ___3_height;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:241>
		V_2 = 4;
		goto IL_0053;
	}

IL_0046:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:241>
		int32_t L_8 = V_2;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_8, (&V_0), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:241>
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
	}

IL_0053:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:241>
		int32_t L_10 = V_2;
		int32_t L_11 = ___3_height;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:242>
		V_3 = 2;
		goto IL_0069;
	}

IL_005c:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:242>
		int32_t L_12 = V_3;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_12, (&V_0), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:242>
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_0069:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:242>
		int32_t L_14 = V_3;
		int32_t L_15 = ___3_height;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_005c;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:243>
		V_4 = 1;
		goto IL_0083;
	}

IL_0073:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:243>
		int32_t L_16 = V_4;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_16, (&V_0), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:243>
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_0083:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:243>
		int32_t L_18 = V_4;
		int32_t L_19 = ___3_height;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_008a:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:247>
		V_5 = 0;
		goto IL_009f;
	}

IL_008f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:247>
		int32_t L_20 = V_5;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_20, (&V_0), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:247>
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:247>
		int32_t L_22 = V_5;
		int32_t L_23 = ___3_height;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_008f;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:249>
		return;
	}
}
// Method Definition Index: 148885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_row, U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* ___1_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:229>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:230>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:231>
		bool L_0;
		L_0 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_1 = ___1_p;
		int32_t L_2 = L_1->___y;
		int32_t L_3 = ___0_row;
		int32_t L_4 = __this->___canvasWidth;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_5 = ___1_p;
		int32_t L_6 = L_5->___x;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_4)), L_6));
		goto IL_003f;
	}

IL_0020:
	{
		int32_t L_7 = __this->___canvasHeight;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_8 = ___1_p;
		int32_t L_9 = L_8->___y;
		int32_t L_10 = ___0_row;
		int32_t L_11 = __this->___canvasWidth;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_12 = ___1_p;
		int32_t L_13 = L_12->___x;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_7, 1)), ((int32_t)il2cpp_codegen_add(L_9, L_10)))), L_11)), L_13));
	}

IL_003f:
	{
		V_0 = G_B3_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:233>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___frameRowStart;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_15 = ___1_p;
		int32_t L_16 = L_15->___currentRow;
		int32_t L_17 = V_0;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:234>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___frameRowEnd;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_19 = ___1_p;
		int32_t L_20 = L_19->___currentRow;
		int32_t L_21 = V_0;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_22 = ___1_p;
		int32_t L_23 = L_22->___width;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_21, L_23)));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:235>
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_24 = ___1_p;
		int32_t L_25 = L_24->___currentRow;
		V_1 = L_25;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_26 = ___1_p;
		int32_t L_27 = V_1;
		L_26->___currentRow = ((int32_t)il2cpp_codegen_add(L_27, 1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:236>
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_FlipVertically_m5E5924D7B57490821C577CF8115AFC222478A68F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:52>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas;
		bool L_1;
		L_1 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 148887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_FlipVertically_mE37F7D790DE0F00C55A9707901A3BCB48A4BA8AF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:53>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas;
		bool L_1 = ___0_value;
		GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A_inline(L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 148888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:62>
		bool L_0 = __this->___U3CDrawPlainTextBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_DrawPlainTextBackground_m2D97A72E39881F2D174076DBD2E49DAF46EE4D39 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:62>
		bool L_0 = ___0_value;
		__this->___U3CDrawPlainTextBackgroundU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:67>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_0 = __this->___header;
		return L_0;
	}
}
// Method Definition Index: 148891
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_HasMoreData_mDE4AECF1D3480208FA4A5B1B279F0FE5F583C658 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:75>
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 148892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:81>
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148893
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:81>
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentTokenU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GifStream_get_BaseStream_m47DF5ADE42AE63C816E92398973BC90F57932E9F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:88>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		return L_0;
	}
}
// Method Definition Index: 148895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_BaseStream_m42346FD466BBDA585D29C9B3FC58CDA56D14D6B8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:89>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_value;
		GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A(__this, L_0, (bool)0, NULL);
		return;
	}
}
// Method Definition Index: 148896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:114>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:116>
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_0 = (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791*)il2cpp_codegen_object_new(GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var);
		GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3(L_0, NULL);
		__this->___lzwDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lzwDictionary), (void*)L_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:117>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_1 = (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3*)il2cpp_codegen_object_new(GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var);
		GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8(L_1, NULL);
		__this->___canvas = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas), (void*)L_1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:118>
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_2 = (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F*)il2cpp_codegen_object_new(GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var);
		GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3(L_2, NULL);
		__this->___blockReader = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blockReader), (void*)L_2);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:120>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___globalColorTable = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___globalColorTable), (void*)L_3);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:121>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___localColorTable = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localColorTable), (void*)L_4);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:122>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___headerBuffer = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headerBuffer), (void*)L_5);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:123>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		__this->___extensionApplicationBuffer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensionApplicationBuffer), (void*)L_6);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:124>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___colorTableBuffer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTableBuffer), (void*)L_7);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:125>
		return;
	}
}
// Method Definition Index: 148897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:132>
		GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:134>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A(__this, L_0, (bool)0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:135>
		return;
	}
}
// Method Definition Index: 148898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_mBBB6FB8A4D2C329249BDDBEA98F190D6EE61140A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_gifBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:142>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_gifBytes;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985(__this, L_1, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:142>
		return;
	}
}
// Method Definition Index: 148899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m34C08F362121765D3734CAD4BB88DF1184CA07C6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:150>
		String_t* L_0 = ___0_path;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985(__this, L_1, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:150>
		return;
	}
}
// Method Definition Index: 148900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_disposePrevious, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B3_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:164>
		bool L_0 = ___1_disposePrevious;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:165>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = L_1;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000f;
		}
		G_B2_0 = L_2;
	}
	{
		goto IL_0014;
	}

IL_000f:
	{
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B3_0, NULL);
	}

IL_0014:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:167>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_3 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		il2cpp_codegen_initobj(L_3, sizeof(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:168>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_4 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		il2cpp_codegen_initobj(L_4, sizeof(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:169>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_5 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		il2cpp_codegen_initobj(L_5, sizeof(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:171>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		__this->___currentStream = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentStream), (void*)L_6);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:172>
		GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline(__this, 0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:173>
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_7 = __this->___blockReader;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___0_stream;
		GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline(L_7, L_8, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:174>
		return;
	}
}
// Method Definition Index: 148901
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_Dispose_m29EDB2507103ABC3A440D8EF2B4F3E8258807EF4 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:181>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000b:
	{
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B2_0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:182>
		return;
	}
}
// Method Definition Index: 148902
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:194>
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_005b;
			}
			case 6:
			{
				goto IL_0062;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0070;
			}
		}
	}
	{
		goto IL_0077;
	}

IL_0033:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:196>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_2;
		L_2 = GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:196>
		return;
	}

IL_003b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:197>
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_3;
		L_3 = GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:197>
		return;
	}

IL_0043:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:198>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_4;
		L_4 = GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:198>
		return;
	}

IL_004b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:199>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_5;
		L_5 = GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:199>
		return;
	}

IL_0053:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:200>
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_6;
		L_6 = GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:200>
		return;
	}

IL_005b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:201>
		GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:201>
		return;
	}

IL_0062:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:202>
		GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:202>
		return;
	}

IL_0069:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:203>
		GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:203>
		return;
	}

IL_0070:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:204>
		GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:204>
		return;
	}

IL_0077:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:205>
		int32_t L_7;
		L_7 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF666DC28A44A677A8B7129A21CFC5D281CF7DE4)), L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31_RuntimeMethod_var)));
	}
}
// Method Definition Index: 148903
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_Reset_m55C711BFB9140D8C5AD01B423D58DB0FECAFB23F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, bool ___0_skipHeader, bool ___1_resetCanvas, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t G_B4_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:215>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:216>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:217>
		bool L_0 = ___0_skipHeader;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int64_t L_1 = __this->___firstFrameStartPosition;
		if ((!(((uint64_t)L_1) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_0015;
		}
	}

IL_000d:
	{
		int64_t L_2 = __this->___headerStartPosition;
		G_B4_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		int64_t L_3 = __this->___firstFrameStartPosition;
		G_B4_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:219>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream;
		int64_t L_5;
		L_5 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_4);
		int64_t L_6 = V_0;
		if ((((int64_t)L_5) == ((int64_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:220>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		int64_t L_8 = V_0;
		VirtualActionInvoker1< int64_t >::Invoke(13, L_7, L_8);
	}

IL_0036:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:222>
		int32_t L_9;
		L_9 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:224>
		bool L_10 = ___1_resetCanvas;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:225>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_11 = __this->___canvas;
		GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66(L_11, NULL);
	}

IL_004c:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:226>
		return;
	}
}
// Method Definition Index: 148904
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA211FD6F9DC081A1311C02E414175007CA919044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF226672299FAF2A220099C0767092B56B36F869A);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:235>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:238>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_0);
		__this->___headerStartPosition = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:239>
		__this->___firstFrameStartPosition = ((int64_t)(-1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:240>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___headerBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___headerBuffer;
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:242>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___headerBuffer;
		bool L_7;
		L_7 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_6, _stringLiteralF226672299FAF2A220099C0767092B56B36F869A, NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:243>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_8 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		L_8->___version = 1;
		goto IL_0086;
	}

IL_005b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:244>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___headerBuffer;
		bool L_10;
		L_10 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_9, _stringLiteralA211FD6F9DC081A1311C02E414175007CA919044, NULL);
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:245>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_11 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		L_11->___version = 0;
		goto IL_0086;
	}

IL_007b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:247>
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBC8EA794C7E2E6B3E854B5482BBB1C0DDD0D67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218_RuntimeMethod_var)));
	}

IL_0086:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:250>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_13 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___currentStream;
		int32_t L_15;
		L_15 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_14, NULL);
		L_13->___width = L_15;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:251>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_16 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = __this->___currentStream;
		int32_t L_18;
		L_18 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_17, NULL);
		L_16->___height = L_18;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:253>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream;
		uint8_t L_20;
		L_20 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_19, NULL);
		V_0 = L_20;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:254>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_21 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_22 = V_0;
		int32_t L_23;
		L_23 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_22, 0, 3, NULL);
		int32_t L_24;
		L_24 = BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF(L_23, NULL);
		L_21->___globalColorTableSize = L_24;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:255>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_25 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_26 = V_0;
		bool L_27;
		L_27 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_26, 3, NULL);
		L_25->___sortColors = L_27;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:256>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_28 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_29 = V_0;
		int32_t L_30;
		L_30 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_29, 4, 3, NULL);
		L_28->___colorResolution = L_30;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:257>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_31 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		uint8_t L_32 = V_0;
		bool L_33;
		L_33 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_32, 7, NULL);
		L_31->___hasGlobalColorTable = L_33;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:259>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_34 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35 = __this->___currentStream;
		uint8_t L_36;
		L_36 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_35, NULL);
		L_34->___transparentColorIndex = L_36;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:260>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_37 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_38 = __this->___currentStream;
		uint8_t L_39;
		L_39 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_38, NULL);
		L_37->___pixelAspectRatio = L_39;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:262>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_40 = __this->___canvas;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_41 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_42 = L_41->___width;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_43 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_44 = L_43->___height;
		GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D(L_40, L_42, L_44, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:264>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_45 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		bool L_46 = L_45->___hasGlobalColorTable;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:266>
		int32_t L_47;
		L_47 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 1, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:267>
		__this->___nextPaletteIsGlobal = (bool)1;
		goto IL_017f;
	}

IL_0178:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:271>
		int32_t L_48;
		L_48 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
	}

IL_017f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:274>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_49 = __this->___header;
		return L_49;
	}
}
// Method Definition Index: 148905
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* G_B6_0 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:279>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 1, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:281>
		bool L_0 = __this->___nextPaletteIsGlobal;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_1 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_2 = L_1->___localColorTableSize;
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_001c:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_3 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_4 = L_3->___globalColorTableSize;
		G_B3_0 = L_4;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:282>
		bool L_5 = __this->___nextPaletteIsGlobal;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = __this->___localColorTable;
		G_B6_0 = L_6;
		goto IL_003e;
	}

IL_0038:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = __this->___globalColorTable;
		G_B6_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B6_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:284>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___colorTableBuffer;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_8, L_9, 0, ((int32_t)il2cpp_codegen_multiply(L_10, 3)));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:286>
		V_2 = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:287>
		V_3 = 0;
		goto IL_0094;
	}

IL_005b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:289>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:290>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:291>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:292>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:293>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12 = V_1;
		int32_t L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___colorTableBuffer;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___colorTableBuffer;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___colorTableBuffer;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_29), L_18, L_23, L_28, (uint8_t)((int32_t)255), NULL);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_29);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:287>
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0094:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:287>
		int32_t L_31 = V_3;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:296>
		bool L_33 = __this->___nextPaletteIsGlobal;
		if (!L_33)
		{
			goto IL_00ba;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:298>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = __this->___currentStream;
		int64_t L_35;
		L_35 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_34);
		__this->___firstFrameStartPosition = L_35;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:299>
		int32_t L_36;
		L_36 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		goto IL_00c2;
	}

IL_00ba:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:303>
		int32_t L_37;
		L_37 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 4, NULL);
	}

IL_00c2:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:306>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:307>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:308>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:309>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:310>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:311>
		il2cpp_codegen_initobj((&V_4), sizeof(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_38 = V_1;
		(&V_4)->___palette = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___palette), (void*)L_38);
		int32_t L_39 = V_0;
		(&V_4)->___size = L_39;
		bool L_40 = __this->___nextPaletteIsGlobal;
		(&V_4)->___isGlobal = L_40;
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_41 = V_4;
		return L_41;
	}
}
// Method Definition Index: 148906
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:316>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 2, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:318>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_0, 4, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:319>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		uint8_t L_2;
		L_2 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_1, NULL);
		V_0 = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:320>
		uint8_t L_3 = V_0;
		int32_t L_4;
		L_4 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_3, 2, 3, NULL);
		V_1 = L_4;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:322>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_5 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		uint8_t L_6 = V_0;
		bool L_7;
		L_7 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_6, 0, NULL);
		L_5->___hasTransparency = L_7;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:323>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_8 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		uint8_t L_9 = V_0;
		bool L_10;
		L_10 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_9, 1, NULL);
		L_8->___userInput = L_10;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:324>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_11 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream;
		int32_t L_13;
		L_13 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_12, NULL);
		L_11->___delayTime = L_13;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:325>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_14 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->___currentStream;
		uint8_t L_16;
		L_16 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_15, NULL);
		L_14->___transparentColorIndex = L_16;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:328>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_17 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		bool L_18 = L_17->___hasTransparency;
		if (L_18)
		{
			goto IL_0091;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:329>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_19 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_19->___transparentColorIndex = (-1);
	}

IL_0091:
	{
		int32_t L_20 = V_1;
		switch (L_20)
		{
			case 0:
			{
				goto IL_00a9;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_00b7;
			}
			case 3:
			{
				goto IL_00c5;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_00a9:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:334>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_21 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_21->___disposalMethod = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:334>
		goto IL_00e9;
	}

IL_00b7:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:335>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_22 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_22->___disposalMethod = 1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:335>
		goto IL_00e9;
	}

IL_00c5:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:336>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_23 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		L_23->___disposalMethod = 2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:336>
		goto IL_00e9;
	}

IL_00d3:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:337>
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
		String_t* L_27;
		L_27 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97E1360CCA07F4C93334C1ACF7ADEA68AFAC743F)), L_26, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7_RuntimeMethod_var)));
	}

IL_00e9:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:340>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_29, 0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:341>
		int32_t L_30;
		L_30 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:343>
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_31 = __this->___graphicControl;
		return L_31;
	}
}
// Method Definition Index: 148907
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:348>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 3, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:349>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_0 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		int32_t L_2;
		L_2 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_1, NULL);
		L_0->___left = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:350>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_3 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream;
		int32_t L_5;
		L_5 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_4, NULL);
		L_3->___top = L_5;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:351>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_6 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		L_6->___width = L_8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:352>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_9 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->___currentStream;
		int32_t L_11;
		L_11 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_10, NULL);
		L_9->___height = L_11;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:354>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream;
		uint8_t L_13;
		L_13 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_12, NULL);
		V_0 = L_13;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:356>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_14 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		uint8_t L_15 = V_0;
		int32_t L_16;
		L_16 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_15, 0, 3, NULL);
		int32_t L_17;
		L_17 = BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF(L_16, NULL);
		L_14->___localColorTableSize = L_17;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:357>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_18 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		uint8_t L_19 = V_0;
		bool L_20;
		L_20 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_19, 6, NULL);
		L_18->___isInterlaced = L_20;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:358>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_21 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		uint8_t L_22 = V_0;
		bool L_23;
		L_23 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_22, 7, NULL);
		L_21->___hasLocalColorTable = L_23;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:360>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_24 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_25 = L_24->___hasLocalColorTable;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:362>
		__this->___nextPaletteIsGlobal = (bool)0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:363>
		int32_t L_26;
		L_26 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 1, NULL);
		goto IL_00cd;
	}

IL_00c5:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:367>
		int32_t L_27;
		L_27 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 4, NULL);
	}

IL_00cd:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:370>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_28 = __this->___imageDescriptor;
		return L_28;
	}
}
// Method Definition Index: 148908
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	uint8_t V_1 = 0x0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* G_B3_0 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:379>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 4, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:381>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:382>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:383>
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_0 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_1 = L_0->___hasLocalColorTable;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = __this->___globalColorTable;
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = __this->___localColorTable;
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:385>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream;
		uint8_t L_5;
		L_5 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_4, NULL);
		V_1 = L_5;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:387>
		uint8_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		uint8_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)8)))
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:388>
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43F467B57F117AB9881882BD47460419D59340FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053_RuntimeMethod_var)));
	}

IL_0041:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:390>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:391>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:392>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:393>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:394>
		uint8_t L_9 = V_1;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_10 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_11 = L_10->___left;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_12 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_13 = L_12->___top;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_14 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_15 = L_14->___width;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_16 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		int32_t L_17 = L_16->___height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = V_0;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_19 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_20 = L_19->___transparentColorIndex;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_21 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_22 = L_21->___isInterlaced;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_23 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_24 = L_23->___disposalMethod;
		GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822(__this, L_9, L_11, L_13, L_15, L_17, L_18, L_20, L_22, L_24, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:395>
		int32_t L_25;
		L_25 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:397>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:398>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:399>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:400>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:401>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:402>
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_26 = (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948*)il2cpp_codegen_object_new(GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var);
		GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB(L_26, NULL);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_27 = L_26;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_28 = __this->___canvas;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_29;
		L_29 = GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline(L_28, NULL);
		L_27->___colors = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___colors), (void*)L_29);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_30 = L_27;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_31 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		bool L_32 = L_31->___userInput;
		L_30->___userInput = L_32;
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_33 = L_30;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_34 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_35 = L_34->___delayTime;
		L_33->___delay = L_35;
		return L_33;
	}
}
// Method Definition Index: 148909
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GifStream_ReadComment_mCA8259E47882D1CEB1F57ACFBF876E110ADFEEB1 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:407>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 5, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:408>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E(L_1, NULL);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36, L_0, L_2);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:409>
		int32_t L_4;
		L_4 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:410>
		return L_3;
	}
}
// Method Definition Index: 148910
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:413>
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 5, NULL);
		return;
	}
}
// Method Definition Index: 148911
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:417>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 6, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:418>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_0, ((int32_t)12), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:420>
		il2cpp_codegen_initobj((&V_0), sizeof(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:421>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		int32_t L_2;
		L_2 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_1, NULL);
		(&V_0)->___left = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:422>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___currentStream;
		int32_t L_4;
		L_4 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_3, NULL);
		(&V_0)->___top = L_4;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:423>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___currentStream;
		int32_t L_6;
		L_6 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_5, NULL);
		(&V_0)->___width = L_6;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:424>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		(&V_0)->___height = L_8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:425>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___currentStream;
		uint8_t L_10;
		L_10 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_9, NULL);
		(&V_0)->___charWidth = L_10;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:426>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___currentStream;
		uint8_t L_12;
		L_12 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_11, NULL);
		(&V_0)->___charHeight = L_12;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:427>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = __this->___globalColorTable;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___currentStream;
		uint8_t L_15;
		L_15 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_14, NULL);
		uint8_t L_16 = L_15;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(&V_0)->___foregroundColor = L_17;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:428>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = __this->___globalColorTable;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream;
		uint8_t L_20;
		L_20 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_19, NULL);
		uint8_t L_21 = L_20;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		(&V_0)->___backgroundColor = L_22;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:429>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E(L_24, NULL);
		String_t* L_26;
		L_26 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36, L_23, L_25);
		(&V_0)->___text = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text), (void*)L_26);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:430>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_27 = __this->___canvas;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28;
		L_28 = GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline(L_27, NULL);
		(&V_0)->___colors = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colors), (void*)L_28);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:432>
		bool L_29;
		L_29 = GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline(__this, NULL);
		if (!L_29)
		{
			goto IL_00ff;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:433>
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_30 = V_0;
		GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682(__this, L_30, NULL);
	}

IL_00ff:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:435>
		int32_t L_31;
		L_31 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:437>
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_32 = V_0;
		return L_32;
	}
}
// Method Definition Index: 148912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:442>
		bool L_0;
		L_0 = GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:443>
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_1;
		L_1 = GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16(__this, NULL);
		return;
	}

IL_0010:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:445>
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 6, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:446>
		return;
	}
}
// Method Definition Index: 148913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 GifStream_ReadNetscapeExtension_mD3CA420FFD767AB398CC96FFDC61EA00072FFF1F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:450>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 7, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:452>
		V_0 = (bool)0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:453>
		V_1 = (bool)0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:454>
		V_2 = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:455>
		V_3 = 0;
	}

IL_000f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:459>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_4 = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:461>
		uint8_t L_2 = V_4;
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:464>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___currentStream;
		uint8_t L_4;
		L_4 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_3, NULL);
		V_5 = L_4;
		uint8_t L_5 = V_5;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		uint8_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0059;
	}

IL_0039:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:469>
		V_1 = (bool)1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:470>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		V_2 = L_8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:471>
		goto IL_000f;
	}

IL_0049:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:474>
		V_0 = (bool)1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:475>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___currentStream;
		int32_t L_10;
		L_10 = BitUtils_ReadInt32LittleEndian_m7BB989504B2207AC7B4CF6495A7BCCD1A997448F(L_9, NULL);
		V_3 = L_10;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:476>
		goto IL_000f;
	}

IL_0059:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:479>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___currentStream;
		uint8_t L_12 = V_4;
		int64_t L_13;
		L_13 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32, L_11, ((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1))), 1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:480>
		goto IL_000f;
	}

IL_006d:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:484>
		int32_t L_14;
		L_14 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:486>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:487>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:488>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:489>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:490>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:491>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:492>
		il2cpp_codegen_initobj((&V_6), sizeof(GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837));
		bool L_15 = V_1;
		(&V_6)->___hasLoopCount = L_15;
		bool L_16 = V_0;
		(&V_6)->___hasBufferSize = L_16;
		int32_t L_17 = V_2;
		(&V_6)->___loopCount = L_17;
		int32_t L_18 = V_3;
		(&V_6)->___bufferSize = L_18;
		GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 L_19 = V_6;
		return L_19;
	}
}
// Method Definition Index: 148914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:495>
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 7, NULL);
		return;
	}
}
// Method Definition Index: 148915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* GifStream_ReadApplicationExtension_mEBFB87FDBA6C6E54D87797C0B95C10F41D4E7D3E (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:499>
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 8, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:501>
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:502>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___extensionApplicationBuffer;
		String_t* L_3;
		L_3 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_1, L_2, 0, 8);
		V_1 = L_3;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:503>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___extensionApplicationBuffer;
		String_t* L_6;
		L_6 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_4, L_5, 8, 3);
		V_2 = L_6;
	}

IL_0033:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:507>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream;
		uint8_t L_8;
		L_8 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_7, NULL);
		V_3 = L_8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:509>
		uint8_t L_9 = V_3;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:512>
		uint8_t L_10 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_4 = L_11;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:513>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		uint8_t L_14 = V_3;
		int32_t L_15;
		L_15 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_12, L_13, 0, L_14);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:514>
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_16, L_17, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:505>
		goto IL_0033;
	}

IL_0064:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:517>
		int32_t L_18;
		L_18 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:519>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:520>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:521>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:522>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:523>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:524>
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_19 = (GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860*)il2cpp_codegen_object_new(GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860_il2cpp_TypeInfo_var);
		GifApplicationExtension__ctor_m6224C7111883A017C592A7A88B839E67A1928BE6(L_19, NULL);
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_20 = L_19;
		String_t* L_21 = V_1;
		L_20->___applicationIdentifier = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___applicationIdentifier), (void*)L_21);
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_22 = L_20;
		String_t* L_23 = V_2;
		L_22->___applicationAuthCode = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___applicationAuthCode), (void*)L_23);
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_24 = L_22;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_25 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26;
		L_26 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_25, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		L_24->___applicationData = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___applicationData), (void*)L_26);
		return L_24;
	}
}
// Method Definition Index: 148916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:527>
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 8, NULL);
		return;
	}
}
// Method Definition Index: 148917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_lzwMinCodeSize, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___5_colorTable, int32_t ___6_transparentColorIndex, bool ___7_isInterlaced, int32_t ___8_disposalMethod, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:532>
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_0 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		bool L_1 = L_0->___hasGlobalColorTable;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:533>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_2 = __this->___canvas;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = __this->___globalColorTable;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_4 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header);
		int32_t L_5 = L_4->___transparentColorIndex;
		int32_t L_6 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline(L_2, L_7, NULL);
	}

IL_002e:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:535>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_8 = __this->___canvas;
		int32_t L_9 = ___1_x;
		int32_t L_10 = ___2_y;
		int32_t L_11 = ___3_width;
		int32_t L_12 = ___4_height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = ___5_colorTable;
		int32_t L_14 = ___6_transparentColorIndex;
		bool L_15 = ___7_isInterlaced;
		int32_t L_16 = ___8_disposalMethod;
		GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A(L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:537>
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_17 = __this->___lzwDictionary;
		int32_t L_18 = ___0_lzwMinCodeSize;
		GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C(L_17, L_18, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:538>
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_19 = __this->___blockReader;
		GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F(L_19, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:540>
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_20 = __this->___lzwDictionary;
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_21 = __this->___blockReader;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_22 = __this->___canvas;
		GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B(L_20, L_21, L_22, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:541>
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_23 = __this->___blockReader;
		GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D(L_23, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:542>
		return;
	}
}
// Method Definition Index: 148918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t G_B17_0 = 0;

IL_0000:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:548>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)33))))
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)44))))
		{
			goto IL_00c3;
		}
	}
	{
		uint8_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)59))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_00d4;
	}

IL_0026:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:552>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___currentStream;
		uint8_t L_6;
		L_6 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_5, NULL);
		V_1 = L_6;
		uint8_t L_7 = V_1;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)249)))))
		{
			goto IL_0048;
		}
	}
	{
		uint8_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		uint8_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)249))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_00b3;
	}

IL_0048:
	{
		uint8_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)254))))
		{
			goto IL_005a;
		}
	}
	{
		uint8_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)255))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00b3;
	}

IL_005a:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:555>
		int32_t L_12;
		L_12 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 5, NULL);
		return L_12;
	}

IL_0062:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:556>
		int32_t L_13;
		L_13 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 6, NULL);
		return L_13;
	}

IL_006a:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:557>
		int32_t L_14;
		L_14 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 2, NULL);
		return L_14;
	}

IL_0072:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:560>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->___currentStream;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_15, ((int32_t)11), NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:561>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->___currentStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___extensionApplicationBuffer;
		int32_t L_18;
		L_18 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_16, L_17, 0, ((int32_t)11));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:563>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:564>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:565>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___extensionApplicationBuffer;
		bool L_20;
		L_20 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_19, _stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612, NULL);
		if (L_20)
		{
			goto IL_00a9;
		}
	}
	{
		G_B17_0 = 8;
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B17_0 = 7;
	}

IL_00aa:
	{
		V_2 = G_B17_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:567>
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, L_21, NULL);
		return L_22;
	}

IL_00b3:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:570>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = __this->___currentStream;
		BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A(L_23, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:570>
		goto IL_0000;
	}

IL_00c3:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:575>
		int32_t L_24;
		L_24 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 3, NULL);
		return L_24;
	}

IL_00cb:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:576>
		int32_t L_25;
		L_25 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, ((int32_t)9), NULL);
		return L_25;
	}

IL_00d4:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:577>
		uint8_t L_26 = V_0;
		uint8_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.byte_class, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F88ED9B30F2AB64825F279EE35E3EE38153DDCF)), L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8_RuntimeMethod_var)));
	}
}
// Method Definition Index: 148919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:584>
		int32_t L_0 = ___0_token;
		GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline(__this, L_0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:585>
		int32_t L_1 = ___0_token;
		return L_1;
	}
}
// Method Definition Index: 148920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A ___0_text, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:590>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:591>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_1 = ___0_text;
		int32_t L_2 = L_1.___left;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_3 = ___0_text;
		int32_t L_4 = L_3.___top;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_5 = ___0_text;
		int32_t L_6 = L_5.___width;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_7 = ___0_text;
		int32_t L_8 = L_7.___height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = __this->___globalColorTable;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_10 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_11 = L_10->___transparentColorIndex;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_12 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor);
		bool L_13 = L_12->___isInterlaced;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_14 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl);
		int32_t L_15 = L_14->___disposalMethod;
		GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A(L_0, L_2, L_4, L_6, L_8, L_9, L_11, L_13, L_15, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:593>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:594>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_16 = __this->___canvas;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_17 = ___0_text;
		int32_t L_18 = L_17.___left;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_19 = ___0_text;
		int32_t L_20 = L_19.___top;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_21 = ___0_text;
		int32_t L_22 = L_21.___width;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_23 = ___0_text;
		int32_t L_24 = L_23.___height;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_25 = ___0_text;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_26 = L_25.___backgroundColor;
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(L_16, L_18, L_20, L_22, L_24, L_26, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:595>
		return;
	}
}
// Method Definition Index: 148921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:599>
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_1 = ___0_token;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:600>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:601>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:602>
		int32_t L_2;
		L_2 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2478869FE087903451AEBC85CA33DBDF081CCAF9)), L_4, NULL);
		int32_t L_6 = ___0_token;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE697DBBAC6F5DC17B8F0F13A9F1560E8F8404117)), L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5_RuntimeMethod_var)));
	}

IL_0039:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:603>
		return;
	}
}
// Method Definition Index: 148922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:607>
		int32_t L_0 = ___0_token;
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, L_0, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:608>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream;
		BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A(L_1, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:609>
		int32_t L_2;
		L_2 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:610>
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, String_t* ___1_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:11>
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:13>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = ___1_s;
		int32_t L_5 = V_0;
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:14>
		return (bool)0;
	}

IL_0012:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:11>
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:11>
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:17>
		return (bool)1;
	}
}
// Method Definition Index: 148924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:22>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:23>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_reader;
		uint8_t L_3;
		L_3 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_2, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:24>
		uint8_t L_4 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), (int32_t)L_4));
	}
}
// Method Definition Index: 148925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt32LittleEndian_m7BB989504B2207AC7B4CF6495A7BCCD1A997448F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:29>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:30>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_reader;
		uint8_t L_3;
		L_3 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_2, NULL);
		V_1 = L_3;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:31>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_reader;
		uint8_t L_5;
		L_5 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_4, NULL);
		V_2 = L_5;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:32>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_reader;
		uint8_t L_7;
		L_7 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_6, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:33>
		uint8_t L_8 = V_2;
		uint8_t L_9 = V_1;
		uint8_t L_10 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_7<<((int32_t)24))), ((int32_t)((int32_t)L_8<<((int32_t)16))))), ((int32_t)((int32_t)L_9<<8)))), (int32_t)L_10));
	}
}
// Method Definition Index: 148926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:38>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(36, L_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:40>
		int32_t L_2 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
		G_B1_0 = L_2;
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:41>
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_3 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF_RuntimeMethod_var)));
	}

IL_0010:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:43>
		return (uint8_t)((int32_t)(uint8_t)G_B2_0);
	}
}
// Method Definition Index: 148927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, int32_t ___1_expectedValue, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:48>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:49>
		uint8_t L_2 = V_0;
		int32_t L_3 = ___1_expectedValue;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:50>
		int32_t L_4 = ___1_expectedValue;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		uint8_t L_7 = V_0;
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.byte_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4013E5E88C2171694988C9818C0339FDA4E6B30F)), L_6, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3_RuntimeMethod_var)));
	}

IL_0027:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:51>
		return;
	}
}
// Method Definition Index: 148928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF (int32_t ___0_data, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:55>
		int32_t L_0 = ___0_data;
		return ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))&((int32_t)31)))));
	}
}
// Method Definition Index: 148929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F (uint8_t ___0_b, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:60>
		V_0 = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:62>
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:64>
		int32_t L_0 = V_0;
		uint8_t L_1 = ___0_b;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		if (L_4)
		{
			G_B3_0 = L_0;
			goto IL_0015;
		}
		G_B2_0 = L_0;
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0016;
	}

IL_0015:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(G_B4_1, ((int32_t)(G_B4_0<<((int32_t)(L_5&((int32_t)31)))))));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:62>
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:62>
		int32_t L_7 = V_1;
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:67>
		int32_t L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 148930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0 (uint8_t ___0_b, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:72>
		uint8_t L_0 = ___0_b;
		int32_t L_1 = ___1_offset;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 148931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:77>
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:81>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_reader;
		uint8_t L_2;
		L_2 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_1, NULL);
		V_1 = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:83>
		uint8_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:86>
		uint8_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:87>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_reader;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:88>
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_10, (RuntimeObject*)L_11, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:79>
		goto IL_0006;
	}

IL_002c:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:91>
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_13;
	}
}
// Method Definition Index: 148932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;

IL_0000:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:98>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:100>
		uint8_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:101>
		return;
	}

IL_000b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:103>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_reader;
		uint8_t L_4 = V_0;
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32, L_3, ((int64_t)(uint64_t)((uint32_t)L_4)), 1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Utils/BitUtils.cs:96>
		goto IL_0000;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifApplicationExtension__ctor_m6224C7111883A017C592A7A88B839E67A1928BE6 (GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled)
{
	marshaled.___userInput = static_cast<int32_t>(unmarshaled.___userInput);
	marshaled.___disposalMethod = unmarshaled.___disposalMethod;
	marshaled.___delayTime = unmarshaled.___delayTime;
	marshaled.___hasTransparency = static_cast<int32_t>(unmarshaled.___hasTransparency);
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke_back(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled)
{
	bool unmarshaleduserInput_temp_0 = false;
	unmarshaleduserInput_temp_0 = static_cast<bool>(marshaled.___userInput);
	unmarshaled.___userInput = unmarshaleduserInput_temp_0;
	int32_t unmarshaleddisposalMethod_temp_1 = 0;
	unmarshaleddisposalMethod_temp_1 = marshaled.___disposalMethod;
	unmarshaled.___disposalMethod = unmarshaleddisposalMethod_temp_1;
	int32_t unmarshaleddelayTime_temp_2 = 0;
	unmarshaleddelayTime_temp_2 = marshaled.___delayTime;
	unmarshaled.___delayTime = unmarshaleddelayTime_temp_2;
	bool unmarshaledhasTransparency_temp_3 = false;
	unmarshaledhasTransparency_temp_3 = static_cast<bool>(marshaled.___hasTransparency);
	unmarshaled.___hasTransparency = unmarshaledhasTransparency_temp_3;
	int32_t unmarshaledtransparentColorIndex_temp_4 = 0;
	unmarshaledtransparentColorIndex_temp_4 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_4;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke_cleanup(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled)
{
	marshaled.___userInput = static_cast<int32_t>(unmarshaled.___userInput);
	marshaled.___disposalMethod = unmarshaled.___disposalMethod;
	marshaled.___delayTime = unmarshaled.___delayTime;
	marshaled.___hasTransparency = static_cast<int32_t>(unmarshaled.___hasTransparency);
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com_back(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled)
{
	bool unmarshaleduserInput_temp_0 = false;
	unmarshaleduserInput_temp_0 = static_cast<bool>(marshaled.___userInput);
	unmarshaled.___userInput = unmarshaleduserInput_temp_0;
	int32_t unmarshaleddisposalMethod_temp_1 = 0;
	unmarshaleddisposalMethod_temp_1 = marshaled.___disposalMethod;
	unmarshaled.___disposalMethod = unmarshaleddisposalMethod_temp_1;
	int32_t unmarshaleddelayTime_temp_2 = 0;
	unmarshaleddelayTime_temp_2 = marshaled.___delayTime;
	unmarshaled.___delayTime = unmarshaleddelayTime_temp_2;
	bool unmarshaledhasTransparency_temp_3 = false;
	unmarshaledhasTransparency_temp_3 = static_cast<bool>(marshaled.___hasTransparency);
	unmarshaled.___hasTransparency = unmarshaledhasTransparency_temp_3;
	int32_t unmarshaledtransparentColorIndex_temp_4 = 0;
	unmarshaledtransparentColorIndex_temp_4 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_4;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com_cleanup(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled)
{
	marshaled.___version = unmarshaled.___version;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___hasGlobalColorTable = static_cast<int32_t>(unmarshaled.___hasGlobalColorTable);
	marshaled.___globalColorTableSize = unmarshaled.___globalColorTableSize;
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
	marshaled.___sortColors = static_cast<int32_t>(unmarshaled.___sortColors);
	marshaled.___colorResolution = unmarshaled.___colorResolution;
	marshaled.___pixelAspectRatio = unmarshaled.___pixelAspectRatio;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke_back(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled)
{
	int32_t unmarshaledversion_temp_0 = 0;
	unmarshaledversion_temp_0 = marshaled.___version;
	unmarshaled.___version = unmarshaledversion_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_2;
	bool unmarshaledhasGlobalColorTable_temp_3 = false;
	unmarshaledhasGlobalColorTable_temp_3 = static_cast<bool>(marshaled.___hasGlobalColorTable);
	unmarshaled.___hasGlobalColorTable = unmarshaledhasGlobalColorTable_temp_3;
	int32_t unmarshaledglobalColorTableSize_temp_4 = 0;
	unmarshaledglobalColorTableSize_temp_4 = marshaled.___globalColorTableSize;
	unmarshaled.___globalColorTableSize = unmarshaledglobalColorTableSize_temp_4;
	int32_t unmarshaledtransparentColorIndex_temp_5 = 0;
	unmarshaledtransparentColorIndex_temp_5 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_5;
	bool unmarshaledsortColors_temp_6 = false;
	unmarshaledsortColors_temp_6 = static_cast<bool>(marshaled.___sortColors);
	unmarshaled.___sortColors = unmarshaledsortColors_temp_6;
	int32_t unmarshaledcolorResolution_temp_7 = 0;
	unmarshaledcolorResolution_temp_7 = marshaled.___colorResolution;
	unmarshaled.___colorResolution = unmarshaledcolorResolution_temp_7;
	int32_t unmarshaledpixelAspectRatio_temp_8 = 0;
	unmarshaledpixelAspectRatio_temp_8 = marshaled.___pixelAspectRatio;
	unmarshaled.___pixelAspectRatio = unmarshaledpixelAspectRatio_temp_8;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke_cleanup(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled)
{
	marshaled.___version = unmarshaled.___version;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___hasGlobalColorTable = static_cast<int32_t>(unmarshaled.___hasGlobalColorTable);
	marshaled.___globalColorTableSize = unmarshaled.___globalColorTableSize;
	marshaled.___transparentColorIndex = unmarshaled.___transparentColorIndex;
	marshaled.___sortColors = static_cast<int32_t>(unmarshaled.___sortColors);
	marshaled.___colorResolution = unmarshaled.___colorResolution;
	marshaled.___pixelAspectRatio = unmarshaled.___pixelAspectRatio;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com_back(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled)
{
	int32_t unmarshaledversion_temp_0 = 0;
	unmarshaledversion_temp_0 = marshaled.___version;
	unmarshaled.___version = unmarshaledversion_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_2;
	bool unmarshaledhasGlobalColorTable_temp_3 = false;
	unmarshaledhasGlobalColorTable_temp_3 = static_cast<bool>(marshaled.___hasGlobalColorTable);
	unmarshaled.___hasGlobalColorTable = unmarshaledhasGlobalColorTable_temp_3;
	int32_t unmarshaledglobalColorTableSize_temp_4 = 0;
	unmarshaledglobalColorTableSize_temp_4 = marshaled.___globalColorTableSize;
	unmarshaled.___globalColorTableSize = unmarshaledglobalColorTableSize_temp_4;
	int32_t unmarshaledtransparentColorIndex_temp_5 = 0;
	unmarshaledtransparentColorIndex_temp_5 = marshaled.___transparentColorIndex;
	unmarshaled.___transparentColorIndex = unmarshaledtransparentColorIndex_temp_5;
	bool unmarshaledsortColors_temp_6 = false;
	unmarshaledsortColors_temp_6 = static_cast<bool>(marshaled.___sortColors);
	unmarshaled.___sortColors = unmarshaledsortColors_temp_6;
	int32_t unmarshaledcolorResolution_temp_7 = 0;
	unmarshaledcolorResolution_temp_7 = marshaled.___colorResolution;
	unmarshaled.___colorResolution = unmarshaledcolorResolution_temp_7;
	int32_t unmarshaledpixelAspectRatio_temp_8 = 0;
	unmarshaledpixelAspectRatio_temp_8 = marshaled.___pixelAspectRatio;
	unmarshaled.___pixelAspectRatio = unmarshaledpixelAspectRatio_temp_8;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com_cleanup(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifImage_get_DelayMs_mEFDA5F3F7FFF218E5A536FCF1D7893A80962E539 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Model/GifImage.cs:11>
		int32_t L_0 = __this->___delay;
		return ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)10)));
	}
}
// Method Definition Index: 148935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelayMs_mB05AF7D32EF57699413249C3BDDDD49B2758DFA9 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Model/GifImage.cs:12>
		int32_t L_0 = __this->___delay;
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((int32_t)100);
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_1;
		L_1 = GifImage_get_DelayMs_mEFDA5F3F7FFF218E5A536FCF1D7893A80962E539(__this, NULL);
		G_B3_0 = L_1;
	}

IL_0013:
	{
		return ((float)G_B3_0);
	}
}
// Method Definition Index: 148936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_DelaySeconds_m5CD56C6BFFD2EAFC227C141D8E0773A8C85FEF3E (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Model/GifImage.cs:14>
		int32_t L_0 = __this->___delay;
		return ((float)(((float)L_0)/(100.0f)));
	}
}
// Method Definition Index: 148937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelaySeconds_m1469D5E57209B454175D5EB4E2AB8A4ACC1404A8 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Model/GifImage.cs:15>
		float L_0;
		L_0 = GifImage_get_SafeDelayMs_mB05AF7D32EF57699413249C3BDDDD49B2758DFA9(__this, NULL);
		return ((float)(L_0/(1000.0f)));
	}
}
// Method Definition Index: 148938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___isInterlaced = static_cast<int32_t>(unmarshaled.___isInterlaced);
	marshaled.___hasLocalColorTable = static_cast<int32_t>(unmarshaled.___hasLocalColorTable);
	marshaled.___localColorTableSize = unmarshaled.___localColorTableSize;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke_back(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled)
{
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	bool unmarshaledisInterlaced_temp_4 = false;
	unmarshaledisInterlaced_temp_4 = static_cast<bool>(marshaled.___isInterlaced);
	unmarshaled.___isInterlaced = unmarshaledisInterlaced_temp_4;
	bool unmarshaledhasLocalColorTable_temp_5 = false;
	unmarshaledhasLocalColorTable_temp_5 = static_cast<bool>(marshaled.___hasLocalColorTable);
	unmarshaled.___hasLocalColorTable = unmarshaledhasLocalColorTable_temp_5;
	int32_t unmarshaledlocalColorTableSize_temp_6 = 0;
	unmarshaledlocalColorTableSize_temp_6 = marshaled.___localColorTableSize;
	unmarshaled.___localColorTableSize = unmarshaledlocalColorTableSize_temp_6;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke_cleanup(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___isInterlaced = static_cast<int32_t>(unmarshaled.___isInterlaced);
	marshaled.___hasLocalColorTable = static_cast<int32_t>(unmarshaled.___hasLocalColorTable);
	marshaled.___localColorTableSize = unmarshaled.___localColorTableSize;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com_back(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled)
{
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	bool unmarshaledisInterlaced_temp_4 = false;
	unmarshaledisInterlaced_temp_4 = static_cast<bool>(marshaled.___isInterlaced);
	unmarshaled.___isInterlaced = unmarshaledisInterlaced_temp_4;
	bool unmarshaledhasLocalColorTable_temp_5 = false;
	unmarshaledhasLocalColorTable_temp_5 = static_cast<bool>(marshaled.___hasLocalColorTable);
	unmarshaled.___hasLocalColorTable = unmarshaledhasLocalColorTable_temp_5;
	int32_t unmarshaledlocalColorTableSize_temp_6 = 0;
	unmarshaledlocalColorTableSize_temp_6 = marshaled.___localColorTableSize;
	unmarshaled.___localColorTableSize = unmarshaledlocalColorTableSize_temp_6;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com_cleanup(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_pinvoke(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke& marshaled)
{
	marshaled.___hasLoopCount = static_cast<int32_t>(unmarshaled.___hasLoopCount);
	marshaled.___hasBufferSize = static_cast<int32_t>(unmarshaled.___hasBufferSize);
	marshaled.___loopCount = unmarshaled.___loopCount;
	marshaled.___bufferSize = unmarshaled.___bufferSize;
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_pinvoke_back(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke& marshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled)
{
	bool unmarshaledhasLoopCount_temp_0 = false;
	unmarshaledhasLoopCount_temp_0 = static_cast<bool>(marshaled.___hasLoopCount);
	unmarshaled.___hasLoopCount = unmarshaledhasLoopCount_temp_0;
	bool unmarshaledhasBufferSize_temp_1 = false;
	unmarshaledhasBufferSize_temp_1 = static_cast<bool>(marshaled.___hasBufferSize);
	unmarshaled.___hasBufferSize = unmarshaledhasBufferSize_temp_1;
	int32_t unmarshaledloopCount_temp_2 = 0;
	unmarshaledloopCount_temp_2 = marshaled.___loopCount;
	unmarshaled.___loopCount = unmarshaledloopCount_temp_2;
	int32_t unmarshaledbufferSize_temp_3 = 0;
	unmarshaledbufferSize_temp_3 = marshaled.___bufferSize;
	unmarshaled.___bufferSize = unmarshaledbufferSize_temp_3;
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_pinvoke_cleanup(GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_com(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com& marshaled)
{
	marshaled.___hasLoopCount = static_cast<int32_t>(unmarshaled.___hasLoopCount);
	marshaled.___hasBufferSize = static_cast<int32_t>(unmarshaled.___hasBufferSize);
	marshaled.___loopCount = unmarshaled.___loopCount;
	marshaled.___bufferSize = unmarshaled.___bufferSize;
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_com_back(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com& marshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled)
{
	bool unmarshaledhasLoopCount_temp_0 = false;
	unmarshaledhasLoopCount_temp_0 = static_cast<bool>(marshaled.___hasLoopCount);
	unmarshaled.___hasLoopCount = unmarshaledhasLoopCount_temp_0;
	bool unmarshaledhasBufferSize_temp_1 = false;
	unmarshaledhasBufferSize_temp_1 = static_cast<bool>(marshaled.___hasBufferSize);
	unmarshaled.___hasBufferSize = unmarshaledhasBufferSize_temp_1;
	int32_t unmarshaledloopCount_temp_2 = 0;
	unmarshaledloopCount_temp_2 = marshaled.___loopCount;
	unmarshaled.___loopCount = unmarshaledloopCount_temp_2;
	int32_t unmarshaledbufferSize_temp_3 = 0;
	unmarshaledbufferSize_temp_3 = marshaled.___bufferSize;
	unmarshaled.___bufferSize = unmarshaledbufferSize_temp_3;
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_com_cleanup(GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___palette != NULL)
	{
		il2cpp_array_size_t _unmarshaledpalette_Length = (unmarshaled.___palette)->max_length;
		marshaled.___palette = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledpalette_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledpalette_Length); i++)
		{
			(marshaled.___palette)[i] = (unmarshaled.___palette)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___palette = NULL;
	}
	marshaled.___size = unmarshaled.___size;
	marshaled.___isGlobal = static_cast<int32_t>(unmarshaled.___isGlobal);
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke_back(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___palette != NULL)
	{
		if (unmarshaled.___palette == NULL)
		{
			unmarshaled.___palette = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___palette), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___palette)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___palette)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___palette)[i]);
		}
	}
	int32_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size;
	unmarshaled.___size = unmarshaledsize_temp_1;
	bool unmarshaledisGlobal_temp_2 = false;
	unmarshaledisGlobal_temp_2 = static_cast<bool>(marshaled.___isGlobal);
	unmarshaled.___isGlobal = unmarshaledisGlobal_temp_2;
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke_cleanup(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled)
{
	if (marshaled.___palette != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___palette);
		marshaled.___palette = NULL;
	}
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled)
{
	if (unmarshaled.___palette != NULL)
	{
		il2cpp_array_size_t _unmarshaledpalette_Length = (unmarshaled.___palette)->max_length;
		marshaled.___palette = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledpalette_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledpalette_Length); i++)
		{
			(marshaled.___palette)[i] = (unmarshaled.___palette)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___palette = NULL;
	}
	marshaled.___size = unmarshaled.___size;
	marshaled.___isGlobal = static_cast<int32_t>(unmarshaled.___isGlobal);
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com_back(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___palette != NULL)
	{
		if (unmarshaled.___palette == NULL)
		{
			unmarshaled.___palette = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___palette), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___palette)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___palette)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___palette)[i]);
		}
	}
	int32_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size;
	unmarshaled.___size = unmarshaledsize_temp_1;
	bool unmarshaledisGlobal_temp_2 = false;
	unmarshaledisGlobal_temp_2 = static_cast<bool>(marshaled.___isGlobal);
	unmarshaled.___isGlobal = unmarshaledisGlobal_temp_2;
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com_cleanup(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled)
{
	if (marshaled.___palette != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___palette);
		marshaled.___palette = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___charWidth = unmarshaled.___charWidth;
	marshaled.___charHeight = unmarshaled.___charHeight;
	marshaled.___backgroundColor = unmarshaled.___backgroundColor;
	marshaled.___foregroundColor = unmarshaled.___foregroundColor;
	marshaled.___text = il2cpp_codegen_marshal_string(unmarshaled.___text);
	if (unmarshaled.___colors != NULL)
	{
		il2cpp_array_size_t _unmarshaledcolors_Length = (unmarshaled.___colors)->max_length;
		marshaled.___colors = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledcolors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledcolors_Length); i++)
		{
			(marshaled.___colors)[i] = (unmarshaled.___colors)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke_back(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	int32_t unmarshaledcharWidth_temp_4 = 0;
	unmarshaledcharWidth_temp_4 = marshaled.___charWidth;
	unmarshaled.___charWidth = unmarshaledcharWidth_temp_4;
	int32_t unmarshaledcharHeight_temp_5 = 0;
	unmarshaledcharHeight_temp_5 = marshaled.___charHeight;
	unmarshaled.___charHeight = unmarshaledcharHeight_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledbackgroundColor_temp_6;
	memset((&unmarshaledbackgroundColor_temp_6), 0, sizeof(unmarshaledbackgroundColor_temp_6));
	unmarshaledbackgroundColor_temp_6 = marshaled.___backgroundColor;
	unmarshaled.___backgroundColor = unmarshaledbackgroundColor_temp_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledforegroundColor_temp_7;
	memset((&unmarshaledforegroundColor_temp_7), 0, sizeof(unmarshaledforegroundColor_temp_7));
	unmarshaledforegroundColor_temp_7 = marshaled.___foregroundColor;
	unmarshaled.___foregroundColor = unmarshaledforegroundColor_temp_7;
	unmarshaled.___text = il2cpp_codegen_marshal_string_result(marshaled.___text);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text), (void*)il2cpp_codegen_marshal_string_result(marshaled.___text));
	if (marshaled.___colors != NULL)
	{
		if (unmarshaled.___colors == NULL)
		{
			unmarshaled.___colors = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___colors), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___colors)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___colors)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors)[i]);
		}
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke_cleanup(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text);
	marshaled.___text = NULL;
	if (marshaled.___colors != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors);
		marshaled.___colors = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled)
{
	marshaled.___left = unmarshaled.___left;
	marshaled.___top = unmarshaled.___top;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___charWidth = unmarshaled.___charWidth;
	marshaled.___charHeight = unmarshaled.___charHeight;
	marshaled.___backgroundColor = unmarshaled.___backgroundColor;
	marshaled.___foregroundColor = unmarshaled.___foregroundColor;
	marshaled.___text = il2cpp_codegen_marshal_bstring(unmarshaled.___text);
	if (unmarshaled.___colors != NULL)
	{
		il2cpp_array_size_t _unmarshaledcolors_Length = (unmarshaled.___colors)->max_length;
		marshaled.___colors = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledcolors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledcolors_Length); i++)
		{
			(marshaled.___colors)[i] = (unmarshaled.___colors)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com_back(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left;
	unmarshaled.___left = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top;
	unmarshaled.___top = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_3;
	int32_t unmarshaledcharWidth_temp_4 = 0;
	unmarshaledcharWidth_temp_4 = marshaled.___charWidth;
	unmarshaled.___charWidth = unmarshaledcharWidth_temp_4;
	int32_t unmarshaledcharHeight_temp_5 = 0;
	unmarshaledcharHeight_temp_5 = marshaled.___charHeight;
	unmarshaled.___charHeight = unmarshaledcharHeight_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledbackgroundColor_temp_6;
	memset((&unmarshaledbackgroundColor_temp_6), 0, sizeof(unmarshaledbackgroundColor_temp_6));
	unmarshaledbackgroundColor_temp_6 = marshaled.___backgroundColor;
	unmarshaled.___backgroundColor = unmarshaledbackgroundColor_temp_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledforegroundColor_temp_7;
	memset((&unmarshaledforegroundColor_temp_7), 0, sizeof(unmarshaledforegroundColor_temp_7));
	unmarshaledforegroundColor_temp_7 = marshaled.___foregroundColor;
	unmarshaled.___foregroundColor = unmarshaledforegroundColor_temp_7;
	unmarshaled.___text = il2cpp_codegen_marshal_bstring_result(marshaled.___text);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___text));
	if (marshaled.___colors != NULL)
	{
		if (unmarshaled.___colors == NULL)
		{
			unmarshaled.___colors = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___colors), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___colors)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___colors)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors)[i]);
		}
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com_cleanup(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text);
	marshaled.___text = NULL;
	if (marshaled.___colors != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors);
		marshaled.___colors = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3 (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:32>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:34>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___dictionaryEntryOffsets = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryEntryOffsets), (void*)L_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:35>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___dictionaryEntrySizes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryEntrySizes), (void*)L_1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:36>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->___dictionaryHeap = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryHeap), (void*)L_2);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:37>
		return;
	}
}
// Method Definition Index: 148940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_minLzwCodeSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:45>
		int32_t L_0 = __this->___currentMinLzwCodeSize;
		int32_t L_1 = ___0_minLzwCodeSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0093;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:47>
		int32_t L_2 = ___0_minLzwCodeSize;
		__this->___currentMinLzwCodeSize = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:48>
		__this->___dictionaryHeapPosition = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:49>
		__this->___dictionarySize = 0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:51>
		int32_t L_3 = ___0_minLzwCodeSize;
		V_0 = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:53>
		V_1 = 0;
		goto IL_0061;
	}

IL_002c:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:55>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___dictionaryEntryOffsets;
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___dictionaryHeapPosition;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:56>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___dictionaryEntrySizes;
		int32_t L_8 = V_1;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (int32_t)1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:57>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___dictionaryHeap;
		int32_t L_10 = __this->___dictionaryHeapPosition;
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)L_13));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:53>
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0061:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:53>
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:60>
		int32_t L_17 = V_0;
		__this->___initialDictionarySize = ((int32_t)il2cpp_codegen_add(L_17, 2));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:61>
		int32_t L_18 = ___0_minLzwCodeSize;
		__this->___initialLzwCodeSize = ((int32_t)il2cpp_codegen_add(L_18, 1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:62>
		int32_t L_19 = __this->___dictionaryHeapPosition;
		__this->___initialDictionaryHeapPosition = L_19;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:64>
		int32_t L_20 = V_0;
		__this->___clearCodeId = L_20;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:65>
		int32_t L_21 = V_0;
		__this->___stopCodeId = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0093:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:68>
		GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:69>
		return;
	}
}
// Method Definition Index: 148941
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:76>
		int32_t L_0 = __this->___initialLzwCodeSize;
		__this->___codeSize = L_0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:77>
		int32_t L_1 = __this->___initialDictionarySize;
		__this->___dictionarySize = L_1;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:78>
		int32_t L_2 = __this->___initialDictionaryHeapPosition;
		__this->___dictionaryHeapPosition = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:79>
		int32_t L_3 = __this->___codeSize;
		__this->___nextLzwCodeGrowth = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:80>
		__this->___isFull = (bool)0;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:81>
		__this->___lastCodeId = (-1);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:82>
		return;
	}
}
// Method Definition Index: 148942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___0_reader, GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___1_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;

IL_0000:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:91>
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_0 = ___0_reader;
		int32_t L_1 = __this->___codeSize;
		int32_t L_2;
		L_2 = GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:93>
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___clearCodeId;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:95>
		GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B(__this, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:96>
		goto IL_0000;
	}

IL_001e:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:99>
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___stopCodeId;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:101>
		return;
	}

IL_0028:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:105>
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___dictionarySize;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:107>
		int32_t L_9 = __this->___lastCodeId;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:108>
		int32_t L_10 = __this->___lastCodeId;
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE(__this, L_10, L_11, NULL);
	}

IL_0048:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:110>
		int32_t L_13 = V_0;
		__this->___lastCodeId = L_13;
		goto IL_0069;
	}

IL_0051:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:114>
		int32_t L_14 = __this->___lastCodeId;
		int32_t L_15 = __this->___lastCodeId;
		int32_t L_16;
		L_16 = GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE(__this, L_14, L_15, NULL);
		__this->___lastCodeId = L_16;
	}

IL_0069:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:118>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___dictionaryEntryOffsets;
		int32_t L_18 = __this->___lastCodeId;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:119>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___dictionaryEntrySizes;
		int32_t L_22 = __this->___lastCodeId;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:120>
		int32_t L_25 = L_20;
		int32_t L_26 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:122>
		V_3 = L_25;
		goto IL_009d;
	}

IL_008b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:123>
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_27 = ___1_c;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___dictionaryHeap;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9(L_27, L_31, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:122>
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009d:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:122>
		int32_t L_33 = V_3;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_008b;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:89>
		goto IL_0000;
	}
}
// Method Definition Index: 148943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_baseEntry, int32_t ___1_deriveEntry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B12_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B13_2 = NULL;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B16_0 = NULL;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B17_1 = NULL;
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:132>
		bool L_0 = __this->___isFull;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:133>
		return (-1);
	}

IL_000a:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:135>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___dictionaryEntryOffsets;
		int32_t L_2 = ___0_baseEntry;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:136>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___dictionaryEntrySizes;
		int32_t L_6 = ___0_baseEntry;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:137>
		int32_t L_9 = __this->___dictionaryHeapPosition;
		V_2 = L_9;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:138>
		int32_t L_10 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:139>
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:141>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___dictionaryHeap;
		int32_t L_14 = V_4;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) >= ((int32_t)L_14)))
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:142>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___dictionaryHeap);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___dictionaryHeap;
		int32_t L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_16)->max_length)), 2)), L_17, NULL);
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_15, L_18, Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0054:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:144>
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0095;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:147>
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:148>
		int32_t L_22 = V_0;
		V_7 = L_22;
		goto IL_008d;
	}

IL_0063:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:149>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___dictionaryHeap;
		int32_t L_24 = __this->___dictionaryHeapPosition;
		V_8 = L_24;
		int32_t L_25 = V_8;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___dictionaryHeap;
		int32_t L_28 = V_7;
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)L_30);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:148>
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_008d:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:148>
		int32_t L_32 = V_7;
		int32_t L_33 = V_6;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_00bc;
	}

IL_0095:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:153>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:154>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___dictionaryHeap;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___dictionaryHeap;
		int32_t L_37 = __this->___dictionaryHeapPosition;
		int32_t L_38 = V_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, L_37, L_38, NULL);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:155>
		int32_t L_39 = __this->___dictionaryHeapPosition;
		int32_t L_40 = V_1;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_39, L_40));
	}

IL_00bc:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:158>
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:159>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___dictionaryHeap;
		int32_t L_42 = __this->___dictionaryHeapPosition;
		V_8 = L_42;
		int32_t L_43 = V_8;
		__this->___dictionaryHeapPosition = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_8;
		int32_t L_45 = ___1_deriveEntry;
		int32_t L_46 = __this->___initialDictionarySize;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			G_B12_0 = L_44;
			G_B12_1 = L_41;
			goto IL_00f0;
		}
		G_B11_0 = L_44;
		G_B11_1 = L_41;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___dictionaryHeap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = __this->___dictionaryEntryOffsets;
		int32_t L_49 = ___1_deriveEntry;
		int32_t L_50 = L_49;
		int32_t L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		G_B13_0 = ((int32_t)(L_53));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00f2;
	}

IL_00f0:
	{
		int32_t L_54 = ___1_deriveEntry;
		G_B13_0 = ((int32_t)(uint8_t)L_54);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00f2:
	{
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (uint8_t)G_B13_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:161>
		int32_t L_55 = __this->___dictionarySize;
		V_8 = L_55;
		int32_t L_56 = V_8;
		__this->___dictionarySize = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = V_8;
		V_5 = L_57;
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:162>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___dictionaryEntryOffsets;
		int32_t L_59 = V_5;
		int32_t L_60 = V_2;
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59), (int32_t)L_60);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:163>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___dictionaryEntrySizes;
		int32_t L_62 = V_5;
		int32_t L_63 = V_3;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62), (int32_t)L_63);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:165>
		int32_t L_64 = __this->___dictionarySize;
		int32_t L_65 = __this->___nextLzwCodeGrowth;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_015b;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:167>
		int32_t L_66 = __this->___codeSize;
		__this->___codeSize = ((int32_t)il2cpp_codegen_add(L_66, 1));
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:168>
		int32_t L_67 = __this->___codeSize;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)12))))
		{
			G_B16_0 = __this;
			goto IL_0151;
		}
		G_B15_0 = __this;
	}
	{
		int32_t L_68 = __this->___codeSize;
		G_B17_0 = ((int32_t)(1<<((int32_t)(L_68&((int32_t)31)))));
		G_B17_1 = G_B15_0;
		goto IL_0156;
	}

IL_0151:
	{
		G_B17_0 = ((int32_t)2147483647LL);
		G_B17_1 = G_B16_0;
	}

IL_0156:
	{
		G_B17_1->___nextLzwCodeGrowth = G_B17_0;
	}

IL_015b:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:172>
		int32_t L_69 = __this->___dictionarySize;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)4096))))
		{
			goto IL_016f;
		}
	}
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:173>
		__this->___isFull = (bool)1;
	}

IL_016f:
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifLzwDictionary.cs:175>
		int32_t L_70 = V_5;
		return L_70;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 148867
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3_inline (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:34>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream), (void*)L_0);
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifBitBlockReader.cs:35>
		return;
	}
}
// Method Definition Index: 148875
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:33>
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundColorU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 104916
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba = 0;
		uint8_t L_0 = ___0_r;
		__this->___r = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
// Method Definition Index: 148873
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:27>
		bool L_0 = __this->___U3CFlipVerticallyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148874
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:27>
		bool L_0 = ___0_value;
		__this->___U3CFlipVerticallyU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148892
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:81>
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148893
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:81>
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentTokenU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148872
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:16>
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = __this->___canvasColors;
		return L_0;
	}
}
// Method Definition Index: 148888
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/GifStream.cs:62>
		bool L_0 = __this->___U3CDrawPlainTextBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148876
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/BG/Mojong/Assets/iDosGamesSDK Modules/Crypto Wallet IGC/SolanaSDK/Runtime/Plugins/Unity-GifDecoder/Decode/GifCanvas.cs:33>
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundColorU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 30438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
