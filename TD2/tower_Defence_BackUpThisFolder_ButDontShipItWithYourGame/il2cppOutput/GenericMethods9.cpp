#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>[]
struct EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>[]
struct EntryU5BU5D_tD84FE1C1FC6F83803F21BCDFFB547B37AA75D4C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct KeyCollection_t0263CB51367C32C408A557A05A7579A2CA5FA6CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct ValueCollection_t4E11BEF499037C8BE1542BA65A79DDD620C99F41;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<UnityEngine.Rendering.RTHandle>>
struct Dictionary_2_tBA6FCFAE6234E16BC42E54BE3EA081026F7E0766;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct Dictionary_2_tFC3C8A574A9ED3E806F2772B698968D167657AF5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_tB1D7C3E9630A5AC8D6B419BAA9D339CD161B580C;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t775DFC742169D06DA26DB18E9AB591BEB22B7504;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t12D495D4AF335010DEC3E91C58474E59EE2E50D8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,UnityEngine.Rendering.RTHandle>>
struct List_1_tA036BE3C346A746DC06EE4F210F7EE25E8EF8D82;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>
struct List_1_t9D0274819D403FC256FB95A188CD6937EC2D042A;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>
struct List_1_t5FA60F1B84B0F46E512C181735276529139B332B;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource>
struct List_1_t8B5BE7C02F8B72449725EF94DD6B815D27332696;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource>
struct List_1_t03C84B842C547176541CE0FA22D7051244B02C54;
// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>
struct List_1_t579B6C2DA9C5611C53BB3735A46977BDFB43C996;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913;
// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass
struct RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass[]
struct RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams
struct RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger
struct RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[]
struct RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD;
// UnityEngine.Rendering.CullingAllocationInfo
struct CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource>
struct DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/TextureResource>
struct DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D;
// UnityEngine.Rendering.RTHandleSystem
struct RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F;
// UnityEngine.Rendering.Universal.ShaderData
struct ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tF199E8A491AFB0F5FE7719C70280982101532AEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t775DFC742169D06DA26DB18E9AB591BEB22B7504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral38B62BE4BDDAA5661C7D6B8E36E28159314DF5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral9E472BA184920ADC07464FE7685F8C3B092DEE68;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE5571F9641DFCABA7A0C051B0A57381CFE9AE20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6FBEED88F00479578DD6BB65A17040F03A68B1BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Math_Average_TisRuntimeObject_mB3551342EBC6E1BCA145A5F316DFB98597963D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Math_Average_TisRuntimeObject_mB3551342EBC6E1BCA145A5F316DFB98597963D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderGraph_AddRenderPass_TisRuntimeObject_m6B652C36DEE94D9236EEA99180E21CD4B71772E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderData_GetOrUpdateBuffer_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7E4BC9A834C35FAFAC12C981283EDE04FFD892B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderData_GetOrUpdateBuffer_TisLightData_t773677FBDE7024B6D8122EE78BEB3C6FD245EEDF_m1EB827CAA326837FD3090A2AE65036B172153F1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderData_GetOrUpdateBuffer_TisShadowData_t7BEFADB532343B15D6E360E1D85CF0C3EC0D1571_m0136BDC8CEAC9C1D04E7F158EED403BA5B240808_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct  Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___entries_1)); }
	inline EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___keys_7)); }
	inline KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ___values_8)); }
	inline ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct  Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD84FE1C1FC6F83803F21BCDFFB547B37AA75D4C6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0263CB51367C32C408A557A05A7579A2CA5FA6CD * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4E11BEF499037C8BE1542BA65A79DDD620C99F41 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___entries_1)); }
	inline EntryU5BU5D_tD84FE1C1FC6F83803F21BCDFFB547B37AA75D4C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD84FE1C1FC6F83803F21BCDFFB547B37AA75D4C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD84FE1C1FC6F83803F21BCDFFB547B37AA75D4C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___keys_7)); }
	inline KeyCollection_t0263CB51367C32C408A557A05A7579A2CA5FA6CD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0263CB51367C32C408A557A05A7579A2CA5FA6CD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0263CB51367C32C408A557A05A7579A2CA5FA6CD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ___values_8)); }
	inline ValueCollection_t4E11BEF499037C8BE1542BA65A79DDD620C99F41 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4E11BEF499037C8BE1542BA65A79DDD620C99F41 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4E11BEF499037C8BE1542BA65A79DDD620C99F41 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass>
struct  List_1_t5FA60F1B84B0F46E512C181735276529139B332B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5FA60F1B84B0F46E512C181735276529139B332B, ____items_1)); }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* get__items_1() const { return ____items_1; }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5FA60F1B84B0F46E512C181735276529139B332B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5FA60F1B84B0F46E512C181735276529139B332B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5FA60F1B84B0F46E512C181735276529139B332B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5FA60F1B84B0F46E512C181735276529139B332B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5FA60F1B84B0F46E512C181735276529139B332B_StaticFields, ____emptyArray_5)); }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.SByte>
struct  Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Single>
struct  Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.TimeSpan>
struct  Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt16>
struct  Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt32>
struct  Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt64>
struct  Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UIntPtr>
struct  Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct  EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct  RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___m_RenderGraphPool_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderPasses
	List_1_t5FA60F1B84B0F46E512C181735276529139B332B * ___m_RenderPasses_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RendererLists
	List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * ___m_RendererLists_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_DebugParameters
	RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * ___m_DebugParameters_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Logger
	RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * ___m_Logger_6;

public:
	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RenderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_m_RenderGraphPool_2() const { return ___m_RenderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_m_RenderGraphPool_2() { return &___m_RenderGraphPool_2; }
	inline void set_m_RenderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___m_RenderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderPasses_3() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RenderPasses_3)); }
	inline List_1_t5FA60F1B84B0F46E512C181735276529139B332B * get_m_RenderPasses_3() const { return ___m_RenderPasses_3; }
	inline List_1_t5FA60F1B84B0F46E512C181735276529139B332B ** get_address_of_m_RenderPasses_3() { return &___m_RenderPasses_3; }
	inline void set_m_RenderPasses_3(List_1_t5FA60F1B84B0F46E512C181735276529139B332B * value)
	{
		___m_RenderPasses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPasses_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererLists_4() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RendererLists_4)); }
	inline List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * get_m_RendererLists_4() const { return ___m_RendererLists_4; }
	inline List_1_t03C84B842C547176541CE0FA22D7051244B02C54 ** get_address_of_m_RendererLists_4() { return &___m_RendererLists_4; }
	inline void set_m_RendererLists_4(List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * value)
	{
		___m_RendererLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DebugParameters_5() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_DebugParameters_5)); }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * get_m_DebugParameters_5() const { return ___m_DebugParameters_5; }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 ** get_address_of_m_DebugParameters_5() { return &___m_DebugParameters_5; }
	inline void set_m_DebugParameters_5(RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * value)
	{
		___m_DebugParameters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DebugParameters_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_Logger_6)); }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}
};

struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_StaticFields
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::kMaxMRTCount
	int32_t ___kMaxMRTCount_0;

public:
	inline static int32_t get_offset_of_kMaxMRTCount_0() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_StaticFields, ___kMaxMRTCount_0)); }
	inline int32_t get_kMaxMRTCount_0() const { return ___kMaxMRTCount_0; }
	inline int32_t* get_address_of_kMaxMRTCount_0() { return &___kMaxMRTCount_0; }
	inline void set_kMaxMRTCount_0(int32_t value)
	{
		___kMaxMRTCount_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct  RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_ArrayPool
	Dictionary_2_tFC3C8A574A9ED3E806F2772B698968D167657AF5 * ___m_ArrayPool_0;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedArrays
	List_1_t9D0274819D403FC256FB95A188CD6937EC2D042A * ___m_AllocatedArrays_1;
	// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedMaterialPropertyBlocks
	List_1_t579B6C2DA9C5611C53BB3735A46977BDFB43C996 * ___m_AllocatedMaterialPropertyBlocks_2;

public:
	inline static int32_t get_offset_of_m_ArrayPool_0() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_ArrayPool_0)); }
	inline Dictionary_2_tFC3C8A574A9ED3E806F2772B698968D167657AF5 * get_m_ArrayPool_0() const { return ___m_ArrayPool_0; }
	inline Dictionary_2_tFC3C8A574A9ED3E806F2772B698968D167657AF5 ** get_address_of_m_ArrayPool_0() { return &___m_ArrayPool_0; }
	inline void set_m_ArrayPool_0(Dictionary_2_tFC3C8A574A9ED3E806F2772B698968D167657AF5 * value)
	{
		___m_ArrayPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArrayPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedArrays_1() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_AllocatedArrays_1)); }
	inline List_1_t9D0274819D403FC256FB95A188CD6937EC2D042A * get_m_AllocatedArrays_1() const { return ___m_AllocatedArrays_1; }
	inline List_1_t9D0274819D403FC256FB95A188CD6937EC2D042A ** get_address_of_m_AllocatedArrays_1() { return &___m_AllocatedArrays_1; }
	inline void set_m_AllocatedArrays_1(List_1_t9D0274819D403FC256FB95A188CD6937EC2D042A * value)
	{
		___m_AllocatedArrays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedArrays_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedMaterialPropertyBlocks_2() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_AllocatedMaterialPropertyBlocks_2)); }
	inline List_1_t579B6C2DA9C5611C53BB3735A46977BDFB43C996 * get_m_AllocatedMaterialPropertyBlocks_2() const { return ___m_AllocatedMaterialPropertyBlocks_2; }
	inline List_1_t579B6C2DA9C5611C53BB3735A46977BDFB43C996 ** get_address_of_m_AllocatedMaterialPropertyBlocks_2() { return &___m_AllocatedMaterialPropertyBlocks_2; }
	inline void set_m_AllocatedMaterialPropertyBlocks_2(List_1_t579B6C2DA9C5611C53BB3735A46977BDFB43C996 * value)
	{
		___m_AllocatedMaterialPropertyBlocks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedMaterialPropertyBlocks_2), (void*)value);
	}
};


// UnityEngine.Rendering.ProfilingSampler
struct  ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D  : public RuntimeObject
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsamplerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CsamplerU3Ek__BackingField_0)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_U3CsamplerU3Ek__BackingField_0() const { return ___U3CsamplerU3Ek__BackingField_0; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_U3CsamplerU3Ek__BackingField_0() { return &___U3CsamplerU3Ek__BackingField_0; }
	inline void set_U3CsamplerU3Ek__BackingField_0(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___U3CsamplerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsamplerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinlineSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CinlineSamplerU3Ek__BackingField_1)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_U3CinlineSamplerU3Ek__BackingField_1() const { return ___U3CinlineSamplerU3Ek__BackingField_1; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_U3CinlineSamplerU3Ek__BackingField_1() { return &___U3CinlineSamplerU3Ek__BackingField_1; }
	inline void set_U3CinlineSamplerU3Ek__BackingField_1(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___U3CinlineSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinlineSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ShaderData
struct  ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8  : public RuntimeObject
{
public:
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_LightDataBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_LightDataBuffer_1;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_LightIndicesBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_LightIndicesBuffer_2;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_ShadowDataBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_ShadowDataBuffer_3;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::m_ShadowIndicesBuffer
	ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ___m_ShadowIndicesBuffer_4;

public:
	inline static int32_t get_offset_of_m_LightDataBuffer_1() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_LightDataBuffer_1)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_LightDataBuffer_1() const { return ___m_LightDataBuffer_1; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_LightDataBuffer_1() { return &___m_LightDataBuffer_1; }
	inline void set_m_LightDataBuffer_1(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_LightDataBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightDataBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightIndicesBuffer_2() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_LightIndicesBuffer_2)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_LightIndicesBuffer_2() const { return ___m_LightIndicesBuffer_2; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_LightIndicesBuffer_2() { return &___m_LightIndicesBuffer_2; }
	inline void set_m_LightIndicesBuffer_2(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_LightIndicesBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightIndicesBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShadowDataBuffer_3() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_ShadowDataBuffer_3)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_ShadowDataBuffer_3() const { return ___m_ShadowDataBuffer_3; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_ShadowDataBuffer_3() { return &___m_ShadowDataBuffer_3; }
	inline void set_m_ShadowDataBuffer_3(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_ShadowDataBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShadowDataBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShadowIndicesBuffer_4() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8, ___m_ShadowIndicesBuffer_4)); }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * get_m_ShadowIndicesBuffer_4() const { return ___m_ShadowIndicesBuffer_4; }
	inline ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** get_address_of_m_ShadowIndicesBuffer_4() { return &___m_ShadowIndicesBuffer_4; }
	inline void set_m_ShadowIndicesBuffer_4(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * value)
	{
		___m_ShadowIndicesBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShadowIndicesBuffer_4), (void*)value);
	}
};

struct ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.ShaderData UnityEngine.Rendering.Universal.ShaderData::m_Instance
	ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * ___m_Instance_0;

public:
	inline static int32_t get_offset_of_m_Instance_0() { return static_cast<int32_t>(offsetof(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8_StaticFields, ___m_Instance_0)); }
	inline ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * get_m_Instance_0() const { return ___m_Instance_0; }
	inline ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 ** get_address_of_m_Instance_0() { return &___m_Instance_0; }
	inline void set_m_Instance_0(ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * value)
	{
		___m_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_0), (void*)value);
	}
};


// UnityEngine.UIElements.StyleValueExtensions
struct  StyleValueExtensions_tB5C36975F3FBDF3E96DF727123E9F2BF45840915  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct  RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderPass
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Disposed
	bool ___m_Disposed_2;

public:
	inline static int32_t get_offset_of_m_RenderPass_0() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_RenderPass_0)); }
	inline RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * get_m_RenderPass_0() const { return ___m_RenderPass_0; }
	inline RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 ** get_address_of_m_RenderPass_0() { return &___m_RenderPass_0; }
	inline void set_m_RenderPass_0(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * value)
	{
		___m_RenderPass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPass_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_2() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_Disposed_2)); }
	inline bool get_m_Disposed_2() const { return ___m_Disposed_2; }
	inline bool* get_address_of_m_Disposed_2() { return &___m_Disposed_2; }
	inline void set_m_Disposed_2(bool value)
	{
		___m_Disposed_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_marshaled_pinvoke
{
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	int32_t ___m_Disposed_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_marshaled_com
{
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	int32_t ___m_Disposed_2;
};

// UnityEngine.Rendering.ShaderTagId
struct  ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields, ___none_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_none_0() const { return ___none_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___none_0 = value;
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>
struct  TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF  : public ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D
{
public:

public:
};

struct TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C * ___samples_3;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields, ___samples_3)); }
	inline Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C * get_samples_3() const { return ___samples_3; }
	inline Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_3), (void*)value);
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Object>
struct  TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD  : public ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D
{
public:

public:
};

struct TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 * ___samples_3;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD_StaticFields, ___samples_3)); }
	inline Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 * get_samples_3() const { return ___samples_3; }
	inline Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ComputeBuffer
struct  ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct  RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry_TextureResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TextureResources
	DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * ___m_TextureResources_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<UnityEngine.Rendering.RTHandle>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TexturePool
	Dictionary_2_tBA6FCFAE6234E16BC42E54BE3EA081026F7E0766 * ___m_TexturePool_2;
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry_RendererListResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RendererListResources
	DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * ___m_RendererListResources_3;
	// UnityEngine.Rendering.RTHandleSystem UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RTHandleSystem
	RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * ___m_RTHandleSystem_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RenderGraphDebug
	RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * ___m_RenderGraphDebug_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_Logger
	RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * ___m_Logger_6;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,UnityEngine.Rendering.RTHandle>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_AllocatedTextures
	List_1_tA036BE3C346A746DC06EE4F210F7EE25E8EF8D82 * ___m_AllocatedTextures_7;

public:
	inline static int32_t get_offset_of_m_TextureResources_1() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_TextureResources_1)); }
	inline DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * get_m_TextureResources_1() const { return ___m_TextureResources_1; }
	inline DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 ** get_address_of_m_TextureResources_1() { return &___m_TextureResources_1; }
	inline void set_m_TextureResources_1(DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * value)
	{
		___m_TextureResources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureResources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TexturePool_2() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_TexturePool_2)); }
	inline Dictionary_2_tBA6FCFAE6234E16BC42E54BE3EA081026F7E0766 * get_m_TexturePool_2() const { return ___m_TexturePool_2; }
	inline Dictionary_2_tBA6FCFAE6234E16BC42E54BE3EA081026F7E0766 ** get_address_of_m_TexturePool_2() { return &___m_TexturePool_2; }
	inline void set_m_TexturePool_2(Dictionary_2_tBA6FCFAE6234E16BC42E54BE3EA081026F7E0766 * value)
	{
		___m_TexturePool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TexturePool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererListResources_3() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RendererListResources_3)); }
	inline DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * get_m_RendererListResources_3() const { return ___m_RendererListResources_3; }
	inline DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF ** get_address_of_m_RendererListResources_3() { return &___m_RendererListResources_3; }
	inline void set_m_RendererListResources_3(DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * value)
	{
		___m_RendererListResources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererListResources_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RTHandleSystem_4() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RTHandleSystem_4)); }
	inline RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * get_m_RTHandleSystem_4() const { return ___m_RTHandleSystem_4; }
	inline RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F ** get_address_of_m_RTHandleSystem_4() { return &___m_RTHandleSystem_4; }
	inline void set_m_RTHandleSystem_4(RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * value)
	{
		___m_RTHandleSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RTHandleSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphDebug_5() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RenderGraphDebug_5)); }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * get_m_RenderGraphDebug_5() const { return ___m_RenderGraphDebug_5; }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 ** get_address_of_m_RenderGraphDebug_5() { return &___m_RenderGraphDebug_5; }
	inline void set_m_RenderGraphDebug_5(RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * value)
	{
		___m_RenderGraphDebug_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphDebug_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_Logger_6)); }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedTextures_7() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_AllocatedTextures_7)); }
	inline List_1_tA036BE3C346A746DC06EE4F210F7EE25E8EF8D82 * get_m_AllocatedTextures_7() const { return ___m_AllocatedTextures_7; }
	inline List_1_tA036BE3C346A746DC06EE4F210F7EE25E8EF8D82 ** get_address_of_m_AllocatedTextures_7() { return &___m_AllocatedTextures_7; }
	inline void set_m_AllocatedTextures_7(List_1_tA036BE3C346A746DC06EE4F210F7EE25E8EF8D82 * value)
	{
		___m_AllocatedTextures_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedTextures_7), (void*)value);
	}
};

struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::s_EmptyName
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___s_EmptyName_0;

public:
	inline static int32_t get_offset_of_s_EmptyName_0() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82_StaticFields, ___s_EmptyName_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_s_EmptyName_0() const { return ___s_EmptyName_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_s_EmptyName_0() { return &___s_EmptyName_0; }
	inline void set_s_EmptyName_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___s_EmptyName_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct  RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ProBuilder.Math
struct  Math_tD12DCA3BE31887DB207235DF731DA811210C2D4D  : public RuntimeObject
{
public:

public:
};

struct Math_tD12DCA3BE31887DB207235DF731DA811210C2D4D_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::tv1
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tv1_4;
	// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::tv2
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tv2_5;
	// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::tv3
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tv3_6;
	// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::tv4
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tv4_7;

public:
	inline static int32_t get_offset_of_tv1_4() { return static_cast<int32_t>(offsetof(Math_tD12DCA3BE31887DB207235DF731DA811210C2D4D_StaticFields, ___tv1_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_tv1_4() const { return ___tv1_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_tv1_4() { return &___tv1_4; }
	inline void set_tv1_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___tv1_4 = value;
	}

	inline static int32_t get_offset_of_tv2_5() { return static_cast<int32_t>(offsetof(Math_tD12DCA3BE31887DB207235DF731DA811210C2D4D_StaticFields, ___tv2_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_tv2_5() const { return ___tv2_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_tv2_5() { return &___tv2_5; }
	inline void set_tv2_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___tv2_5 = value;
	}

	inline static int32_t get_offset_of_tv3_6() { return static_cast<int32_t>(offsetof(Math_tD12DCA3BE31887DB207235DF731DA811210C2D4D_StaticFields, ___tv3_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_tv3_6() const { return ___tv3_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_tv3_6() { return &___tv3_6; }
	inline void set_tv3_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___tv3_6 = value;
	}

	inline static int32_t get_offset_of_tv4_7() { return static_cast<int32_t>(offsetof(Math_tD12DCA3BE31887DB207235DF731DA811210C2D4D_StaticFields, ___tv4_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_tv4_7() const { return ___tv4_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_tv4_7() { return &___tv4_7; }
	inline void set_tv4_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___tv4_7 = value;
	}
};


// UnityEngine.Rendering.CullingResults
struct  CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B 
{
public:
	// System.IntPtr UnityEngine.Rendering.CullingResults::ptr
	intptr_t ___ptr_0;
	// UnityEngine.Rendering.CullingAllocationInfo* UnityEngine.Rendering.CullingResults::m_AllocationInfo
	CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 * ___m_AllocationInfo_1;

public:
	inline static int32_t get_offset_of_ptr_0() { return static_cast<int32_t>(offsetof(CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B, ___ptr_0)); }
	inline intptr_t get_ptr_0() const { return ___ptr_0; }
	inline intptr_t* get_address_of_ptr_0() { return &___ptr_0; }
	inline void set_ptr_0(intptr_t value)
	{
		___ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocationInfo_1() { return static_cast<int32_t>(offsetof(CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B, ___m_AllocationInfo_1)); }
	inline CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 * get_m_AllocationInfo_1() const { return ___m_AllocationInfo_1; }
	inline CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 ** get_address_of_m_AllocationInfo_1() { return &___m_AllocationInfo_1; }
	inline void set_m_AllocationInfo_1(CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 * value)
	{
		___m_AllocationInfo_1 = value;
	}
};


// UnityEngine.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>
struct  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct  RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3 
{
public:
	// UnityEngine.Rendering.ScriptableRenderContext UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderContext
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::cmd
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;

public:
	inline static int32_t get_offset_of_renderContext_0() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderContext_0)); }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  get_renderContext_0() const { return ___renderContext_0; }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B * get_address_of_renderContext_0() { return &___renderContext_0; }
	inline void set_renderContext_0(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  value)
	{
		___renderContext_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___cmd_1)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_cmd_1() const { return ___cmd_1; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___cmd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmd_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_renderGraphPool_2() const { return ___renderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_renderGraphPool_2() { return &___renderGraphPool_2; }
	inline void set_renderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___renderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_resources_3() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___resources_3)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_resources_3() const { return ___resources_3; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_resources_3() { return &___resources_3; }
	inline void set_resources_3(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___resources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resources_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_pinvoke
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_com
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource
struct  RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3ChandleU3Ek__BackingField_0)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_0() const { return ___U3ChandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_0() { return &___U3ChandleU3Ek__BackingField_0; }
	inline void set_U3ChandleU3Ek__BackingField_0(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CversionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CversionU3Ek__BackingField_2)); }
	inline int32_t get_U3CversionU3Ek__BackingField_2() const { return ___U3CversionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CversionU3Ek__BackingField_2() { return &___U3CversionU3Ek__BackingField_2; }
	inline void set_U3CversionU3Ek__BackingField_2(int32_t value)
	{
		___U3CversionU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleInt
struct  StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.SByte>
struct  Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Single>
struct  Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.TimeSpan>
struct  Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt16>
struct  Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt32>
struct  Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt64>
struct  Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UIntPtr>
struct  Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,UnityEngine.Vector3>
struct  Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct  RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass
struct  RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::name
	String_t* ___name_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::index
	int32_t ___index_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::customSampler
	ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ___customSampler_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::resourceReadList
	List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * ___resourceReadList_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::resourceWriteList
	List_1_t8B5BE7C02F8B72449725EF94DD6B815D27332696 * ___resourceWriteList_4;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::usedRendererListList
	List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * ___usedRendererListList_5;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::enableAsyncCompute
	bool ___enableAsyncCompute_6;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_ColorBuffers
	RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* ___m_ColorBuffers_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_DepthBuffer
	RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___m_DepthBuffer_8;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_MaxColorBufferIndex
	int32_t ___m_MaxColorBufferIndex_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_customSampler_2() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___customSampler_2)); }
	inline ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * get_customSampler_2() const { return ___customSampler_2; }
	inline ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D ** get_address_of_customSampler_2() { return &___customSampler_2; }
	inline void set_customSampler_2(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * value)
	{
		___customSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSampler_2), (void*)value);
	}

	inline static int32_t get_offset_of_resourceReadList_3() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___resourceReadList_3)); }
	inline List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * get_resourceReadList_3() const { return ___resourceReadList_3; }
	inline List_1_t03C84B842C547176541CE0FA22D7051244B02C54 ** get_address_of_resourceReadList_3() { return &___resourceReadList_3; }
	inline void set_resourceReadList_3(List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * value)
	{
		___resourceReadList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadList_3), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteList_4() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___resourceWriteList_4)); }
	inline List_1_t8B5BE7C02F8B72449725EF94DD6B815D27332696 * get_resourceWriteList_4() const { return ___resourceWriteList_4; }
	inline List_1_t8B5BE7C02F8B72449725EF94DD6B815D27332696 ** get_address_of_resourceWriteList_4() { return &___resourceWriteList_4; }
	inline void set_resourceWriteList_4(List_1_t8B5BE7C02F8B72449725EF94DD6B815D27332696 * value)
	{
		___resourceWriteList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteList_4), (void*)value);
	}

	inline static int32_t get_offset_of_usedRendererListList_5() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___usedRendererListList_5)); }
	inline List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * get_usedRendererListList_5() const { return ___usedRendererListList_5; }
	inline List_1_t03C84B842C547176541CE0FA22D7051244B02C54 ** get_address_of_usedRendererListList_5() { return &___usedRendererListList_5; }
	inline void set_usedRendererListList_5(List_1_t03C84B842C547176541CE0FA22D7051244B02C54 * value)
	{
		___usedRendererListList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedRendererListList_5), (void*)value);
	}

	inline static int32_t get_offset_of_enableAsyncCompute_6() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___enableAsyncCompute_6)); }
	inline bool get_enableAsyncCompute_6() const { return ___enableAsyncCompute_6; }
	inline bool* get_address_of_enableAsyncCompute_6() { return &___enableAsyncCompute_6; }
	inline void set_enableAsyncCompute_6(bool value)
	{
		___enableAsyncCompute_6 = value;
	}

	inline static int32_t get_offset_of_m_ColorBuffers_7() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_ColorBuffers_7)); }
	inline RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* get_m_ColorBuffers_7() const { return ___m_ColorBuffers_7; }
	inline RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA** get_address_of_m_ColorBuffers_7() { return &___m_ColorBuffers_7; }
	inline void set_m_ColorBuffers_7(RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* value)
	{
		___m_ColorBuffers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorBuffers_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthBuffer_8() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_DepthBuffer_8)); }
	inline RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  get_m_DepthBuffer_8() const { return ___m_DepthBuffer_8; }
	inline RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 * get_address_of_m_DepthBuffer_8() { return &___m_DepthBuffer_8; }
	inline void set_m_DepthBuffer_8(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  value)
	{
		___m_DepthBuffer_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxColorBufferIndex_9() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_MaxColorBufferIndex_9)); }
	inline int32_t get_m_MaxColorBufferIndex_9() const { return ___m_MaxColorBufferIndex_9; }
	inline int32_t* get_address_of_m_MaxColorBufferIndex_9() { return &___m_MaxColorBufferIndex_9; }
	inline void set_m_MaxColorBufferIndex_9(int32_t value)
	{
		___m_MaxColorBufferIndex_9 = value;
	}
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1<System.Object>
struct  RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7  : public RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035
{
public:
	// PassData UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1::data
	RuntimeObject * ___data_10;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1::renderFunc
	RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B * ___renderFunc_11;

public:
	inline static int32_t get_offset_of_data_10() { return static_cast<int32_t>(offsetof(RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7, ___data_10)); }
	inline RuntimeObject * get_data_10() const { return ___data_10; }
	inline RuntimeObject ** get_address_of_data_10() { return &___data_10; }
	inline void set_data_10(RuntimeObject * value)
	{
		___data_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_10), (void*)value);
	}

	inline static int32_t get_offset_of_renderFunc_11() { return static_cast<int32_t>(offsetof(RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7, ___renderFunc_11)); }
	inline RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B * get_renderFunc_11() const { return ___renderFunc_11; }
	inline RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B ** get_address_of_renderFunc_11() { return &___renderFunc_11; }
	inline void set_renderFunc_11(RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B * value)
	{
		___renderFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderFunc_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_gshared (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);

// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
inline NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163 (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  (*) (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B *, void*, int32_t, const RuntimeMethod*))CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_gshared)(__this, ___dataPointer0, ___length1, method);
}
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * __this, int32_t ___count0, int32_t ___stride1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPass_Clear_mB3E7DA4169AA93C7124514BEDA127D50EDDD7609 (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>::get_Count()
inline int32_t List_1_get_Count_m6FBEED88F00479578DD6BB65A17040F03A68B1BE_inline (List_1_t5FA60F1B84B0F46E512C181735276529139B332B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5FA60F1B84B0F46E512C181735276529139B332B *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>::Add(!0)
inline void List_1_Add_mEE5571F9641DFCABA7A0C051B0A57381CFE9AE20 (List_1_t5FA60F1B84B0F46E512C181735276529139B332B * __this, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FA60F1B84B0F46E512C181735276529139B332B *, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::.ctor(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass,UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphBuilder__ctor_mE7BE02E90DEBB96676ECADF84282C15367B5BD1A (RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 * __this, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___renderPass0, RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104 (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Int32 UnityEngine.UIElements.StyleInt::get_specificity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m40171CC2B05F787A453D415B7B354C70FA91EB3C_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * L_0 = ((Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m08399F0F8C4F12BD2E29A845B2D5F7796C41B29E_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * L_0 = ((Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mBD8CF0C29D9F8046510C4F5872622EB351F706AE_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * L_0 = ((Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m663895C442194B5C317393C7D716656B08408CAE_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * L_0 = ((Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3A2842E06D5905F6E685A3033ECE6BB76E8912CF_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * L_0 = ((Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m4F2C115C6D08D4097EC80756F75A08786FF84C9B_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * L_0 = ((Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_mF6BC18592D238BE188D32FDF0722A5D2882A7763_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * L_0 = ((Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_m3E7AB3E41E3D5A232EA0A04C753B0A12F03E3417_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_3 = V_1;
		V_0 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_3;
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_4 = V_0;
		V_2 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_5 = V_2;
		return (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_gshared (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ___dataPointer0;
		int32_t L_1 = ___length1;
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_2 = ((  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_2;
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_3 = V_0;
		V_1 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_3;
		goto IL_000e;
	}

IL_000e:
	{
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_4 = V_1;
		return (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_4;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_AdjustorThunk (RuntimeObject * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * _thisAdjusted = reinterpret_cast<CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B *>(__this + _offset);
	return CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163(_thisAdjusted, ___dataPointer0, ___length1, method);
}
// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::GetOrUpdateBuffer<System.Int32>(UnityEngine.ComputeBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ShaderData_GetOrUpdateBuffer_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7E4BC9A834C35FAFAC12C981283EDE04FFD892B7_gshared (ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * __this, ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** ___buffer0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderData_GetOrUpdateBuffer_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m7E4BC9A834C35FAFAC12C981283EDE04FFD892B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_0 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_1 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_2 = ___buffer0;
		int32_t L_3 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_5 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_5, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		// }
		goto IL_0031;
	}

IL_0013:
	{
		// else if (size > buffer.count)
		int32_t L_6 = ___size1;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_7 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_8 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_7);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8);
		int32_t L_9 = ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		// buffer.Dispose();
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_10 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_11 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_10);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11);
		ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11, /*hidden argument*/NULL);
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_12 = ___buffer0;
		int32_t L_13 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_14 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_15 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
	}

IL_0031:
	{
		// return buffer;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_16 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_17 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_16);
		return (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_17;
	}
}
// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::GetOrUpdateBuffer<UnityEngine.Rendering.Universal.ShaderInput_LightData>(UnityEngine.ComputeBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ShaderData_GetOrUpdateBuffer_TisLightData_t773677FBDE7024B6D8122EE78BEB3C6FD245EEDF_m1EB827CAA326837FD3090A2AE65036B172153F1F_gshared (ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * __this, ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** ___buffer0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderData_GetOrUpdateBuffer_TisLightData_t773677FBDE7024B6D8122EE78BEB3C6FD245EEDF_m1EB827CAA326837FD3090A2AE65036B172153F1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_0 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_1 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_2 = ___buffer0;
		int32_t L_3 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_5 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_5, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		// }
		goto IL_0031;
	}

IL_0013:
	{
		// else if (size > buffer.count)
		int32_t L_6 = ___size1;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_7 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_8 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_7);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8);
		int32_t L_9 = ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		// buffer.Dispose();
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_10 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_11 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_10);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11);
		ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11, /*hidden argument*/NULL);
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_12 = ___buffer0;
		int32_t L_13 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_14 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_15 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
	}

IL_0031:
	{
		// return buffer;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_16 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_17 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_16);
		return (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_17;
	}
}
// UnityEngine.ComputeBuffer UnityEngine.Rendering.Universal.ShaderData::GetOrUpdateBuffer<UnityEngine.Rendering.Universal.ShaderInput_ShadowData>(UnityEngine.ComputeBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * ShaderData_GetOrUpdateBuffer_TisShadowData_t7BEFADB532343B15D6E360E1D85CF0C3EC0D1571_m0136BDC8CEAC9C1D04E7F158EED403BA5B240808_gshared (ShaderData_t8C36923EF9D66B7EA521E82B026A0B957A82A1F8 * __this, ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** ___buffer0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderData_GetOrUpdateBuffer_TisShadowData_t7BEFADB532343B15D6E360E1D85CF0C3EC0D1571_m0136BDC8CEAC9C1D04E7F158EED403BA5B240808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buffer == null)
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_0 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_1 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_2 = ___buffer0;
		int32_t L_3 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_5 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_5, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_5);
		// }
		goto IL_0031;
	}

IL_0013:
	{
		// else if (size > buffer.count)
		int32_t L_6 = ___size1;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_7 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_8 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_7);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8);
		int32_t L_9 = ComputeBuffer_get_count_m2D80EF2880723F6627924C0ABC642D8DB538D04D((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		// buffer.Dispose();
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_10 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_11 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_10);
		NullCheck((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11);
		ComputeBuffer_Dispose_m002F431B0EBF0B24DF20C7EB8FC2F44B596A6FFE((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_11, /*hidden argument*/NULL);
		// buffer = new ComputeBuffer(size, Marshal.SizeOf<T>());
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_12 = ___buffer0;
		int32_t L_13 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_14 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_15 = (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)il2cpp_codegen_object_new(ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mDB6AADE63A5BF60A472D9FF9E533AF38D15C6B1E(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
	}

IL_0031:
	{
		// return buffer;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 ** L_16 = ___buffer0;
		ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 * L_17 = *((ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 **)L_16);
		return (ComputeBuffer_t52D8926E1D54293AD28F4C29FE3F5363749B0FE5 *)L_17;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::GetExecuteDelegate<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B * RenderPass_GetExecuteDelegate_TisRuntimeObject_m93E8467045A9470F2640A5BA67730592CD70B976_gshared (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * __this, const RuntimeMethod* method)
{
	{
		// where PassData : class, new() => ((RenderPass<PassData>)this).renderFunc;
		NullCheck(((RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B * L_0 = (RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B *)((RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_renderFunc_11();
		return (RenderFunc_1_t617683A8A2F9B4C57C7BEDA7FCCCBD52C80AA89B *)L_0;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::AddRenderPass<System.Object>(System.String,PassData&,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  RenderGraph_AddRenderPass_TisRuntimeObject_m6B652C36DEE94D9236EEA99180E21CD4B71772E0_gshared (RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042 * __this, String_t* ___passName0, RuntimeObject ** ___passData1, ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ___sampler2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderGraph_AddRenderPass_TisRuntimeObject_m6B652C36DEE94D9236EEA99180E21CD4B71772E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * V_0 = NULL;
	{
		// var renderPass = m_RenderGraphPool.Get<RenderPass<PassData>>();
		RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * L_0 = (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)__this->get_m_RenderGraphPool_2();
		NullCheck((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_0);
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_1 = ((  RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * (*) (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 *)L_1;
		// renderPass.Clear();
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_2 = V_0;
		NullCheck((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_2);
		RenderPass_Clear_mB3E7DA4169AA93C7124514BEDA127D50EDDD7609((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_2, /*hidden argument*/NULL);
		// renderPass.index = m_RenderPasses.Count;
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_3 = V_0;
		List_1_t5FA60F1B84B0F46E512C181735276529139B332B * L_4 = (List_1_t5FA60F1B84B0F46E512C181735276529139B332B *)__this->get_m_RenderPasses_3();
		NullCheck((List_1_t5FA60F1B84B0F46E512C181735276529139B332B *)L_4);
		int32_t L_5 = List_1_get_Count_m6FBEED88F00479578DD6BB65A17040F03A68B1BE_inline((List_1_t5FA60F1B84B0F46E512C181735276529139B332B *)L_4, /*hidden argument*/List_1_get_Count_m6FBEED88F00479578DD6BB65A17040F03A68B1BE_RuntimeMethod_var);
		NullCheck(L_3);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_3)->set_index_1(L_5);
		// renderPass.data = m_RenderGraphPool.Get<PassData>();
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_6 = V_0;
		RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * L_7 = (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)__this->get_m_RenderGraphPool_2();
		NullCheck((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_7);
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_6);
		L_6->set_data_10(L_8);
		// renderPass.name = passName;
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_9 = V_0;
		String_t* L_10 = ___passName0;
		NullCheck(L_9);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_9)->set_name_0(L_10);
		// renderPass.customSampler = sampler;
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_11 = V_0;
		ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * L_12 = ___sampler2;
		NullCheck(L_11);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_11)->set_customSampler_2(L_12);
		// passData = renderPass.data;
		RuntimeObject ** L_13 = ___passData1;
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject * L_15 = (RuntimeObject *)L_14->get_data_10();
		*(RuntimeObject **)L_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)L_15);
		// m_RenderPasses.Add(renderPass);
		List_1_t5FA60F1B84B0F46E512C181735276529139B332B * L_16 = (List_1_t5FA60F1B84B0F46E512C181735276529139B332B *)__this->get_m_RenderPasses_3();
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_17 = V_0;
		NullCheck((List_1_t5FA60F1B84B0F46E512C181735276529139B332B *)L_16);
		List_1_Add_mEE5571F9641DFCABA7A0C051B0A57381CFE9AE20((List_1_t5FA60F1B84B0F46E512C181735276529139B332B *)L_16, (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_17, /*hidden argument*/List_1_Add_mEE5571F9641DFCABA7A0C051B0A57381CFE9AE20_RuntimeMethod_var);
		// return new RenderGraphBuilder(renderPass, m_Resources);
		RenderPass_1_t3AC721D7631789624B24E503C163D642AD4695D7 * L_18 = V_0;
		RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * L_19 = (RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 *)__this->get_m_Resources_1();
		RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  L_20;
		memset((&L_20), 0, sizeof(L_20));
		RenderGraphBuilder__ctor_mE7BE02E90DEBB96676ECADF84282C15367B5BD1A((&L_20), (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_18, (RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 *)L_19, /*hidden argument*/NULL);
		return (RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 )L_20;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14);
		int32_t L_15 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Int32Enum>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ProfilingSampler_Get_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mF2CC212DE30788E5451264D3035A9BAEDB2945B8_gshared (int32_t ___marker0, const RuntimeMethod* method)
{
	TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF * V_0 = NULL;
	{
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C * L_0 = ((TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_3();
		int32_t L_1 = ___marker0;
		NullCheck((Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C *)L_0);
		((  bool (*) (Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C *, int32_t, TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t58AC3A9995D92E1DBB11D7734466784D7B8F662C *)L_0, (int32_t)L_1, (TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **)(TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return sampler;
		TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF * L_2 = V_0;
		return (ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D *)L_2;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Object>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ProfilingSampler_Get_TisRuntimeObject_m11026484A838DEF905D1971C19DA122C345BAF8F_gshared (RuntimeObject * ___marker0, const RuntimeMethod* method)
{
	TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD * V_0 = NULL;
	{
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 * L_0 = ((TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_3();
		RuntimeObject * L_1 = ___marker0;
		NullCheck((Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 *)L_0);
		((  bool (*) (Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 *, RuntimeObject *, TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t2FEE6F31B3210E26525EB2ED1D7638C0B3866802 *)L_0, (RuntimeObject *)L_1, (TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD **)(TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return sampler;
		TProfilingSampler_1_t778DBBCEA58D55177BD9AA3ABD70E1F39E852AFD * L_2 = V_0;
		return (ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D *)L_2;
	}
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleValueExtensions::ToStyleEnum<System.Int32Enum>(UnityEngine.UIElements.StyleInt,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  StyleValueExtensions_ToStyleEnum_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m23F1DB8B35560B2F8A54DBB59C111DE0ED0FF86E_gshared (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___styleInt0, int32_t ___value1, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___value1;
		int32_t L_1 = StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_2 = StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		V_1 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = V_1;
		return (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::Average<System.Object>(System.Collections.Generic.IList`1<T>,System.Func`2<T,UnityEngine.Vector3>,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Math_Average_TisRuntimeObject_mB3551342EBC6E1BCA145A5F316DFB98597963D3C_gshared (RuntimeObject* ___list0, Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 * ___selector1, RuntimeObject* ___indexes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Math_Average_TisRuntimeObject_mB3551342EBC6E1BCA145A5F316DFB98597963D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (list == null)
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("list");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral38B62BE4BDDAA5661C7D6B8E36E28159314DF5C7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Math_Average_TisRuntimeObject_mB3551342EBC6E1BCA145A5F316DFB98597963D3C_RuntimeMethod_var);
	}

IL_000e:
	{
		// if (selector == null)
		Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 * L_2 = ___selector1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException("selector");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteral9E472BA184920ADC07464FE7685F8C3B092DEE68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Math_Average_TisRuntimeObject_mB3551342EBC6E1BCA145A5F316DFB98597963D3C_RuntimeMethod_var);
	}

IL_001c:
	{
		// Vector3 sum = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_4;
		// float len = indexes == null ? list.Count : indexes.Count;
		RuntimeObject* L_5 = ___indexes2;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_6 = ___indexes2;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_tF199E8A491AFB0F5FE7719C70280982101532AEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
		G_B7_0 = L_7;
		goto IL_0033;
	}

IL_002d:
	{
		RuntimeObject* L_8 = ___list0;
		NullCheck((RuntimeObject*)L_8);
		int32_t L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8);
		G_B7_0 = L_9;
	}

IL_0033:
	{
		V_1 = (float)(((float)((float)G_B7_0)));
		// if (indexes == null)
		RuntimeObject* L_10 = ___indexes2;
		if (L_10)
		{
			goto IL_005b;
		}
	}
	{
		// for (int i = 0; i < len; i++)
		V_2 = (int32_t)0;
		goto IL_0054;
	}

IL_003c:
	{
		// sum += selector(list[i]);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 * L_12 = ___selector1;
		RuntimeObject* L_13 = ___list0;
		int32_t L_14 = V_2;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_13, (int32_t)L_14);
		NullCheck((Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 *)L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 *)L_12, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_11, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_16, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_17;
		// for (int i = 0; i < len; i++)
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0054:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_19 = V_2;
		float L_20 = V_1;
		if ((((float)(((float)((float)L_19)))) < ((float)L_20)))
		{
			goto IL_003c;
		}
	}
	{
		// }
		goto IL_0082;
	}

IL_005b:
	{
		// for (int i = 0; i < len; i++)
		V_3 = (int32_t)0;
		goto IL_007d;
	}

IL_005f:
	{
		// sum += selector(list[indexes[i]]);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 * L_22 = ___selector1;
		RuntimeObject* L_23 = ___list0;
		RuntimeObject* L_24 = ___indexes2;
		int32_t L_25 = V_3;
		NullCheck((RuntimeObject*)L_24);
		int32_t L_26 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_t775DFC742169D06DA26DB18E9AB591BEB22B7504_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (int32_t)L_25);
		NullCheck((RuntimeObject*)L_23);
		RuntimeObject * L_27 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_23, (int32_t)L_26);
		NullCheck((Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 *)L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 *)L_22, (RuntimeObject *)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_21, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_28, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_29;
		// for (int i = 0; i < len; i++)
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_31 = V_3;
		float L_32 = V_1;
		if ((((float)(((float)((float)L_31)))) < ((float)L_32)))
		{
			goto IL_005f;
		}
	}

IL_0082:
	{
		// return sum / len;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		float L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_33, (float)L_34, /*hidden argument*/NULL);
		return (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_35;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
