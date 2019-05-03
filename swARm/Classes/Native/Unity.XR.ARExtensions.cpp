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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs>
struct Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>[]
struct EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>[]
struct EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>[]
struct EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>[]
struct EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>[]
struct EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>[]
struct EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>[]
struct EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>[]
struct EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>[]
struct EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,System.IntPtr>
struct Func_2_tCD6D7E3EA16DD0F2ABEE6DCFB218CC15BF43B5D9;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E;
// System.Func`3<System.Object,System.Int32Enum,System.Boolean>
struct Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>
struct Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t2ED96FCF00355A1F97D4CC70B00A6E3CAAF09DAE;
// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Experimental.XR.XRCameraSubsystem
struct XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701;
// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi
struct DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091;
// UnityEngine.XR.ARExtensions.DefaultCameraImageApi
struct DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB;
// UnityEngine.XR.ARExtensions.ICameraConfigApi
struct ICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA;
// UnityEngine.XR.ARExtensions.ICameraImageApi
struct ICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4;
// UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute
struct PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate
struct TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B;
IL2CPP_EXTERN_C String_t* _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_s_DefaultTrySetFocusMode_m2DB208A3F87181E835E90B9542C8410F024D70FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t TryGetColorCorrectionDelegate_BeginInvoke_m73D73992BB6E18B8DFB63D6C18D4157A709D98AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions__cctor_m47EFC68F40A72702D571E5C4DEECD26517D2923D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions__cctor_mD169C15F21790AB0F32A615B6ADBC6CEAD741CDD_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9235715C8404A6E9A7653F6E7FFDB5E36D9C2D95 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct  Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73* ___entries_1;
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
	KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___entries_1)); }
	inline EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___keys_7)); }
	inline KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___values_8)); }
	inline ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct  Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B* ___entries_1;
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
	KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___entries_1)); }
	inline EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___keys_7)); }
	inline KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___values_8)); }
	inline ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct  Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F* ___entries_1;
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
	KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___entries_1)); }
	inline EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___keys_7)); }
	inline KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___values_8)); }
	inline ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct  Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E* ___entries_1;
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
	KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___entries_1)); }
	inline EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___keys_7)); }
	inline KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___values_8)); }
	inline ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct  Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28* ___entries_1;
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
	KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___entries_1)); }
	inline EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___keys_7)); }
	inline KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___values_8)); }
	inline ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct  Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643* ___entries_1;
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
	KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___entries_1)); }
	inline EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___keys_7)); }
	inline KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___values_8)); }
	inline ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct  Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399* ___entries_1;
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
	KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___entries_1)); }
	inline EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___keys_7)); }
	inline KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___values_8)); }
	inline ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct  Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0* ___entries_1;
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
	KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___entries_1)); }
	inline EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___keys_7)); }
	inline KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___values_8)); }
	inline ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate>
struct  Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E* ___entries_1;
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
	KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___entries_1)); }
	inline EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___keys_7)); }
	inline KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___values_8)); }
	inline ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
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
	intptr_t* ___native_trace_ips_15;
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
	intptr_t* ___native_trace_ips_15;
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

// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi
struct  DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.DefaultCameraImageApi
struct  DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRCameraExtensions
struct  XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D  : public RuntimeObject
{
public:

public:
};

struct XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields
{
public:
	// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegate
	Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * ___s_IsPermissionGrantedDelegate_0;
	// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegate
	TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * ___s_TryGetColorCorrectionDelegate_1;
	// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_GetNativePtrDelegate
	Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * ___s_GetNativePtrDelegate_2;
	// UnityEngine.XR.ARExtensions.ICameraImageApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraImageApi
	RuntimeObject* ___s_CameraImageApi_3;
	// UnityEngine.XR.ARExtensions.DefaultCameraImageApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultCameraImageApi
	DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * ___s_DefaultCameraImageApi_4;
	// UnityEngine.XR.ARExtensions.ICameraConfigApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraConfigApi
	RuntimeObject* ___s_CameraConfigApi_5;
	// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultCameraConfigApi
	DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * ___s_DefaultCameraConfigApi_6;
	// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TrySetFocusModeDelegate
	Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * ___s_TrySetFocusModeDelegate_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegates
	Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * ___s_IsPermissionGrantedDelegates_8;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegates
	Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * ___s_TryGetColorCorrectionDelegates_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_GetNativePtrDelegates
	Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * ___s_GetNativePtrDelegates_10;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraImageApis
	Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * ___s_CameraImageApis_11;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraConfigApis
	Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * ___s_CameraConfigApis_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TrySetFocusModeDelegates
	Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * ___s_TrySetFocusModeDelegates_13;

public:
	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegate_0() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_IsPermissionGrantedDelegate_0)); }
	inline Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * get_s_IsPermissionGrantedDelegate_0() const { return ___s_IsPermissionGrantedDelegate_0; }
	inline Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 ** get_address_of_s_IsPermissionGrantedDelegate_0() { return &___s_IsPermissionGrantedDelegate_0; }
	inline void set_s_IsPermissionGrantedDelegate_0(Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * value)
	{
		___s_IsPermissionGrantedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsPermissionGrantedDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegate_1() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetColorCorrectionDelegate_1)); }
	inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * get_s_TryGetColorCorrectionDelegate_1() const { return ___s_TryGetColorCorrectionDelegate_1; }
	inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 ** get_address_of_s_TryGetColorCorrectionDelegate_1() { return &___s_TryGetColorCorrectionDelegate_1; }
	inline void set_s_TryGetColorCorrectionDelegate_1(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * value)
	{
		___s_TryGetColorCorrectionDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TryGetColorCorrectionDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_2() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_GetNativePtrDelegate_2)); }
	inline Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * get_s_GetNativePtrDelegate_2() const { return ___s_GetNativePtrDelegate_2; }
	inline Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E ** get_address_of_s_GetNativePtrDelegate_2() { return &___s_GetNativePtrDelegate_2; }
	inline void set_s_GetNativePtrDelegate_2(Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * value)
	{
		___s_GetNativePtrDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraImageApi_3() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraImageApi_3)); }
	inline RuntimeObject* get_s_CameraImageApi_3() const { return ___s_CameraImageApi_3; }
	inline RuntimeObject** get_address_of_s_CameraImageApi_3() { return &___s_CameraImageApi_3; }
	inline void set_s_CameraImageApi_3(RuntimeObject* value)
	{
		___s_CameraImageApi_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraImageApi_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultCameraImageApi_4() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_DefaultCameraImageApi_4)); }
	inline DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * get_s_DefaultCameraImageApi_4() const { return ___s_DefaultCameraImageApi_4; }
	inline DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB ** get_address_of_s_DefaultCameraImageApi_4() { return &___s_DefaultCameraImageApi_4; }
	inline void set_s_DefaultCameraImageApi_4(DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * value)
	{
		___s_DefaultCameraImageApi_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultCameraImageApi_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApi_5() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraConfigApi_5)); }
	inline RuntimeObject* get_s_CameraConfigApi_5() const { return ___s_CameraConfigApi_5; }
	inline RuntimeObject** get_address_of_s_CameraConfigApi_5() { return &___s_CameraConfigApi_5; }
	inline void set_s_CameraConfigApi_5(RuntimeObject* value)
	{
		___s_CameraConfigApi_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraConfigApi_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultCameraConfigApi_6() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_DefaultCameraConfigApi_6)); }
	inline DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * get_s_DefaultCameraConfigApi_6() const { return ___s_DefaultCameraConfigApi_6; }
	inline DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 ** get_address_of_s_DefaultCameraConfigApi_6() { return &___s_DefaultCameraConfigApi_6; }
	inline void set_s_DefaultCameraConfigApi_6(DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * value)
	{
		___s_DefaultCameraConfigApi_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultCameraConfigApi_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetFocusModeDelegate_7() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TrySetFocusModeDelegate_7)); }
	inline Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * get_s_TrySetFocusModeDelegate_7() const { return ___s_TrySetFocusModeDelegate_7; }
	inline Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 ** get_address_of_s_TrySetFocusModeDelegate_7() { return &___s_TrySetFocusModeDelegate_7; }
	inline void set_s_TrySetFocusModeDelegate_7(Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * value)
	{
		___s_TrySetFocusModeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetFocusModeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegates_8() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_IsPermissionGrantedDelegates_8)); }
	inline Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * get_s_IsPermissionGrantedDelegates_8() const { return ___s_IsPermissionGrantedDelegates_8; }
	inline Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 ** get_address_of_s_IsPermissionGrantedDelegates_8() { return &___s_IsPermissionGrantedDelegates_8; }
	inline void set_s_IsPermissionGrantedDelegates_8(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * value)
	{
		___s_IsPermissionGrantedDelegates_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsPermissionGrantedDelegates_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegates_9() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetColorCorrectionDelegates_9)); }
	inline Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * get_s_TryGetColorCorrectionDelegates_9() const { return ___s_TryGetColorCorrectionDelegates_9; }
	inline Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 ** get_address_of_s_TryGetColorCorrectionDelegates_9() { return &___s_TryGetColorCorrectionDelegates_9; }
	inline void set_s_TryGetColorCorrectionDelegates_9(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * value)
	{
		___s_TryGetColorCorrectionDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TryGetColorCorrectionDelegates_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_10() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_GetNativePtrDelegates_10)); }
	inline Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * get_s_GetNativePtrDelegates_10() const { return ___s_GetNativePtrDelegates_10; }
	inline Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 ** get_address_of_s_GetNativePtrDelegates_10() { return &___s_GetNativePtrDelegates_10; }
	inline void set_s_GetNativePtrDelegates_10(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * value)
	{
		___s_GetNativePtrDelegates_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegates_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraImageApis_11() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraImageApis_11)); }
	inline Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * get_s_CameraImageApis_11() const { return ___s_CameraImageApis_11; }
	inline Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C ** get_address_of_s_CameraImageApis_11() { return &___s_CameraImageApis_11; }
	inline void set_s_CameraImageApis_11(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * value)
	{
		___s_CameraImageApis_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraImageApis_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApis_12() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraConfigApis_12)); }
	inline Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * get_s_CameraConfigApis_12() const { return ___s_CameraConfigApis_12; }
	inline Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E ** get_address_of_s_CameraConfigApis_12() { return &___s_CameraConfigApis_12; }
	inline void set_s_CameraConfigApis_12(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * value)
	{
		___s_CameraConfigApis_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraConfigApis_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetFocusModeDelegates_13() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TrySetFocusModeDelegates_13)); }
	inline Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * get_s_TrySetFocusModeDelegates_13() const { return ___s_TrySetFocusModeDelegates_13; }
	inline Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 ** get_address_of_s_TrySetFocusModeDelegates_13() { return &___s_TrySetFocusModeDelegates_13; }
	inline void set_s_TrySetFocusModeDelegates_13(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * value)
	{
		___s_TrySetFocusModeDelegates_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetFocusModeDelegates_13), (void*)value);
	}
};


// UnityEngine.XR.ARExtensions.XRPlaneExtensions
struct  XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE  : public RuntimeObject
{
public:

public:
};

struct XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields
{
public:
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetNativePtrDelegate
	Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * ___s_GetNativePtrDelegate_0;
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegate
	Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * ___s_GetTrackingStateDelegate_1;
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_TrySetPlaneDetectionFlagsDelegate
	Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * ___s_TrySetPlaneDetectionFlagsDelegate_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetNativePtrDelegates
	Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * ___s_GetNativePtrDelegates_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegates
	Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * ___s_GetTrackingStateDelegates_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_TrySetPlaneDetectionFlagsDelegates
	Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * ___s_TrySetPlaneDetectionFlagsDelegates_5;

public:
	inline static int32_t get_offset_of_s_GetNativePtrDelegate_0() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetNativePtrDelegate_0)); }
	inline Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * get_s_GetNativePtrDelegate_0() const { return ___s_GetNativePtrDelegate_0; }
	inline Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 ** get_address_of_s_GetNativePtrDelegate_0() { return &___s_GetNativePtrDelegate_0; }
	inline void set_s_GetNativePtrDelegate_0(Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * value)
	{
		___s_GetNativePtrDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetTrackingStateDelegate_1() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetTrackingStateDelegate_1)); }
	inline Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * get_s_GetTrackingStateDelegate_1() const { return ___s_GetTrackingStateDelegate_1; }
	inline Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 ** get_address_of_s_GetTrackingStateDelegate_1() { return &___s_GetTrackingStateDelegate_1; }
	inline void set_s_GetTrackingStateDelegate_1(Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * value)
	{
		___s_GetTrackingStateDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetTrackingStateDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetPlaneDetectionFlagsDelegate_2() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_TrySetPlaneDetectionFlagsDelegate_2)); }
	inline Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * get_s_TrySetPlaneDetectionFlagsDelegate_2() const { return ___s_TrySetPlaneDetectionFlagsDelegate_2; }
	inline Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 ** get_address_of_s_TrySetPlaneDetectionFlagsDelegate_2() { return &___s_TrySetPlaneDetectionFlagsDelegate_2; }
	inline void set_s_TrySetPlaneDetectionFlagsDelegate_2(Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * value)
	{
		___s_TrySetPlaneDetectionFlagsDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetPlaneDetectionFlagsDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_3() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetNativePtrDelegates_3)); }
	inline Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * get_s_GetNativePtrDelegates_3() const { return ___s_GetNativePtrDelegates_3; }
	inline Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 ** get_address_of_s_GetNativePtrDelegates_3() { return &___s_GetNativePtrDelegates_3; }
	inline void set_s_GetNativePtrDelegates_3(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * value)
	{
		___s_GetNativePtrDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegates_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetTrackingStateDelegates_4() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetTrackingStateDelegates_4)); }
	inline Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * get_s_GetTrackingStateDelegates_4() const { return ___s_GetTrackingStateDelegates_4; }
	inline Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 ** get_address_of_s_GetTrackingStateDelegates_4() { return &___s_GetTrackingStateDelegates_4; }
	inline void set_s_GetTrackingStateDelegates_4(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * value)
	{
		___s_GetTrackingStateDelegates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetTrackingStateDelegates_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetPlaneDetectionFlagsDelegates_5() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_TrySetPlaneDetectionFlagsDelegates_5)); }
	inline Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * get_s_TrySetPlaneDetectionFlagsDelegates_5() const { return ___s_TrySetPlaneDetectionFlagsDelegates_5; }
	inline Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C ** get_address_of_s_TrySetPlaneDetectionFlagsDelegates_5() { return &___s_TrySetPlaneDetectionFlagsDelegates_5; }
	inline void set_s_TrySetPlaneDetectionFlagsDelegates_5(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * value)
	{
		___s_TrySetPlaneDetectionFlagsDelegates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetPlaneDetectionFlagsDelegates_5), (void*)value);
	}
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


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
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


// UnityEngine.Experimental.IntegratedSubsystem
struct  IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.Experimental.XR.TrackingState
struct  TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARExtensions.CameraFocusMode
struct  CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARExtensions.PlaneDetectionFlags
struct  PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.PlaneDetectionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute
struct  PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
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

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct  IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};


// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct  IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct  Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct  Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct  Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct  Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct  Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.XR.XRCameraSubsystem
struct  XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701  : public IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs> UnityEngine.Experimental.XR.XRCameraSubsystem::FrameReceived
	Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * ___FrameReceived_2;

public:
	inline static int32_t get_offset_of_FrameReceived_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701, ___FrameReceived_2)); }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * get_FrameReceived_2() const { return ___FrameReceived_2; }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC ** get_address_of_FrameReceived_2() { return &___FrameReceived_2; }
	inline void set_FrameReceived_2(Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * value)
	{
		___FrameReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameReceived_2), (void*)value);
	}
};


// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct  XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B  : public IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneAdded
	Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneUpdated
	Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneRemoved
	Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneAdded_2)); }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaneAdded_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneUpdated_3)); }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaneUpdated_3), (void*)value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneRemoved_4)); }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaneRemoved_4), (void*)value);
	}
};


// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate
struct  TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !2 System.Func`3<System.Object,System.Int32Enum,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_3_Invoke_m7299FB22FA16D95EA643F867696DC426D85D0D1F_gshared (Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared (Func_2_tCD6D7E3EA16DD0F2ABEE6DCFB218CC15BF43B5D9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Int32Enum,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared (Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m56CE242158733ED78293917AD88F2F7137EFC7F5_gshared (Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9 * __this, RuntimeObject * p0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared (Func_3_t2ED96FCF00355A1F97D4CC70B00A6E3CAAF09DAE * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7C29B75E27025AC6E14AB16448A6199CAAA9F525_gshared (Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// !2 System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5 (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, int32_t, const RuntimeMethod*))Func_3_Invoke_m7299FB22FA16D95EA643F867696DC426D85D0D1F_gshared)(__this, p0, p1, method);
}
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837 (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared)(__this, p0, p1, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149 (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0 (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>::.ctor()
inline void Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>::.ctor()
inline void Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8 (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>::.ctor()
inline void Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7 (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraImageApi__ctor_m391671B14DB15876DF5F47A03DFF5235B529D5BF (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraConfigApi__ctor_m59C8FA485ECEE299E8A62F60B7ACF7DA3C8ED834 (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63 (const RuntimeMethod* method);
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::Invoke(!0,!1)
inline int32_t Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * __this, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * p0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  p1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , const RuntimeMethod*))Func_3_Invoke_m56CE242158733ED78293917AD88F2F7137EFC7F5_gshared)(__this, p0, p1, method);
}
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * __this, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B *, int32_t, const RuntimeMethod*))Func_3_Invoke_m7299FB22FA16D95EA643F867696DC426D85D0D1F_gshared)(__this, p0, p1, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared)(__this, p0, p1, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779 (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m7C29B75E27025AC6E14AB16448A6199CAAA9F525_gshared)(__this, p0, p1, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::.ctor()
inline void Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54 (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6 (const RuntimeMethod* method);
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
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraConfigApi__ctor_m59C8FA485ECEE299E8A62F60B7ACF7DA3C8ED834 (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraImageApi__ctor_m391671B14DB15876DF5F47A03DFF5235B529D5BF (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionFlagsMaskAttribute__ctor_m7C05D88B71F94DD80941F16B854E0BA2C2B83047 (PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::TrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_2 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegate_7();
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_3 = ___cameraSubsystem0;
		int32_t L_4 = ___mode1;
		NullCheck(L_2);
		bool L_5 = Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultIsPermissionGranted(UnityEngine.Experimental.XR.XRCameraSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTryGetColorCorrection(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_0 = ___color1;
		il2cpp_codegen_initobj(L_0, sizeof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 ));
		return (bool)0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRCameraSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultTrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_s_DefaultTrySetFocusMode_m2DB208A3F87181E835E90B9542C8410F024D70FF (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * L_0 = (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *)il2cpp_codegen_object_new(Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var);
		Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C(L_0, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegate_0(L_0);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_1 = (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *)il2cpp_codegen_object_new(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33(L_1, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171_RuntimeMethod_var), /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegate_1(L_1);
		Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * L_2 = (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *)il2cpp_codegen_object_new(Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var);
		Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837(L_2, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_2);
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_3 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraImageApi_4();
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApi_3(L_3);
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_4 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraConfigApi_6();
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApi_5(L_4);
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_5 = (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *)il2cpp_codegen_object_new(Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var);
		Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149(L_5, NULL, (intptr_t)((intptr_t)XRCameraExtensions_s_DefaultTrySetFocusMode_m2DB208A3F87181E835E90B9542C8410F024D70FF_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegate_7(L_5);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions__cctor_m47EFC68F40A72702D571E5C4DEECD26517D2923D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions__cctor_m47EFC68F40A72702D571E5C4DEECD26517D2923D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * L_0 = (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 *)il2cpp_codegen_object_new(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0(L_0, /*hidden argument*/Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegates_8(L_0);
		Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * L_1 = (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 *)il2cpp_codegen_object_new(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB(L_1, /*hidden argument*/Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegates_9(L_1);
		Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * L_2 = (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 *)il2cpp_codegen_object_new(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB(L_2, /*hidden argument*/Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_10(L_2);
		Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * L_3 = (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C *)il2cpp_codegen_object_new(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8(L_3, /*hidden argument*/Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApis_11(L_3);
		Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * L_4 = (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E *)il2cpp_codegen_object_new(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7(L_4, /*hidden argument*/Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApis_12(L_4);
		Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * L_5 = (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 *)il2cpp_codegen_object_new(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F(L_5, /*hidden argument*/Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegates_13(L_5);
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_6 = (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB *)il2cpp_codegen_object_new(DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB_il2cpp_TypeInfo_var);
		DefaultCameraImageApi__ctor_m391671B14DB15876DF5F47A03DFF5235B529D5BF(L_6, /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_DefaultCameraImageApi_4(L_6);
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_7 = (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 *)il2cpp_codegen_object_new(DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091_il2cpp_TypeInfo_var);
		DefaultCameraConfigApi__ctor_m59C8FA485ECEE299E8A62F60B7ACF7DA3C8ED834(L_7, /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_DefaultCameraConfigApi_6(L_7);
		XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_mD6C0366FB0745ED1F21875DBA300B7162EAB6DC3 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
					else
						result = GenericVirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___color1);
					else
						result = VirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___color1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
					else
						result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
					else
						result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetColorCorrectionDelegate_BeginInvoke_m73D73992BB6E18B8DFB63D6C18D4157A709D98AA (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TryGetColorCorrectionDelegate_BeginInvoke_m73D73992BB6E18B8DFB63D6C18D4157A709D98AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___cameraSubsystems0;
	__d_args[1] = Box(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var, &*___color1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::EndInvoke(UnityEngine.ColorU26,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_EndInvoke_mB92BFC3B9D3C4E8738EBC1AC590BB930F6482882 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___color0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::GetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_2 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegate_1();
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_3 = ___planeSubsystem0;
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_4 = ___planeId1;
		NullCheck(L_2);
		int32_t L_5 = Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA_RuntimeMethod_var);
		return L_5;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultGetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRPlaneExtensions::TrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_2 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegate_2();
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_3 = ___planeSubsystem0;
		int32_t L_4 = ___flags1;
		NullCheck(L_2);
		bool L_5 = Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultTrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * L_0 = (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *)il2cpp_codegen_object_new(Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var);
		Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E(L_0, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_0(L_0);
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_1 = (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *)il2cpp_codegen_object_new(Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var);
		Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779(L_1, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegate_1(L_1);
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_2 = (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *)il2cpp_codegen_object_new(Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var);
		Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB(L_2, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions__cctor_mD169C15F21790AB0F32A615B6ADBC6CEAD741CDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions__cctor_mD169C15F21790AB0F32A615B6ADBC6CEAD741CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * L_0 = (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 *)il2cpp_codegen_object_new(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B(L_0, /*hidden argument*/Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_3(L_0);
		Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * L_1 = (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 *)il2cpp_codegen_object_new(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54(L_1, /*hidden argument*/Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegates_4(L_1);
		Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * L_2 = (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C *)il2cpp_codegen_object_new(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D(L_2, /*hidden argument*/Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegates_5(L_2);
		XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
