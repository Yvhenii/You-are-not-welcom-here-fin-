﻿#include "il2cpp-config.h"

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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD;
// CinemachineMixer/MasterDirectorDelegate
struct MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6;
// CinemachineRecomposer
struct CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD;
// CinemachineShot
struct CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5;
// CinemachineShotPlayable
struct CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE;
// CinemachineTouchInputMapper
struct CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815;
// CinemachineTrack
struct CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D;
// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280;
// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t5E4794B9C0140D35E865840CCDBFC9FEF5E3EFB9;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_t716BB6257535844909D08C5849BF25BEFAB51AC1;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5;
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsCinemachine[];
IL2CPP_EXTERN_C RuntimeClass* AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42;
IL2CPP_EXTERN_C String_t* _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6;
IL2CPP_EXTERN_C String_t* _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0;
IL2CPP_EXTERN_C String_t* _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB;
IL2CPP_EXTERN_C const RuntimeMethod* CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6Cinemachine5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623Cinemachine5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809BCinemachine5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8Cinemachine5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9Cinemachine5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937Cinemachine5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12Cinemachine5_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01  : public RuntimeObject
{
public:

public:
};


// Cinemachine.CameraState_CustomBlendable
struct  CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 
{
public:
	// UnityEngine.Object Cinemachine.CameraState_CustomBlendable::m_Custom
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Custom_0;
	// System.Single Cinemachine.CameraState_CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Custom_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// CinemachineShotPlayable
struct  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineVirtualCameraBase CinemachineShotPlayable::VirtualCamera
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___VirtualCamera_0;

public:
	inline static int32_t get_offset_of_VirtualCamera_0() { return static_cast<int32_t>(offsetof(CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE, ___VirtualCamera_0)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_VirtualCamera_0() const { return ___VirtualCamera_0; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_VirtualCamera_0() { return &___VirtualCamera_0; }
	inline void set_VirtualCamera_0(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___VirtualCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualCamera_0), (void*)value);
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___kMaxTime_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct  MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Objects_0)); }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Cache_1)); }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_pinvoke
{
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_com
{
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Timeline.TrackAsset_TransientBuildData
struct  TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset_TransientBuildData::trackList
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset_TransientBuildData::clipList
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset_TransientBuildData::markerList
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___trackList_0)); }
	inline List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___clipList_1)); }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___markerList_2)); }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_pinvoke
{
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_com
{
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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


// Cinemachine.CameraState_BlendHintValue
struct  BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52 
{
public:
	// System.Int32 Cinemachine.CameraState_BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore_Stage
struct  Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF 
{
public:
	// System.Int32 Cinemachine.CinemachineCore_Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore_UpdateFilter
struct  UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2 
{
public:
	// System.Int32 Cinemachine.CinemachineCore_UpdateFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode
struct  StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.LensSettings
struct  LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::<SensorSize>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_7;
	// System.Boolean Cinemachine.LensSettings::<IsPhysicalCamera>k__BackingField
	bool ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSensorSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3CSensorSizeU3Ek__BackingField_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CSensorSizeU3Ek__BackingField_7() const { return ___U3CSensorSizeU3Ek__BackingField_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CSensorSizeU3Ek__BackingField_7() { return &___U3CSensorSizeU3Ek__BackingField_7; }
	inline void set_U3CSensorSizeU3Ek__BackingField_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CSensorSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3CIsPhysicalCameraU3Ek__BackingField_8)); }
	inline bool get_U3CIsPhysicalCameraU3Ek__BackingField_8() const { return ___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return &___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline void set_U3CIsPhysicalCameraU3Ek__BackingField_8(bool value)
	{
		___U3CIsPhysicalCameraU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_LensShift_9() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___LensShift_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_LensShift_9() const { return ___LensShift_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_LensShift_9() { return &___LensShift_9; }
	inline void set_LensShift_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___LensShift_9 = value;
	}
};

struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields, ___Default_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;
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

// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>
struct  ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};


// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
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

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState
struct  CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState_BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState_CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom0_11)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom1_12)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom2_13)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom3_14)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___m_CustomOverflow_15)); }
	inline List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields, ___kNoPoint_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_pinvoke
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_com
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Cinemachine.CinemachineCore
struct  CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * ___mActiveBrains_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * ___mActiveCameras_11;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * ___mAllCameras_12;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___mRoundRobinVcamLastFrame_13;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * ___mUpdateStatus_16;
	// Cinemachine.CinemachineCore_UpdateFilter Cinemachine.CinemachineCore::<CurrentUpdateFilter>k__BackingField
	int32_t ___U3CCurrentUpdateFilterU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_mActiveBrains_10() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveBrains_10)); }
	inline List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * get_mActiveBrains_10() const { return ___mActiveBrains_10; }
	inline List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D ** get_address_of_mActiveBrains_10() { return &___mActiveBrains_10; }
	inline void set_mActiveBrains_10(List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * value)
	{
		___mActiveBrains_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveBrains_10), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameras_11() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveCameras_11)); }
	inline List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * get_mActiveCameras_11() const { return ___mActiveCameras_11; }
	inline List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF ** get_address_of_mActiveCameras_11() { return &___mActiveCameras_11; }
	inline void set_mActiveCameras_11(List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * value)
	{
		___mActiveCameras_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameras_11), (void*)value);
	}

	inline static int32_t get_offset_of_mAllCameras_12() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mAllCameras_12)); }
	inline List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * get_mAllCameras_12() const { return ___mAllCameras_12; }
	inline List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 ** get_address_of_mAllCameras_12() { return &___mAllCameras_12; }
	inline void set_mAllCameras_12(List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * value)
	{
		___mAllCameras_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAllCameras_12), (void*)value);
	}

	inline static int32_t get_offset_of_mRoundRobinVcamLastFrame_13() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mRoundRobinVcamLastFrame_13)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_mRoundRobinVcamLastFrame_13() const { return ___mRoundRobinVcamLastFrame_13; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_mRoundRobinVcamLastFrame_13() { return &___mRoundRobinVcamLastFrame_13; }
	inline void set_mRoundRobinVcamLastFrame_13(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___mRoundRobinVcamLastFrame_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRoundRobinVcamLastFrame_13), (void*)value);
	}

	inline static int32_t get_offset_of_mUpdateStatus_16() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mUpdateStatus_16)); }
	inline Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * get_mUpdateStatus_16() const { return ___mUpdateStatus_16; }
	inline Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 ** get_address_of_mUpdateStatus_16() { return &___mUpdateStatus_16; }
	inline void set_mUpdateStatus_16(Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * value)
	{
		___mUpdateStatus_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpdateStatus_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentUpdateFilterU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___U3CCurrentUpdateFilterU3Ek__BackingField_17)); }
	inline int32_t get_U3CCurrentUpdateFilterU3Ek__BackingField_17() const { return ___U3CCurrentUpdateFilterU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CCurrentUpdateFilterU3Ek__BackingField_17() { return &___U3CCurrentUpdateFilterU3Ek__BackingField_17; }
	inline void set_U3CCurrentUpdateFilterU3Ek__BackingField_17(int32_t value)
	{
		___U3CCurrentUpdateFilterU3Ek__BackingField_17 = value;
	}
};

struct CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields
{
public:
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore_AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * ___GetInputAxis_4;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_5;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_6;
	// Cinemachine.CinemachineCore_GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * ___GetBlendOverride_7;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraUpdatedEvent_8;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraCutEvent_9;
	// System.Single Cinemachine.CinemachineCore::mLastUpdateTime
	float ___mLastUpdateTime_14;
	// System.Int32 Cinemachine.CinemachineCore::<FixedFrameCount>k__BackingField
	int32_t ___U3CFixedFrameCountU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_kStreamingVersion_0() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kStreamingVersion_0)); }
	inline int32_t get_kStreamingVersion_0() const { return ___kStreamingVersion_0; }
	inline int32_t* get_address_of_kStreamingVersion_0() { return &___kStreamingVersion_0; }
	inline void set_kStreamingVersion_0(int32_t value)
	{
		___kStreamingVersion_0 = value;
	}

	inline static int32_t get_offset_of_kVersionString_1() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kVersionString_1)); }
	inline String_t* get_kVersionString_1() const { return ___kVersionString_1; }
	inline String_t** get_address_of_kVersionString_1() { return &___kVersionString_1; }
	inline void set_kVersionString_1(String_t* value)
	{
		___kVersionString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kVersionString_1), (void*)value);
	}

	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sInstance_2)); }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * get_sInstance_2() const { return ___sInstance_2; }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_2), (void*)value);
	}

	inline static int32_t get_offset_of_sShowHiddenObjects_3() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sShowHiddenObjects_3)); }
	inline bool get_sShowHiddenObjects_3() const { return ___sShowHiddenObjects_3; }
	inline bool* get_address_of_sShowHiddenObjects_3() { return &___sShowHiddenObjects_3; }
	inline void set_sShowHiddenObjects_3(bool value)
	{
		___sShowHiddenObjects_3 = value;
	}

	inline static int32_t get_offset_of_GetInputAxis_4() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetInputAxis_4)); }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * get_GetInputAxis_4() const { return ___GetInputAxis_4; }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE ** get_address_of_GetInputAxis_4() { return &___GetInputAxis_4; }
	inline void set_GetInputAxis_4(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * value)
	{
		___GetInputAxis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetInputAxis_4), (void*)value);
	}

	inline static int32_t get_offset_of_UniformDeltaTimeOverride_5() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___UniformDeltaTimeOverride_5)); }
	inline float get_UniformDeltaTimeOverride_5() const { return ___UniformDeltaTimeOverride_5; }
	inline float* get_address_of_UniformDeltaTimeOverride_5() { return &___UniformDeltaTimeOverride_5; }
	inline void set_UniformDeltaTimeOverride_5(float value)
	{
		___UniformDeltaTimeOverride_5 = value;
	}

	inline static int32_t get_offset_of_CurrentTimeOverride_6() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CurrentTimeOverride_6)); }
	inline float get_CurrentTimeOverride_6() const { return ___CurrentTimeOverride_6; }
	inline float* get_address_of_CurrentTimeOverride_6() { return &___CurrentTimeOverride_6; }
	inline void set_CurrentTimeOverride_6(float value)
	{
		___CurrentTimeOverride_6 = value;
	}

	inline static int32_t get_offset_of_GetBlendOverride_7() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetBlendOverride_7)); }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * get_GetBlendOverride_7() const { return ___GetBlendOverride_7; }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 ** get_address_of_GetBlendOverride_7() { return &___GetBlendOverride_7; }
	inline void set_GetBlendOverride_7(GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * value)
	{
		___GetBlendOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetBlendOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraUpdatedEvent_8() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraUpdatedEvent_8)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraUpdatedEvent_8() const { return ___CameraUpdatedEvent_8; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraUpdatedEvent_8() { return &___CameraUpdatedEvent_8; }
	inline void set_CameraUpdatedEvent_8(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraUpdatedEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_CameraCutEvent_9() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraCutEvent_9)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraCutEvent_9() const { return ___CameraCutEvent_9; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraCutEvent_9() { return &___CameraCutEvent_9; }
	inline void set_CameraCutEvent_9(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraCutEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraCutEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_mLastUpdateTime_14() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___mLastUpdateTime_14)); }
	inline float get_mLastUpdateTime_14() const { return ___mLastUpdateTime_14; }
	inline float* get_address_of_mLastUpdateTime_14() { return &___mLastUpdateTime_14; }
	inline void set_mLastUpdateTime_14(float value)
	{
		___mLastUpdateTime_14 = value;
	}

	inline static int32_t get_offset_of_U3CFixedFrameCountU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___U3CFixedFrameCountU3Ek__BackingField_15)); }
	inline int32_t get_U3CFixedFrameCountU3Ek__BackingField_15() const { return ___U3CFixedFrameCountU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CFixedFrameCountU3Ek__BackingField_15() { return &___U3CFixedFrameCountU3Ek__BackingField_15; }
	inline void set_U3CFixedFrameCountU3Ek__BackingField_15(int32_t value)
	{
		___U3CFixedFrameCountU3Ek__BackingField_15 = value;
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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>
struct  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>
struct  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Touch
struct  Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// Cinemachine.CinemachineCore_AxisInputDelegate
struct  AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE  : public MulticastDelegate_t
{
public:

public:
};


// CinemachineMixer_MasterDirectorDelegate
struct  MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// CinemachineShot
struct  CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.String CinemachineShot::DisplayName
	String_t* ___DisplayName_4;
	// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase> CinemachineShot::VirtualCamera
	ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  ___VirtualCamera_5;

public:
	inline static int32_t get_offset_of_DisplayName_4() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___DisplayName_4)); }
	inline String_t* get_DisplayName_4() const { return ___DisplayName_4; }
	inline String_t** get_address_of_DisplayName_4() { return &___DisplayName_4; }
	inline void set_DisplayName_4(String_t* value)
	{
		___DisplayName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_4), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualCamera_5() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___VirtualCamera_5)); }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  get_VirtualCamera_5() const { return ___VirtualCamera_5; }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * get_address_of_VirtualCamera_5() { return &___VirtualCamera_5; }
	inline void set_VirtualCamera_5(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  value)
	{
		___VirtualCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VirtualCamera_5))->___defaultValue_1), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct  PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___played_4)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_played_4() const { return ___played_4; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___paused_5)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_paused_5() const { return ___paused_5; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___stopped_6)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_AnimClip_6)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Curves_14)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Parent_15)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Children_16)); }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Start_19)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_End_20)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Clips_26)); }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Markers_27)); }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset_TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// Cinemachine.CinemachineExtension
struct  CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * ___mExtraState_6;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mExtraState_6() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___mExtraState_6)); }
	inline Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * get_mExtraState_6() const { return ___mExtraState_6; }
	inline Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 ** get_address_of_mExtraState_6() { return &___mExtraState_6; }
	inline void set_mExtraState_6(Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * value)
	{
		___mExtraState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtraState_6), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore_Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_11;
	// Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_12;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::mExtensions
	List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * ___mExtensions_13;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_16;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_parentVcam_17;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_18;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CFollowTargetAttachmentU3Ek__BackingField_10)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_10() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_10(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CLookAtTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_11() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StandbyUpdate_12)); }
	inline int32_t get_m_StandbyUpdate_12() const { return ___m_StandbyUpdate_12; }
	inline int32_t* get_address_of_m_StandbyUpdate_12() { return &___m_StandbyUpdate_12; }
	inline void set_m_StandbyUpdate_12(int32_t value)
	{
		___m_StandbyUpdate_12 = value;
	}

	inline static int32_t get_offset_of_mExtensions_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mExtensions_13)); }
	inline List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * get_mExtensions_13() const { return ___mExtensions_13; }
	inline List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E ** get_address_of_mExtensions_13() { return &___mExtensions_13; }
	inline void set_mExtensions_13(List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * value)
	{
		___mExtensions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtensions_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CPreviousStateIsValidU3Ek__BackingField_14)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_14() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return &___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_14(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_WasStarted_15)); }
	inline bool get_m_WasStarted_15() const { return ___m_WasStarted_15; }
	inline bool* get_address_of_m_WasStarted_15() { return &___m_WasStarted_15; }
	inline void set_m_WasStarted_15(bool value)
	{
		___m_WasStarted_15 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mSlaveStatusUpdated_16)); }
	inline bool get_mSlaveStatusUpdated_16() const { return ___mSlaveStatusUpdated_16; }
	inline bool* get_address_of_mSlaveStatusUpdated_16() { return &___mSlaveStatusUpdated_16; }
	inline void set_mSlaveStatusUpdated_16(bool value)
	{
		___mSlaveStatusUpdated_16 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_parentVcam_17)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_parentVcam_17() const { return ___m_parentVcam_17; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_parentVcam_17() { return &___m_parentVcam_17; }
	inline void set_m_parentVcam_17(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_parentVcam_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_QueuePriority_18)); }
	inline int32_t get_m_QueuePriority_18() const { return ___m_QueuePriority_18; }
	inline int32_t* get_address_of_m_QueuePriority_18() { return &___m_QueuePriority_18; }
	inline void set_m_QueuePriority_18(int32_t value)
	{
		___m_QueuePriority_18 = value;
	}
};


// CinemachineTouchInputMapper
struct  CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single CinemachineTouchInputMapper::TouchSensitivityX
	float ___TouchSensitivityX_4;
	// System.Single CinemachineTouchInputMapper::TouchSensitivityY
	float ___TouchSensitivityY_5;
	// System.String CinemachineTouchInputMapper::TouchXInputMapTo
	String_t* ___TouchXInputMapTo_6;
	// System.String CinemachineTouchInputMapper::TouchYInputMapTo
	String_t* ___TouchYInputMapTo_7;

public:
	inline static int32_t get_offset_of_TouchSensitivityX_4() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityX_4)); }
	inline float get_TouchSensitivityX_4() const { return ___TouchSensitivityX_4; }
	inline float* get_address_of_TouchSensitivityX_4() { return &___TouchSensitivityX_4; }
	inline void set_TouchSensitivityX_4(float value)
	{
		___TouchSensitivityX_4 = value;
	}

	inline static int32_t get_offset_of_TouchSensitivityY_5() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityY_5)); }
	inline float get_TouchSensitivityY_5() const { return ___TouchSensitivityY_5; }
	inline float* get_address_of_TouchSensitivityY_5() { return &___TouchSensitivityY_5; }
	inline void set_TouchSensitivityY_5(float value)
	{
		___TouchSensitivityY_5 = value;
	}

	inline static int32_t get_offset_of_TouchXInputMapTo_6() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchXInputMapTo_6)); }
	inline String_t* get_TouchXInputMapTo_6() const { return ___TouchXInputMapTo_6; }
	inline String_t** get_address_of_TouchXInputMapTo_6() { return &___TouchXInputMapTo_6; }
	inline void set_TouchXInputMapTo_6(String_t* value)
	{
		___TouchXInputMapTo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchXInputMapTo_6), (void*)value);
	}

	inline static int32_t get_offset_of_TouchYInputMapTo_7() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchYInputMapTo_7)); }
	inline String_t* get_TouchYInputMapTo_7() const { return ___TouchYInputMapTo_7; }
	inline String_t** get_address_of_TouchYInputMapTo_7() { return &___TouchYInputMapTo_7; }
	inline void set_TouchYInputMapTo_7(String_t* value)
	{
		___TouchYInputMapTo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchYInputMapTo_7), (void*)value);
	}
};


// CinemachineTrack
struct  CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D  : public TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D
{
public:

public:
};


// CinemachineRecomposer
struct  CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD  : public CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE
{
public:
	// Cinemachine.CinemachineCore_Stage CinemachineRecomposer::m_ApplyAfter
	int32_t ___m_ApplyAfter_7;
	// System.Single CinemachineRecomposer::m_Tilt
	float ___m_Tilt_8;
	// System.Single CinemachineRecomposer::m_Pan
	float ___m_Pan_9;
	// System.Single CinemachineRecomposer::m_Dutch
	float ___m_Dutch_10;
	// System.Single CinemachineRecomposer::m_ZoomScale
	float ___m_ZoomScale_11;
	// System.Single CinemachineRecomposer::m_FollowAttachment
	float ___m_FollowAttachment_12;
	// System.Single CinemachineRecomposer::m_LookAtAttachment
	float ___m_LookAtAttachment_13;

public:
	inline static int32_t get_offset_of_m_ApplyAfter_7() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_ApplyAfter_7)); }
	inline int32_t get_m_ApplyAfter_7() const { return ___m_ApplyAfter_7; }
	inline int32_t* get_address_of_m_ApplyAfter_7() { return &___m_ApplyAfter_7; }
	inline void set_m_ApplyAfter_7(int32_t value)
	{
		___m_ApplyAfter_7 = value;
	}

	inline static int32_t get_offset_of_m_Tilt_8() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Tilt_8)); }
	inline float get_m_Tilt_8() const { return ___m_Tilt_8; }
	inline float* get_address_of_m_Tilt_8() { return &___m_Tilt_8; }
	inline void set_m_Tilt_8(float value)
	{
		___m_Tilt_8 = value;
	}

	inline static int32_t get_offset_of_m_Pan_9() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Pan_9)); }
	inline float get_m_Pan_9() const { return ___m_Pan_9; }
	inline float* get_address_of_m_Pan_9() { return &___m_Pan_9; }
	inline void set_m_Pan_9(float value)
	{
		___m_Pan_9 = value;
	}

	inline static int32_t get_offset_of_m_Dutch_10() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Dutch_10)); }
	inline float get_m_Dutch_10() const { return ___m_Dutch_10; }
	inline float* get_address_of_m_Dutch_10() { return &___m_Dutch_10; }
	inline void set_m_Dutch_10(float value)
	{
		___m_Dutch_10 = value;
	}

	inline static int32_t get_offset_of_m_ZoomScale_11() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_ZoomScale_11)); }
	inline float get_m_ZoomScale_11() const { return ___m_ZoomScale_11; }
	inline float* get_address_of_m_ZoomScale_11() { return &___m_ZoomScale_11; }
	inline void set_m_ZoomScale_11(float value)
	{
		___m_ZoomScale_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowAttachment_12() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_FollowAttachment_12)); }
	inline float get_m_FollowAttachment_12() const { return ___m_FollowAttachment_12; }
	inline float* get_address_of_m_FollowAttachment_12() { return &___m_FollowAttachment_12; }
	inline void set_m_FollowAttachment_12(float value)
	{
		___m_FollowAttachment_12 = value;
	}

	inline static int32_t get_offset_of_m_LookAtAttachment_13() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_LookAtAttachment_13)); }
	inline float get_m_LookAtAttachment_13() const { return ___m_LookAtAttachment_13; }
	inline float* get_address_of_m_LookAtAttachment_13() { return &___m_LookAtAttachment_13; }
	inline void set_m_LookAtAttachment_13(float value)
	{
		___m_LookAtAttachment_13 = value;
	}
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  m_Items[1];

public:
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		m_Items[index] = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// !0 UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m18F5C11A92B96501B55054208E95985D5C72F9B4_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C * __this, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_mBBA492F672C2CF69CFA8999F11C1FBD967AFFD1F_gshared (ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m2774559EFF46341FD237D613631323E3DEC292C4_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, int32_t ___value1, const RuntimeMethod* method);

// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_FollowTargetAttachment(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAtTargetAttachment(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method);
// Cinemachine.LensSettings Cinemachine.CameraState::get_Lens()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_RawOrientation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_ReferenceUp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_CorrectedOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_CorrectedOrientation_m34E9DD430137D2B017C560027AF7B3632B2A3DAC (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_OrientationCorrection(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_Lens(Cinemachine.LensSettings)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC (CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared)(___graph0, ___inputCount1, method);
}
// !0 UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::GetBehaviour()
inline CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8 (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * __this, const RuntimeMethod* method)
{
	return ((  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m18F5C11A92B96501B55054208E95985D5C72F9B4_gshared)(__this, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>::Resolve(UnityEngine.IExposedPropertyTable)
inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74 (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * (*) (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mBBA492F672C2CF69CFA8999F11C1FBD967AFFD1F_gshared)(__this, ___resolver0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared)(___playable0, method);
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167 (PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m78B42AB90C54B8EF03079E7FBE1A1D8E56DD86A2 (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64 (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared)(___graph0, ___inputCount1, method);
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>>(!!0,System.Int32)
inline void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , int32_t, const RuntimeMethod*))PlayableExtensions_SetInputCount_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m2774559EFF46341FD237D613631323E3DEC292C4_gshared)(___playable0, ___value1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8 (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared)(___playable0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mB57EE24087931D858028EE79112A1FABDC95E5C6 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineMixer_MasterDirectorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MasterDirectorDelegate__ctor_mAC425F6E2BACE4CC0CB895CD7D1D7B1A18FA8021 (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer_MasterDirectorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * MasterDirectorDelegate_Invoke_mCF74487E3728A2208F2D3B6FF93103E0654D5E3E (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, const RuntimeMethod* method)
{
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * result = NULL;
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
			if (___parameterCount == 0)
			{
				// open
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CinemachineMixer_MasterDirectorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MasterDirectorDelegate_BeginInvoke_m1603727B115FDA229ECBA49CF54F74DDDA463A36 (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer_MasterDirectorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * MasterDirectorDelegate_EndInvoke_m5AC97662C1EFCC5BD15E4CE9C8805C1123C2450C (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineRecomposer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 59));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 60));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 61));
		// m_ApplyAfter = CinemachineCore.Stage.Finalize;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 62));
		__this->set_m_ApplyAfter_7(3);
		// m_Tilt = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 63));
		__this->set_m_Tilt_8((0.0f));
		// m_Pan = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 64));
		__this->set_m_Pan_9((0.0f));
		// m_Dutch = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 65));
		__this->set_m_Dutch_10((0.0f));
		// m_ZoomScale = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 66));
		__this->set_m_ZoomScale_11((1.0f));
		// m_FollowAttachment = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 67));
		__this->set_m_FollowAttachment_12((1.0f));
		// m_LookAtAttachment = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 68));
		__this->set_m_LookAtAttachment_13((1.0f));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 69));
		return;
	}
}
// System.Void CinemachineRecomposer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 70));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 71));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 72));
		// m_ZoomScale = Mathf.Max(0.01f, m_ZoomScale);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 73));
		float L_0 = __this->get_m_ZoomScale_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 77));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65((0.01f), L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 77));
		__this->set_m_ZoomScale_11(L_1);
		// m_FollowAttachment = Mathf.Clamp01(m_FollowAttachment);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 74));
		float L_2 = __this->get_m_FollowAttachment_12();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 78));
		float L_3 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 78));
		__this->set_m_FollowAttachment_12(L_3);
		// m_LookAtAttachment = Mathf.Clamp01(m_LookAtAttachment);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 75));
		float L_4 = __this->get_m_LookAtAttachment_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 79));
		float L_5 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 79));
		__this->set_m_LookAtAttachment_13(L_5);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 76));
		return;
	}
}
// System.Void CinemachineRecomposer::PrePipelineMutateCameraStateCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___curState1, float ___deltaTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___vcam0), (&___curState1), (&___deltaTime2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 80));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 81));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 82));
		// vcam.FollowTargetAttachment = m_FollowAttachment;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 83));
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = ___vcam0;
		float L_1 = __this->get_m_FollowAttachment_12();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 86));
		NullCheck(L_0);
		CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 86));
		// vcam.LookAtTargetAttachment = m_LookAtAttachment;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 84));
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_2 = ___vcam0;
		float L_3 = __this->get_m_LookAtAttachment_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 87));
		NullCheck(L_2);
		CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 87));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 85));
		return;
	}
}
// System.Void CinemachineRecomposer::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, int32_t ___stage1, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___state2, float ___deltaTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___vcam0), (&___stage1), (&___state2), (&___deltaTime3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 88));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 89));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 90));
		// if (stage == m_ApplyAfter)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 91));
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->get_m_ApplyAfter_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 92));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 93));
		// var lens = state.Lens;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 94));
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_3 = ___state2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 108));
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_4 = CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 108));
		V_1 = L_4;
		// var qTilted = state.RawOrientation * Quaternion.AngleAxis(m_Tilt, Vector3.right);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 95));
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_5 = ___state2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 109));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 109));
		float L_7 = __this->get_m_Tilt_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 110));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 110));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 111));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 111));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 112));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_6, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 112));
		V_2 = L_10;
		// var qDesired = Quaternion.AngleAxis(m_Pan, state.ReferenceUp) * qTilted;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 96));
		float L_11 = __this->get_m_Pan_9();
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_12 = ___state2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 113));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 113));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 114));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_11, L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 114));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 115));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_14, L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 115));
		V_3 = L_16;
		// state.OrientationCorrection = Quaternion.Inverse(state.CorrectedOrientation) * qDesired;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 97));
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_17 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_18 = ___state2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 116));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = CameraState_get_CorrectedOrientation_m34E9DD430137D2B017C560027AF7B3632B2A3DAC((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 116));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 117));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_19, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 117));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 118));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_20, L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 118));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 119));
		CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_17, L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 119));
		// lens.Dutch += m_Dutch;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 98));
		float* L_23 = (&V_1)->get_address_of_Dutch_5();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = __this->get_m_Dutch_10();
		*((float*)L_24) = (float)((float)il2cpp_codegen_add((float)L_25, (float)L_26));
		// if (m_ZoomScale != 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 99));
		float L_27 = __this->get_m_ZoomScale_11();
		V_4 = (bool)((((int32_t)((((float)L_27) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 100));
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 101));
		// lens.OrthographicSize *= m_ZoomScale;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 102));
		float* L_29 = (&V_1)->get_address_of_OrthographicSize_2();
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		float L_32 = __this->get_m_ZoomScale_11();
		*((float*)L_30) = (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32));
		// lens.FieldOfView *= m_ZoomScale;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 103));
		float* L_33 = (&V_1)->get_address_of_FieldOfView_1();
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		float L_36 = __this->get_m_ZoomScale_11();
		*((float*)L_34) = (float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 104));
	}

IL_00b0:
	{
		// state.Lens = lens;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 105));
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_37 = ___state2;
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_38 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 120));
		CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_37, L_38, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 120));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 106));
	}

IL_00b9:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 107));
		return;
	}
}
// System.Void CinemachineRecomposer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.Playable CinemachineShot::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___owner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___graph0), (&___owner1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 293));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 294));
		// var playable = ScriptPlayable<CinemachineShotPlayable>.Create(graph);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 295));
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 299));
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_1 = ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 299));
		V_0 = L_1;
		// playable.GetBehaviour().VirtualCamera = VirtualCamera.Resolve(graph.GetResolver());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 296));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 300));
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_2 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_0), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 300));
		ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * L_3 = __this->get_address_of_VirtualCamera_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 301));
		RuntimeObject* L_4 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 301));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 302));
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_5 = ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74((ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *)L_3, L_4, /*hidden argument*/ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 302));
		NullCheck(L_2);
		L_2->set_VirtualCamera_0(L_5);
		// return playable;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 297));
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 303));
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_7 = ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B(L_6, /*hidden argument*/ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 303));
		V_1 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 298));
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_8 = V_1;
		return L_8;
	}
}
// System.Void CinemachineShot::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___director0), (&___driver1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 304));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 305));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 306));
		// driver.AddFromName<Transform>("m_LocalPosition.x");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 307));
		RuntimeObject* L_0 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 317));
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_0, _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 317));
		// driver.AddFromName<Transform>("m_LocalPosition.y");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 308));
		RuntimeObject* L_1 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 318));
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_1, _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 318));
		// driver.AddFromName<Transform>("m_LocalPosition.z");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 309));
		RuntimeObject* L_2 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 319));
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_2, _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 319));
		// driver.AddFromName<Transform>("m_LocalRotation.x");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 310));
		RuntimeObject* L_3 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 320));
		NullCheck(L_3);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_3, _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 320));
		// driver.AddFromName<Transform>("m_LocalRotation.y");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 311));
		RuntimeObject* L_4 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 321));
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_4, _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 321));
		// driver.AddFromName<Transform>("m_LocalRotation.z");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 312));
		RuntimeObject* L_5 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 322));
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_5, _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 322));
		// driver.AddFromName<Camera>("field of view");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 313));
		RuntimeObject* L_6 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 323));
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_6, _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 323));
		// driver.AddFromName<Camera>("near clip plane");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 314));
		RuntimeObject* L_7 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 324));
		NullCheck(L_7);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_7, _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 324));
		// driver.AddFromName<Camera>("far clip plane");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 315));
		RuntimeObject* L_8 = ___driver1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 325));
		NullCheck(L_8);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_8, _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 325));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 316));
		return;
	}
}
// System.Void CinemachineShot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574 (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167(__this, /*hidden argument*/NULL);
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
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331 (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 326));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 327));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 328));
		// public bool IsValid { get { return VirtualCamera != null; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 329));
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = __this->get_VirtualCamera_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 331));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 331));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// public bool IsValid { get { return VirtualCamera != null; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 330));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void CinemachineShotPlayable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineTouchInputMapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 121));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 122));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 123));
		// CinemachineCore.GetInputAxis = GetInputAxis;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 124));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 126));
		AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * L_0 = (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE *)il2cpp_codegen_object_new(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var);
		AxisInputDelegate__ctor_m78B42AB90C54B8EF03079E7FBE1A1D8E56DD86A2(L_0, __this, (intptr_t)((intptr_t)CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 126));
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		((CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var))->set_GetInputAxis_4(L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 125));
		return;
	}
}
// System.Single CinemachineTouchInputMapper::GetInputAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___axisName0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 127));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 128));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 129));
		// if (Input.touchCount > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 130));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 142));
		int32_t L_0 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 142));
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 131));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 132));
		// if (axisName == TouchXInputMapTo)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 133));
		String_t* L_2 = ___axisName0;
		String_t* L_3 = __this->get_TouchXInputMapTo_6();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 143));
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 143));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 134));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// return Input.touches[0].deltaPosition.x / TouchSensitivityX;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 135));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 144));
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_6 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 144));
		NullCheck(L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 145));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 145));
		float L_8 = L_7.get_x_0();
		float L_9 = __this->get_TouchSensitivityX_4();
		V_2 = ((float)((float)L_8/(float)L_9));
		goto IL_0076;
	}

IL_003d:
	{
		// if (axisName == TouchYInputMapTo)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 136));
		String_t* L_10 = ___axisName0;
		String_t* L_11 = __this->get_TouchYInputMapTo_7();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 146));
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 146));
		V_3 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 137));
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		// return Input.touches[0].deltaPosition.y / TouchSensitivityY;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 138));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 147));
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_14 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 147));
		NullCheck(L_14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 148));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 148));
		float L_16 = L_15.get_y_1();
		float L_17 = __this->get_TouchSensitivityY_5();
		V_2 = ((float)((float)L_16/(float)L_17));
		goto IL_0076;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 139));
	}

IL_006d:
	{
		// return Input.GetAxis(axisName);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 140));
		String_t* L_18 = ___axisName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 149));
		float L_19 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 149));
		V_2 = L_19;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 141));
		float L_20 = V_2;
		return L_20;
	}
}
// System.Void CinemachineTouchInputMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 151));
	{
		// public float TouchSensitivityX = 10f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 152));
		__this->set_TouchSensitivityX_4((10.0f));
		// public float TouchSensitivityY = 10f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 153));
		__this->set_TouchSensitivityY_5((10.0f));
		// public string TouchXInputMapTo = "Mouse X";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 154));
		__this->set_TouchXInputMapTo_6(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		// public string TouchYInputMapTo = "Mouse Y";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 155));
		__this->set_TouchYInputMapTo_7(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 156));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 156));
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
// UnityEngine.Playables.Playable CinemachineTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7 (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___graph0), (&___go1), (&___inputCount2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 332));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 333));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 334));
		// var mixer = ScriptPlayable<CinemachineMixer>.Create(graph);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 335));
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 339));
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_1 = ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 339));
		V_0 = L_1;
		// mixer.SetInputCount(inputCount);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 336));
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_2 = V_0;
		int32_t L_3 = ___inputCount2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 340));
		PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F(L_2, L_3, /*hidden argument*/PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 340));
		// return mixer;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 337));
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 341));
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_5 = ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8(L_4, /*hidden argument*/ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 341));
		V_1 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 338));
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_6 = V_1;
		return L_6;
	}
}
// System.Void CinemachineTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var);
		TrackAsset__ctor_mB57EE24087931D858028EE79112A1FABDC95E5C6(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937Cinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 13780));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 13781));
	{
		// public float FollowTargetAttachment { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 13782));
		float L_0 = ___value0;
		__this->set_U3CFollowTargetAttachmentU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12Cinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 13786));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 13787));
	{
		// public float LookAtTargetAttachment { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 13788));
		float L_0 = ___value0;
		__this->set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6Cinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11266));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 11267));
	{
		// public LensSettings Lens { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11268));
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_0 = __this->get_U3CLensU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623Cinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11298));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 11299));
	{
		// public Quaternion RawOrientation { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11300));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CRawOrientationU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809BCinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11272));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 11273));
	{
		// public Vector3 ReferenceUp { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11274));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CReferenceUpU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9Cinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11325));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 11326));
	{
		// public Quaternion OrientationCorrection { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11327));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3COrientationCorrectionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8Cinemachine5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11269));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsCinemachine + 11270));
	{
		// public LensSettings Lens { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsCinemachine + 11271));
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_0 = ___value0;
		__this->set_U3CLensU3Ek__BackingField_0(L_0);
		return;
	}
}
