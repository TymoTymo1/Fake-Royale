#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650;
// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Card
struct Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ElixirBar
struct ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC;
// Entity
struct Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC;
// EnvMapAnimator
struct EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Knight
struct Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Model
struct Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// TargetScriptableObject
struct TargetScriptableObject_t7258AD6D225CD658166F7BEA6EAB875C4EB2B4A4;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tower
struct Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Entity/<CalulateDestination>d__15
struct U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8;
// EnvMapAnimator/<Start>d__4
struct U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// Target/KilledEventHandler
struct KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3;
// Tower/<CalulateDestination>d__8
struct U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62;

IL2CPP_EXTERN_C RuntimeClass* Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7E77DB84E1908153085B0037B2757EFD9E6B67;
IL2CPP_EXTERN_C String_t* _stringLiteralA87494629332443BCB190D1BE4733B86174C509D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6435C50FC942765756FEF9189F6842192D3FCA5;
IL2CPP_EXTERN_C String_t* _stringLiteralB942294E7DFDEE7F9FFFA5FDE6B96C7C47B03F9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralE338D1B4E5DD1E52B063CA4C0941E0717E088F60;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC_mBB6A85AAD4992F7C9B3B5C6C9FD3E184A7C17167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_m6CE4F63F57541DD381F1A6167E2C6C07E43ADE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mE2491050C46259A65F92EA2ADD517446420F87AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m609588111E70F00D5F37D685BDFABE4C42D0B601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mBE3B62BAED86D27C28E11AD45D1744E5FE529438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6_m98FA6B1E688E4343AF3601FAEBD0B75471E40007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Model_OnKilled_m9543EB52E5961420FF9FC5237E31DEC905E998F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCalulateDestinationU3Ed__15_System_Collections_IEnumerator_Reset_mFBB2B4A646C6C629DC8B7C2FC2CC9DD1D7A72A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCalulateDestinationU3Ed__8_System_Collections_IEnumerator_Reset_mFB7DC96372EA5072FBBF5FA636CCC96BD83ACBE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m3EF23BF40634D4262D8A2AE3DB14140FEFB4BF52_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Entity/<CalulateDestination>d__15
struct U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8  : public RuntimeObject
{
	// System.Int32 Entity/<CalulateDestination>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Entity/<CalulateDestination>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Entity Entity/<CalulateDestination>d__15::<>4__this
	Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* ___U3CU3E4__this_2;
};

// Tower/<CalulateDestination>d__8
struct U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62  : public RuntimeObject
{
	// System.Int32 Tower/<CalulateDestination>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Tower/<CalulateDestination>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Tower Tower/<CalulateDestination>d__8::<>4__this
	Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Target>
struct Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// EnvMapAnimator/<Start>d__4
struct U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557  : public RuntimeObject
{
	// System.Int32 EnvMapAnimator/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnvMapAnimator/<Start>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnvMapAnimator EnvMapAnimator/<Start>d__4::<>4__this
	EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* ___U3CU3E4__this_2;
	// UnityEngine.Matrix4x4 EnvMapAnimator/<Start>d__4::<matrix>5__2
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CmatrixU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Card
struct Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Card::name
	String_t* ___name_4;
	// System.String Card::description
	String_t* ___description_5;
	// UnityEngine.Sprite Card::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_6;
	// System.Int32 Card::rarity
	int32_t ___rarity_7;
	// System.Int32 Card::elexCost
	int32_t ___elexCost_8;
	// System.Int32[] Card::attack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attack_9;
	// System.Int32 Card::level
	int32_t ___level_10;
	// UnityEngine.GameObject Card::fighter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fighter_11;
	// System.Single Card::attackRange
	float ___attackRange_12;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TargetScriptableObject
struct TargetScriptableObject_t7258AD6D225CD658166F7BEA6EAB875C4EB2B4A4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject TargetScriptableObject::obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj_4;
	// System.Single TargetScriptableObject::hp
	float ___hp_5;
	// System.Single TargetScriptableObject::damage
	float ___damage_6;
	// System.Int32 TargetScriptableObject::manaCost
	int32_t ___manaCost_7;
	// System.Int32 TargetScriptableObject::level
	int32_t ___level_8;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Target/KilledEventHandler
struct KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Bullet::speedVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___speedVector_4;
	// System.Single Bullet::speed
	float ___speed_5;
};

// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Model Controller::model
	Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* ___model_4;
	// UnityEngine.Camera Controller::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_5;
	// Card Controller::testModel
	Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___testModel_6;
};

// ElixirBar
struct ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ElixirBar::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// System.Single ElixirBar::refillRate
	float ___refillRate_5;
	// TMPro.TextMeshProUGUI ElixirBar::sliderText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___sliderText_6;
	// System.Single ElixirBar::elixir
	float ___elixir_7;
};

// EnvMapAnimator
struct EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 EnvMapAnimator::RotationSpeeds
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RotationSpeeds_4;
	// TMPro.TMP_Text EnvMapAnimator::m_textMeshPro
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_textMeshPro_5;
	// UnityEngine.Material EnvMapAnimator::m_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_material_6;
};

// HealthBar
struct HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HealthBar::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_4;
	// UnityEngine.Vector3 HealthBar::changedPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changedPos_5;
	// UnityEngine.UI.Slider HealthBar::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
	// System.Single HealthBar::maxHp
	float ___maxHp_7;
	// System.Single HealthBar::hp
	float ___hp_8;
	// UnityEngine.UI.RawImage HealthBar::fill
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___fill_9;
};

// Model
struct Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Target> Model::team1TargetsAlife
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ___team1TargetsAlife_4;
	// System.Collections.Generic.List`1<Target> Model::team2TargetsAlife
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ___team2TargetsAlife_5;
	// Card Model::testCard
	Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___testCard_6;
	// UnityEngine.Camera Model::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_7;
	// UnityEngine.Transform Model::targetParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetParent_8;
	// System.Boolean Model::player
	bool ___player_9;
	// UnityEngine.Canvas Model::ui
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___ui_10;
	// ElixirBar Model::elixirBar
	ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* ___elixirBar_11;
};

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Target::hp
	int32_t ___hp_4;
	// System.Int32 Target::maxHp
	int32_t ___maxHp_5;
	// System.Boolean Target::team
	bool ___team_6;
	// System.Boolean Target::isInAir
	bool ___isInAir_7;
	// Model Target::model
	Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* ___model_8;
	// HealthBar Target::healthBar
	HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* ___healthBar_9;
	// UnityEngine.GameObject Target::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_10;
	// UnityEngine.ParticleSystem Target::deathEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___deathEffect_11;
	// UnityEngine.Transform Target::attackPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___attackPoint_12;
	// Target/KilledEventHandler Target::Killed
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* ___Killed_13;
	// System.Boolean Target::killed
	bool ___killed_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650  : public Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5
{
};

// Entity
struct Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC  : public Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5
{
	// System.Boolean Entity::canAttackFloor
	bool ___canAttackFloor_15;
	// System.Boolean Entity::canAttackAir
	bool ___canAttackAir_16;
	// System.Boolean Entity::canAttackEntities
	bool ___canAttackEntities_17;
	// System.Boolean Entity::isInvisble
	bool ___isInvisble_18;
	// System.Int32 Entity::damageOnEntites
	int32_t ___damageOnEntites_19;
	// System.Int32 Entity::damageOnBuildings
	int32_t ___damageOnBuildings_20;
	// System.Single Entity::intervall
	float ___intervall_21;
	// System.Single Entity::attackRange
	float ___attackRange_22;
	// UnityEngine.AI.NavMeshAgent Entity::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_23;
	// Target Entity::destination
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___destination_24;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Knight
struct Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927  : public Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC
{
	// System.Single Knight::speed
	float ___speed_25;
	// System.Int32 Knight::damage
	int32_t ___damage_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// Tower
struct Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6  : public Building_t950D5394E080624D7E96B158EF852EA16ADB3650
{
	// System.Int32 Tower::id
	int32_t ___id_15;
	// Target Tower::target
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target_16;
	// System.Single Tower::timer
	float ___timer_18;
	// UnityEngine.GameObject Tower::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_19;
	// System.Single Tower::range
	float ___range_20;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Model>()
inline Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* Component_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mE2491050C46259A65F92EA2ADD517446420F87AD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void Model::SpawnTarget(Card,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_SpawnTarget_mDF34BDC6C4C8231C97CF77FF9C078452B0BAAEF1 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___info0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, bool ___team2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Target::GetAttackPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Target::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_TakeDamage_m6108CEE6109172999D49138B4217DD7034A6F962 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, int32_t ___damage0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isStopped_m1CF52CE58CC025C1617F9E745924624C35D0B598 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Entity::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Attack_mDBC2AF441277D017983B6CBCB7888D6E8CEDAC1E (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void Entity/<CalulateDestination>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__15__ctor_m3DC17EE4B7EE125AD0C3730CC6A8688ACCE64D49 (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// Target Model::GetNearestTargetFrom(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* Model_GetNearestTargetFrom_mA6B84E2C4F5E3A403CD8BEA3C42DA024322D3432 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___attacker0, const RuntimeMethod* method) ;
// System.Void Entity::SetDestination(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_SetDestination_m0F679A21DE58FB3C8EBDD9AA3EDF3B5B11FE13E1 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___destination0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator Entity::CalulateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_CalulateDestination_m51C6FCBD622F9174E7EA1CF83494637419EB0773 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Entity::RecalculateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_RecalculateDestination_m4CBB15735E303D700C29672FDF031FADB0103E06 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Tower>()
inline Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* GameObject_GetComponent_TisTower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6_m98FA6B1E688E4343AF3601FAEBD0B75471E40007 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ElixirBar>()
inline ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* Component_GetComponent_TisElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC_mBB6A85AAD4992F7C9B3B5C6C9FD3E184A7C17167 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Target> Model::GetValidTargets(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* Model_GetValidTargets_m4840F1675F35D1398AAA84BB988628E73D2F55AD (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___attacker0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Target>::GetEnumerator()
inline Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Target>::Dispose()
inline void Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA (Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Target>::get_Current()
inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_inline (Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41* __this, const RuntimeMethod* method)
{
	return ((  Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* (*) (Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Target>::MoveNext()
inline bool Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145 (Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Target::GetTeam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A_inline (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Target>::.ctor()
inline void List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Target>::Add(T)
inline void List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Target::IsInAir()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Target_IsInAir_m5DEA86BDCCCC47CAD77777425F714E5AD0F890BA_inline (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Target>::Remove(T)
inline bool List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95 (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// Target Entity::GetDestination()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* Entity_GetDestination_m4E3DC39182E1EDF73117B389C29D3778EE8AB589_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void Entity::StopAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_StopAttack_m5C9D8616E6CB7EBF41A7FA8824A8A843FF808EF1 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void Entity::EnableAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_EnableAgent_m34D2E096F7C74199EEC9A763C45826E9700F2E4B (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Boolean ElixirBar::ReduceElixir(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ElixirBar_ReduceElixir_m0FAE77CA175C6A07FEB048A7F7556E4A078B8A47 (ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* __this, int32_t ___by0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<Target>()
inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GameObject_GetComponent_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mBE3B62BAED86D27C28E11AD45D1744E5FE529438 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Target::Setup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_Setup_m6501D87EC2BE71E59492BFDE025D54D4C12A7B9F (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, bool ___team0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Model>()
inline Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HealthBar>()
inline HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* Component_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_m6CE4F63F57541DD381F1A6167E2C6C07E43ADE54 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HealthBar::Setup(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Setup_mA319684B56F9F315B3341DFA946EB791A9BE3E2B (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___maxHp0, const RuntimeMethod* method) ;
// System.Void HealthBar::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_TakeDamage_m6284A559EEE3A5477FF2868DDCC41D1EB4215314 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___damage0, const RuntimeMethod* method) ;
// System.Void Target::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_Kill_mE60A14FAE095283D3A0AA025D8AB135044AF5F12 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Target/KilledEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_inline (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) ;
// System.Void Model::AddTarget(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_AddTarget_m3069FD56359083A84427B590FB0ED463C09953A4 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___t0, const RuntimeMethod* method) ;
// System.Void Target/KilledEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledEventHandler__ctor_m9FEEEF9F925D5BDB05834647CC99D3E6144D7757 (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Target::add_Killed(Target/KilledEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_add_Killed_m7CDE22B2D7BC8A7E3A1589980925C49FA98385D6 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* ___value0, const RuntimeMethod* method) ;
// System.Void Tower/<CalulateDestination>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__8__ctor_m7ECBEA0C6A8770B714E0BB592F1C06F0161BDDB9 (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Tower::ShootBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_ShootBullet_m020BB76C4265C223303042DF023D58C09E780E1C (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* GameObject_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m609588111E70F00D5F37D685BDFABE4C42D0B601 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Bullet::SetupBullet(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_SetupBullet_m396511521011EECE519AF1328573D3CB9C190571 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Tower::CalulateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_CalulateDestination_mCC0BE82C1E6E8155A590A1F3F6928BF646AE0C00 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) ;
// System.Void Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_m1966393898763C921095D832800266FB5532893F (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, const RuntimeMethod* method) ;
// System.Void Tower::RecalculateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_RecalculateDestination_m01C92EE6DB2A0D22E3D6CB00DC253C901A3E98CC (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnvMapAnimator/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m432062D94FDEF42B01FAB69EBC06A4D137C525C2 (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetTRS_m8002A569FE81574DABE86044C8FF6F7C44DA21AA (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void Card::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card__ctor_m3A8F4D1C5BFE66DC0F5392230C4E2AC3632648EF (Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attack = new int[9];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___attack_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attack_9), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Building::TargetStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_TargetStart_m3302EF3DD453DB1559C52A6F7B349BB6D2A2B30C (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_m1966393898763C921095D832800266FB5532893F (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, const RuntimeMethod* method) 
{
	{
		Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216(__this, NULL);
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
// System.Void Bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Start_m6BD187DD353835D248DA404B169DCE29CEB2B813 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_m5AA63D0B1F389C2CFEE77466E1C39ADC813B4DBC (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(speedVector * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___speedVector_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Bullet::SetupBullet(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_SetupBullet_m396511521011EECE519AF1328573D3CB9C190571 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.rotation = Quaternion.LookRotation(destination);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___destination0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_1, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_2, NULL);
		// Vector3 unnormalizedSpeed = destination-transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___destination0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		V_0 = L_6;
		// speedVector = unnormalizedSpeed.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___speedVector_4 = L_7;
		// speedVector *= speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___speedVector_4;
		float L_9 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		__this->___speedVector_4 = L_10;
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// private float speed = 10;
		__this->___speed_5 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Start_m6CF9E52A1D22548B67650167CBA335928CEC4796 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mE2491050C46259A65F92EA2ADD517446420F87AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model = GetComponent<Model>();
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_0;
		L_0 = Component_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mE2491050C46259A65F92EA2ADD517446420F87AD(__this, Component_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mE2491050C46259A65F92EA2ADD517446420F87AD_RuntimeMethod_var);
		__this->___model_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_4), (void*)L_0);
		// cam = GameObject.Find("Main Camera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_1, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___cam_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Update_mDE8E185DE18C109FA2E8C6FCBFEB86F100F21634 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// Ray inputRay = cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (Physics.Raycast(inputRay, out RaycastHit hit))
		bool L_4;
		L_4 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// model.SpawnTarget(testModel, hit.point, false);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_5 = __this->___model_4;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_6 = __this->___testModel_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Model_SpawnTarget_mDF34BDC6C4C8231C97CF77FF9C078452B0BAAEF1(L_5, L_6, L_7, (bool)0, NULL);
	}

IL_003a:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// Ray inputRay = cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_11;
		L_11 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_9, L_10, NULL);
		// if (Physics.Raycast(inputRay, out RaycastHit hit))
		bool L_12;
		L_12 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_11, (&V_1), NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// model.SpawnTarget(testModel, hit.point, true);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_13 = __this->___model_4;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_14 = __this->___testModel_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		Model_SpawnTarget_mDF34BDC6C4C8231C97CF77FF9C078452B0BAAEF1(L_13, L_14, L_15, (bool)1, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_mD8A105DFD9CAFDD0B419A5ECD5BC3B789338476A (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ElixirBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElixirBar_Start_mAF6696F5C26E70C968FC8E2205A7091872E61081 (ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6435C50FC942765756FEF9189F6842192D3FCA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_4), (void*)L_0);
		// sliderText = transform.Find("ElixirText").GetComponent<TextMeshProUGUI>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteralB6435C50FC942765756FEF9189F6842192D3FCA5, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
		L_3 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_2, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___sliderText_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sliderText_6), (void*)L_3);
		// slider.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_4;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, (0.0f));
		// }
		return;
	}
}
// System.Void ElixirBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElixirBar_Update_m0A113E076DA5902F720FA95266FC09492C8AAF55 (ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B4_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B3_1 = NULL;
	{
		// if (elixir >= 10f) return;
		float L_0 = __this->___elixir_7;
		if ((!(((float)L_0) >= ((float)(10.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (elixir >= 10f) return;
		return;
	}

IL_000e:
	{
		// elixir += refillRate * Time.deltaTime;
		float L_1 = __this->___elixir_7;
		float L_2 = __this->___refillRate_5;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___elixir_7 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// slider.value = elixir/10f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_4;
		float L_5 = __this->___elixir_7;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)(L_5/(10.0f))));
		// sliderText.text = "" + (int)elixir;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___sliderText_6;
		float L_7 = __this->___elixir_7;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_6;
			goto IL_005c;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_005c:
	{
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// }
		return;
	}
}
// System.Boolean ElixirBar::ReduceElixir(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ElixirBar_ReduceElixir_m0FAE77CA175C6A07FEB048A7F7556E4A078B8A47 (ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* __this, int32_t ___by0, const RuntimeMethod* method) 
{
	{
		// if ((int)elixir - by < 0) return false;
		float L_0 = __this->___elixir_7;
		int32_t L_1 = ___by0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_0), L_1))) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		// if ((int)elixir - by < 0) return false;
		return (bool)0;
	}

IL_000e:
	{
		// elixir = (int)(elixir-by);
		float L_2 = __this->___elixir_7;
		int32_t L_3 = ___by0;
		__this->___elixir_7 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_2, ((float)L_3)))));
		// return true;
		return (bool)1;
	}
}
// System.Void ElixirBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElixirBar__ctor_mC2A591DC7281FA20958D30A9C454485CBADA7B9C (ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* __this, const RuntimeMethod* method) 
{
	{
		// private float refillRate = 0.8f;
		__this->___refillRate_5 = (0.800000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Entity::SetDestination(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_SetDestination_m0F679A21DE58FB3C8EBDD9AA3EDF3B5B11FE13E1 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___destination0, const RuntimeMethod* method) 
{
	{
		// this.destination = destination;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___destination0;
		__this->___destination_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destination_24), (void*)L_0);
		// agent.SetDestination(destination.GetAttackPoint().position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_23;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_2 = ___destination0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		bool L_5;
		L_5 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Entity::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Attack_mDBC2AF441277D017983B6CBCB7888D6E8CEDAC1E (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector3.Distance(transform.position, destination.GetAttackPoint().position) > attackRange) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_2 = __this->___destination_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		float L_6 = __this->___attackRange_22;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0029;
		}
	}
	{
		// if (Vector3.Distance(transform.position, destination.GetAttackPoint().position) > attackRange) return;
		return;
	}

IL_0029:
	{
		// InvokeRepeating(nameof(DoDamage), intervall/2.0f, intervall);
		float L_7 = __this->___intervall_21;
		float L_8 = __this->___intervall_21;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA, ((float)(L_7/(2.0f))), L_8, NULL);
		// }
		return;
	}
}
// System.Void Entity::DoDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_DoDamage_mBDDE816B6B6F6D061A30B5E7CB23AE68A71620D7 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (destination == null) return;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = __this->___destination_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (destination == null) return;
		return;
	}

IL_000f:
	{
		// destination.TakeDamage(damageOnEntites);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_2 = __this->___destination_24;
		int32_t L_3 = __this->___damageOnEntites_19;
		Target_TakeDamage_m6108CEE6109172999D49138B4217DD7034A6F962(L_2, L_3, NULL);
		// if (Vector3.Distance(transform.position, destination.GetAttackPoint().position) > attackRange) CancelInvoke(nameof(DoDamage));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_6 = __this->___destination_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9;
		L_9 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_5, L_8, NULL);
		float L_10 = __this->___attackRange_22;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0053;
		}
	}
	{
		// if (Vector3.Distance(transform.position, destination.GetAttackPoint().position) > attackRange) CancelInvoke(nameof(DoDamage));
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Entity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Update_mB2D6E658F8C0FF042DD47C6CF50B7C38BD07675E (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (destination == null) return;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = __this->___destination_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (destination == null) return;
		return;
	}

IL_000f:
	{
		// if (Vector3.Distance(destination.GetAttackPoint().position, transform.position) < attackRange)
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_2 = __this->___destination_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_6, NULL);
		float L_8 = __this->___attackRange_22;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_0056;
		}
	}
	{
		// if (!agent.isStopped)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_9 = __this->___agent_23;
		bool L_10;
		L_10 = NavMeshAgent_get_isStopped_m1CF52CE58CC025C1617F9E745924624C35D0B598(L_9, NULL);
		if (L_10)
		{
			goto IL_0056;
		}
	}
	{
		// agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_11 = __this->___agent_23;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_11, (bool)1, NULL);
		// Attack();
		Entity_Attack_mDBC2AF441277D017983B6CBCB7888D6E8CEDAC1E(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Entity::StopAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_StopAttack_m5C9D8616E6CB7EBF41A7FA8824A8A843FF808EF1 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelInvoke(nameof(DoDamage));
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralFC1799D21DCB2789C846D2636DC2D2F17E711FFA, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Entity::CalulateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_CalulateDestination_m51C6FCBD622F9174E7EA1CF83494637419EB0773 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* L_0 = (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8*)il2cpp_codegen_object_new(U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8_il2cpp_TypeInfo_var);
		U3CCalulateDestinationU3Ed__15__ctor_m3DC17EE4B7EE125AD0C3730CC6A8688ACCE64D49(L_0, 0, NULL);
		U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Entity::RecalculateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_RecalculateDestination_m4CBB15735E303D700C29672FDF031FADB0103E06 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// SetDestination(model.GetNearestTargetFrom(this));
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___model_8;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_1;
		L_1 = Model_GetNearestTargetFrom_mA6B84E2C4F5E3A403CD8BEA3C42DA024322D3432(L_0, __this, NULL);
		Entity_SetDestination_m0F679A21DE58FB3C8EBDD9AA3EDF3B5B11FE13E1(__this, L_1, NULL);
		// }
		return;
	}
}
// Target Entity::GetDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* Entity_GetDestination_m4E3DC39182E1EDF73117B389C29D3778EE8AB589 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// return destination;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = __this->___destination_24;
		return L_0;
	}
}
// System.Void Entity::EnableAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_EnableAgent_m34D2E096F7C74199EEC9A763C45826E9700F2E4B (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// agent.isStopped = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_23;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Entity::TargetStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_TargetStart_mE530B60666FF95F411475BCBB395F269E42F43D8 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attackRange = 2f; // TODO
		__this->___attackRange_22 = (2.0f);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_23), (void*)L_0);
		// attackPoint = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___attackPoint_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___attackPoint_12), (void*)L_1);
		// StartCoroutine(CalulateDestination());
		RuntimeObject* L_2;
		L_2 = Entity_CalulateDestination_m51C6FCBD622F9174E7EA1CF83494637419EB0773(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216(__this, NULL);
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
// System.Void Entity/<CalulateDestination>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__15__ctor_m3DC17EE4B7EE125AD0C3730CC6A8688ACCE64D49 (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Entity/<CalulateDestination>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__15_System_IDisposable_Dispose_m6584BADBA701F4A657E2F1D74A61037A58BF9053 (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Entity/<CalulateDestination>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCalulateDestinationU3Ed__15_MoveNext_mEA70F4A731525753A482CF24AB1D4106C387E5F9 (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0046;
	}

IL_0020:
	{
		// RecalculateDestination();
		Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_4 = V_1;
		Entity_RecalculateDestination_m4CBB15735E303D700C29672FDF031FADB0103E06(L_4, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0046:
	{
		// while (isActiveAndEnabled)
		Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_6 = V_1;
		bool L_7;
		L_7 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_6, NULL);
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Entity/<CalulateDestination>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalulateDestinationU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA8D9DD72CC675691D3E898E7DD375DA29DBF95E1 (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Entity/<CalulateDestination>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__15_System_Collections_IEnumerator_Reset_mFBB2B4A646C6C629DC8B7C2FC2CC9DD1D7A72A78 (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCalulateDestinationU3Ed__15_System_Collections_IEnumerator_Reset_mFBB2B4A646C6C629DC8B7C2FC2CC9DD1D7A72A78_RuntimeMethod_var)));
	}
}
// System.Object Entity/<CalulateDestination>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalulateDestinationU3Ed__15_System_Collections_IEnumerator_get_Current_m008D62DF43702E9D58826B9A3E3C4418E1DBBAAE (U3CCalulateDestinationU3Ed__15_tFC26DDA7C2F1604A13F4C3D4DD59C8C70AA912C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void HealthBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Start_mBFA95FC247C3C4C126B5542259816ABABCDA19B7 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87494629332443BCB190D1BE4733B86174C509D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cam = GameObject.Find("Main Camera").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___cam_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_1);
		// Vector3 camPos = cam.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___cam_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// changedPos = new Vector3(transform.position.x,  camPos.y, camPos.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_6, L_8, L_10, /*hidden argument*/NULL);
		__this->___changedPos_5 = L_11;
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12;
		L_12 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_6), (void*)L_12);
		// fill = transform.Find("Fill").GetComponent<RawImage>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_13, _stringLiteralA87494629332443BCB190D1BE4733B86174C509D, NULL);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_15;
		L_15 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(L_14, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		__this->___fill_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fill_9), (void*)L_15);
		// }
		return;
	}
}
// System.Void HealthBar::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_FixedUpdate_m19317E396EC7E2EA4ACE7047C5D8CCD9FC200D6E (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(changedPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___changedPos_5;
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void HealthBar::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_TakeDamage_m6284A559EEE3A5477FF2868DDCC41D1EB4215314 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___damage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// hp = Mathf.Max(hp - damage, 0);
		float L_0 = __this->___hp_8;
		float L_1 = ___damage0;
		float L_2;
		L_2 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (0.0f), NULL);
		__this->___hp_8 = L_2;
		// slider.value = hp / maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___slider_6;
		float L_4 = __this->___hp_8;
		float L_5 = __this->___maxHp_7;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, ((float)(L_4/L_5)));
		// float r = Mathf.Min(1.0f, (1f-slider.value) * 2f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_6;
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		float L_8;
		L_8 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_7)), (2.0f))), NULL);
		V_0 = L_8;
		// float g = 1.0f;
		V_1 = (1.0f);
		// if (r >= 1.0f)
		float L_9 = V_0;
		if ((!(((float)L_9) >= ((float)(1.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// g = Mathf.Max(0.0f, slider.value*2f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___slider_6;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_10);
		float L_12;
		L_12 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)il2cpp_codegen_multiply(L_11, (2.0f))), NULL);
		V_1 = L_12;
	}

IL_007c:
	{
		// fill.color = new Color(r, g, 0);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_13 = __this->___fill_9;
		float L_14 = V_0;
		float L_15 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_16), L_14, L_15, (0.0f), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_16);
		// }
		return;
	}
}
// System.Void HealthBar::Setup(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Setup_mA319684B56F9F315B3341DFA946EB791A9BE3E2B (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, float ___maxHp0, const RuntimeMethod* method) 
{
	{
		// this.maxHp = maxHp;
		float L_0 = ___maxHp0;
		__this->___maxHp_7 = L_0;
		// hp = maxHp;
		float L_1 = ___maxHp0;
		__this->___hp_8 = L_1;
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m6874A2796BC8D86E80B24E349500653ACFA80662 (HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Knight::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_OnCollisionEnter_mAAA4D4BDDEA5CE10F535FA0719D8C7398BE2A8D4 (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6_m98FA6B1E688E4343AF3601FAEBD0B75471E40007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.GetComponent<Tower>() == null) return;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_2;
		L_2 = GameObject_GetComponent_TisTower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6_m98FA6B1E688E4343AF3601FAEBD0B75471E40007(L_1, GameObject_GetComponent_TisTower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6_m98FA6B1E688E4343AF3601FAEBD0B75471E40007_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// if (collision.gameObject.GetComponent<Tower>() == null) return;
		return;
	}
}
// System.Void Knight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight__ctor_m4F3A9369169B09789175EF297DA2B6424ED376B3 (Knight_t90DFF51C0A6D076F5345A52B4F6C0661A88AC927* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_25 = (10.0f);
		// public int damage = 4;
		__this->___damage_26 = 4;
		Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87(__this, NULL);
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
// System.Void Model::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_Start_m8AAE6B04AD5B599C381DB91E7ECA9F00DBF4BDF0 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC_mBB6A85AAD4992F7C9B3B5C6C9FD3E184A7C17167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB942294E7DFDEE7F9FFFA5FDE6B96C7C47B03F9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elixirBar = ui.transform.Find("ElixirBar").GetComponent<ElixirBar>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___ui_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteralB942294E7DFDEE7F9FFFA5FDE6B96C7C47B03F9D, NULL);
		ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* L_3;
		L_3 = Component_GetComponent_TisElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC_mBB6A85AAD4992F7C9B3B5C6C9FD3E184A7C17167(L_2, Component_GetComponent_TisElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC_mBB6A85AAD4992F7C9B3B5C6C9FD3E184A7C17167_RuntimeMethod_var);
		__this->___elixirBar_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elixirBar_11), (void*)L_3);
		// }
		return;
	}
}
// Target Model::GetNearestTargetFrom(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* Model_GetNearestTargetFrom_mA6B84E2C4F5E3A403CD8BEA3C42DA024322D3432 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___attacker0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_1 = NULL;
	Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// List<Target> validTargets = GetValidTargets(attacker);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___attacker0;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_1;
		L_1 = Model_GetValidTargets_m4840F1675F35D1398AAA84BB988628E73D2F55AD(__this, L_0, NULL);
		// float minimumDistance = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// Target closestTargetYet = null;
		V_1 = (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)NULL;
		// foreach (Target t in validTargets)
		Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 L_2;
		L_2 = List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE(L_1, List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA((&V_2), Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_0017_1:
			{
				// foreach (Target t in validTargets)
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_3;
				L_3 = Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_inline((&V_2), Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var);
				V_3 = L_3;
				// float dist = Vector3.Distance(t.gameObject.transform.position, attacker.gameObject.transform.position);
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_4 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
				L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_8 = ___attacker0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				float L_12;
				L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_11, NULL);
				V_4 = L_12;
				// if (dist < minimumDistance)
				float L_13 = V_4;
				float L_14 = V_0;
				if ((!(((float)L_13) < ((float)L_14))))
				{
					goto IL_0050_1;
				}
			}
			{
				// minimumDistance = dist;
				float L_15 = V_4;
				V_0 = L_15;
				// closestTargetYet = t;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_16 = V_3;
				V_1 = L_16;
			}

IL_0050_1:
			{
				// foreach (Target t in validTargets)
				bool L_17;
				L_17 = Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145((&V_2), Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// return closestTargetYet;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_18 = V_1;
		return L_18;
	}
}
// System.Collections.Generic.List`1<Target> Model::GetValidTargets(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* Model_GetValidTargets_m4840F1675F35D1398AAA84BB988628E73D2F55AD (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___attacker0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* V_0 = NULL;
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* V_1 = NULL;
	Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_3 = NULL;
	Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* V_4 = NULL;
	Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* V_5 = NULL;
	{
		// if (attacker.GetTeam() == true) targetList = team1TargetsAlife;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___attacker0;
		bool L_1;
		L_1 = Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (attacker.GetTeam() == true) targetList = team1TargetsAlife;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_2 = __this->___team1TargetsAlife_4;
		V_0 = L_2;
		goto IL_0018;
	}

IL_0011:
	{
		// else targetList = team2TargetsAlife;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_3 = __this->___team2TargetsAlife_5;
		V_0 = L_3;
	}

IL_0018:
	{
		// List<Target> validTargets = new List<Target>();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_4 = (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*)il2cpp_codegen_object_new(List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F(L_4, List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		V_1 = L_4;
		// if (attacker is Building) return targetList;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_5 = ___attacker0;
		if (!((Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)IsInstClass((RuntimeObject*)L_5, Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// if (attacker is Building) return targetList;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_6 = V_0;
		return L_6;
	}

IL_0028:
	{
		// foreach (Target t in targetList)
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_7 = V_0;
		Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 L_8;
		L_8 = List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE(L_7, List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA((&V_2), Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b4_1;
			}

IL_0034_1:
			{
				// foreach (Target t in targetList)
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_9;
				L_9 = Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_inline((&V_2), Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var);
				V_3 = L_9;
				// if (t is Building)
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_10 = V_3;
				if (!((Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)IsInstClass((RuntimeObject*)L_10, Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var)))
				{
					goto IL_0050_1;
				}
			}
			{
				// validTargets.Add(t);
				List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_11 = V_1;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_12 = V_3;
				List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline(L_11, L_12, List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
				// break;
				goto IL_00d0;
			}

IL_0050_1:
			{
				// if(t is Entity)
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_13 = V_3;
				if (!((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)IsInstClass((RuntimeObject*)L_13, Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var)))
				{
					goto IL_00b4_1;
				}
			}
			{
				// Entity attackEntity = (Entity)attacker;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_14 = ___attacker0;
				V_4 = ((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)CastclassClass((RuntimeObject*)L_14, Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var));
				// Entity targetEntity = (Entity)t;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_15 = V_3;
				V_5 = ((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)CastclassClass((RuntimeObject*)L_15, Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var));
				// if (targetEntity.canAttackEntities == false) break;
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_16 = V_5;
				bool L_17 = L_16->___canAttackEntities_17;
				if (L_17)
				{
					goto IL_0073_1;
				}
			}
			{
				// if (targetEntity.canAttackEntities == false) break;
				goto IL_00d0;
			}

IL_0073_1:
			{
				// if (targetEntity.isInvisble) break;
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_18 = V_5;
				bool L_19 = L_18->___isInvisble_18;
				if (!L_19)
				{
					goto IL_007e_1;
				}
			}
			{
				// if (targetEntity.isInvisble) break;
				goto IL_00d0;
			}

IL_007e_1:
			{
				// if(targetEntity.IsInAir() && attackEntity.canAttackAir)
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_20 = V_5;
				bool L_21;
				L_21 = Target_IsInAir_m5DEA86BDCCCC47CAD77777425F714E5AD0F890BA_inline(L_20, NULL);
				if (!L_21)
				{
					goto IL_0099_1;
				}
			}
			{
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_22 = V_4;
				bool L_23 = L_22->___canAttackAir_16;
				if (!L_23)
				{
					goto IL_0099_1;
				}
			}
			{
				// targetList.Add(t);
				List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_24 = V_0;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_25 = V_3;
				List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline(L_24, L_25, List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
				// break;
				goto IL_00d0;
			}

IL_0099_1:
			{
				// if (!targetEntity.IsInAir() && attackEntity.canAttackFloor)
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_26 = V_5;
				bool L_27;
				L_27 = Target_IsInAir_m5DEA86BDCCCC47CAD77777425F714E5AD0F890BA_inline(L_26, NULL);
				if (L_27)
				{
					goto IL_00b4_1;
				}
			}
			{
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_28 = V_4;
				bool L_29 = L_28->___canAttackFloor_15;
				if (!L_29)
				{
					goto IL_00b4_1;
				}
			}
			{
				// targetList.Add(t);
				List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_30 = V_0;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_31 = V_3;
				List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline(L_30, L_31, List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
				// break;
				goto IL_00d0;
			}

IL_00b4_1:
			{
				// foreach (Target t in targetList)
				bool L_32;
				L_32 = Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145((&V_2), Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_00d0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d0:
	{
		// return targetList;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_33 = V_0;
		return L_33;
	}
}
// System.Void Model::OnKilled(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_OnKilled_m9543EB52E5961420FF9FC5237E31DEC905E998F3 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_0 = NULL;
	Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_2 = NULL;
	Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* V_3 = NULL;
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* G_B3_0 = NULL;
	bool G_B3_1 = false;
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* G_B6_0 = NULL;
	{
		// Target killed = (Target)source;
		RuntimeObject* L_0 = ___source0;
		V_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)CastclassClass((RuntimeObject*)L_0, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_il2cpp_TypeInfo_var));
		// bool team = killed.GetTeam();
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_1 = V_0;
		bool L_2;
		L_2 = Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A_inline(L_1, NULL);
		// (team ? team2TargetsAlife : team1TargetsAlife).Remove(killed);
		bool L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_4 = __this->___team1TargetsAlife_4;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_5 = __this->___team2TargetsAlife_5;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_6 = V_0;
		bool L_7;
		L_7 = List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95(G_B3_0, L_6, List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95_RuntimeMethod_var);
		// List<Target> toUpdate = team ? team1TargetsAlife : team2TargetsAlife;
		if (G_B3_1)
		{
			goto IL_002f;
		}
	}
	{
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_8 = __this->___team2TargetsAlife_5;
		G_B6_0 = L_8;
		goto IL_0035;
	}

IL_002f:
	{
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_9 = __this->___team1TargetsAlife_4;
		G_B6_0 = L_9;
	}

IL_0035:
	{
		// foreach (Target t in toUpdate) {
		Enumerator_t3EDDED8F70691E2C8266ACE8C9ADA27A763EBC41 L_10;
		L_10 = List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE(G_B6_0, List_1_GetEnumerator_mA71C155C29E5E12F8F70266D52CD25EC8880DBCE_RuntimeMethod_var);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA((&V_1), Enumerator_Dispose_m8F7A8781192A1BD3E1F73F78C66D700690E3C2DA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_003d_1:
			{
				// foreach (Target t in toUpdate) {
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_11;
				L_11 = Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_inline((&V_1), Enumerator_get_Current_mD8DEC0A25D1C9522ED63CED783B0B798EF241CDB_RuntimeMethod_var);
				V_2 = L_11;
				// if (t.Equals(source)) continue;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_12 = V_2;
				RuntimeObject* L_13 = ___source0;
				bool L_14;
				L_14 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_13);
				if (L_14)
				{
					goto IL_007d_1;
				}
			}
			{
				// if (t is Entity)
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_15 = V_2;
				if (!((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)IsInstClass((RuntimeObject*)L_15, Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var)))
				{
					goto IL_007d_1;
				}
			}
			{
				// Entity entity = (Entity)t;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_16 = V_2;
				V_3 = ((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)CastclassClass((RuntimeObject*)L_16, Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC_il2cpp_TypeInfo_var));
				// if (entity.GetDestination().Equals(killed)) {
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_17 = V_3;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_18;
				L_18 = Entity_GetDestination_m4E3DC39182E1EDF73117B389C29D3778EE8AB589_inline(L_17, NULL);
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_19 = V_0;
				bool L_20;
				L_20 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_18, L_19);
				if (!L_20)
				{
					goto IL_007d_1;
				}
			}
			{
				// entity.RecalculateDestination();
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_21 = V_3;
				Entity_RecalculateDestination_m4CBB15735E303D700C29672FDF031FADB0103E06(L_21, NULL);
				// entity.StopAttack();
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_22 = V_3;
				Entity_StopAttack_m5C9D8616E6CB7EBF41A7FA8824A8A843FF808EF1(L_22, NULL);
				// entity.EnableAgent();
				Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* L_23 = V_3;
				Entity_EnableAgent_m34D2E096F7C74199EEC9A763C45826E9700F2E4B(L_23, NULL);
			}

IL_007d_1:
			{
				// foreach (Target t in toUpdate) {
				bool L_24;
				L_24 = Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145((&V_1), Enumerator_MoveNext_mFD81026559F33D19C6FBD3E79D76B6C22A4E1145_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void Model::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_Update_mEAF0CB7F5465704F773847CBB369E4E88A5AA475 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Model::AddTarget(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_AddTarget_m3069FD56359083A84427B590FB0ED463C09953A4 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (t.GetTeam() == false) team1TargetsAlife.Add(t);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___t0;
		bool L_1;
		L_1 = Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (t.GetTeam() == false) team1TargetsAlife.Add(t);
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_2 = __this->___team1TargetsAlife_4;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_3 = ___t0;
		List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline(L_2, L_3, List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
	}

IL_0014:
	{
		// if (t.GetTeam() == true) team2TargetsAlife.Add(t);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_4 = ___t0;
		bool L_5;
		L_5 = Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// if (t.GetTeam() == true) team2TargetsAlife.Add(t);
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_6 = __this->___team2TargetsAlife_5;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = ___t0;
		List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline(L_6, L_7, List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Model::SpawnTarget(Card,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_SpawnTarget_mDF34BDC6C4C8231C97CF77FF9C078452B0BAAEF1 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* ___info0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, bool ___team2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mBE3B62BAED86D27C28E11AD45D1744E5FE529438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (elixirBar.ReduceElixir(info.elexCost))
		ElixirBar_tB23332D82FEA14904FCF6593C34F113A515296DC* L_0 = __this->___elixirBar_11;
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_1 = ___info0;
		int32_t L_2 = L_1->___elexCost_8;
		bool L_3;
		L_3 = ElixirBar_ReduceElixir_m0FAE77CA175C6A07FEB048A7F7556E4A078B8A47(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// Instantiate(info.fighter, pos, Quaternion.Euler(0, 0, 0), targetParent).GetComponent<Target>().Setup(team);
		Card_tD9ACBC81F2B9DB3C989D8CED3893B4EF3891967A* L_4 = ___info0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___fighter_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___pos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___targetParent_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_5, L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_10;
		L_10 = GameObject_GetComponent_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mBE3B62BAED86D27C28E11AD45D1744E5FE529438(L_9, GameObject_GetComponent_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mBE3B62BAED86D27C28E11AD45D1744E5FE529438_RuntimeMethod_var);
		bool L_11 = ___team2;
		Target_Setup_m6501D87EC2BE71E59492BFDE025D54D4C12A7B9F(L_10, L_11, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Model::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model__ctor_m51658BDC1D62600A78A02604053D283ED4AA9E92 (Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Target> team1TargetsAlife = new List<Target>();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_0 = (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*)il2cpp_codegen_object_new(List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F(L_0, List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		__this->___team1TargetsAlife_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___team1TargetsAlife_4), (void*)L_0);
		// public List<Target> team2TargetsAlife = new List<Target>();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_1 = (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*)il2cpp_codegen_object_new(List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F(L_1, List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		__this->___team2TargetsAlife_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___team2TargetsAlife_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TargetScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetScriptableObject__ctor_mCA3D4CE7E4FC0019837F6C4D8E772C874DC4328B (TargetScriptableObject_t7258AD6D225CD658166F7BEA6EAB875C4EB2B4A4* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Target::add_Killed(Target/KilledEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_add_Killed_m7CDE22B2D7BC8A7E3A1589980925C49FA98385D6 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* V_0 = NULL;
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* V_1 = NULL;
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* V_2 = NULL;
	{
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_0 = __this->___Killed_13;
		V_0 = L_0;
	}

IL_0007:
	{
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_1 = V_0;
		V_1 = L_1;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_2 = V_1;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)CastclassSealed((RuntimeObject*)L_4, KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var));
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3** L_5 = (&__this->___Killed_13);
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_6 = V_2;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_7 = V_1;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_9 = V_0;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)L_9) == ((RuntimeObject*)(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Target::remove_Killed(Target/KilledEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_remove_Killed_mA27EA798F5A4F6D6E59DEB211F173707FFA0244E (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* V_0 = NULL;
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* V_1 = NULL;
	KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* V_2 = NULL;
	{
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_0 = __this->___Killed_13;
		V_0 = L_0;
	}

IL_0007:
	{
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_1 = V_0;
		V_1 = L_1;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_2 = V_1;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)CastclassSealed((RuntimeObject*)L_4, KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var));
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3** L_5 = (&__this->___Killed_13);
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_6 = V_2;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_7 = V_1;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_9 = V_0;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)L_9) == ((RuntimeObject*)(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Target::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_Start_m16382B4F9DED70B5E55EC0FC7854F97E4FEFE6A5 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_m6CE4F63F57541DD381F1A6167E2C6C07E43ADE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_1 = NULL;
	{
		// maxHp = 100; // TODO
		__this->___maxHp_5 = ((int32_t)100);
		// hp = 100;
		__this->___hp_4 = ((int32_t)100);
		// model = GameObject.Find("Model").GetComponent<Model>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319, NULL);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_1;
		L_1 = GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170(L_0, GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170_RuntimeMethod_var);
		__this->___model_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_8), (void*)L_1);
		// canvas = Resources.Load<GameObject>("Canvas");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		__this->___canvas_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_10), (void*)L_2);
		// GameObject instant = Instantiate(canvas, transform.position, transform.rotation, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___canvas_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_3, L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_0 = L_9;
		// BoxCollider boxCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10;
		L_10 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		V_1 = L_10;
		// instant.GetComponent<RectTransform>().position+=Vector3.up * boxCollider.size.y * 1.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_11, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_16, NULL);
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (1.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_20, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_21, NULL);
		// healthBar = instant.transform.Find("Healthbar").GetComponent<HealthBar>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_23, _stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886, NULL);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_25;
		L_25 = Component_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_m6CE4F63F57541DD381F1A6167E2C6C07E43ADE54(L_24, Component_GetComponent_TisHealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA_m6CE4F63F57541DD381F1A6167E2C6C07E43ADE54_RuntimeMethod_var);
		__this->___healthBar_9 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthBar_9), (void*)L_25);
		// healthBar.Setup(maxHp);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_26 = __this->___healthBar_9;
		int32_t L_27 = __this->___maxHp_5;
		HealthBar_Setup_mA319684B56F9F315B3341DFA946EB791A9BE3E2B(L_26, ((float)L_27), NULL);
		// TargetStart();
		VirtualActionInvoker0::Invoke(5 /* System.Void Target::TargetStart() */, __this);
		// }
		return;
	}
}
// System.Boolean Target::GetTeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return team;
		bool L_0 = __this->___team_6;
		return L_0;
	}
}
// System.Int32 Target::GetHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Target_GetHP_mB813B81CA965EB951ECECD5FA067B4CC9A6473DA (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return hp;
		int32_t L_0 = __this->___hp_4;
		return L_0;
	}
}
// System.Void Target::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_TakeDamage_m6108CEE6109172999D49138B4217DD7034A6F962 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, int32_t ___damage0, const RuntimeMethod* method) 
{
	{
		// hp -= damage;
		int32_t L_0 = __this->___hp_4;
		int32_t L_1 = ___damage0;
		__this->___hp_4 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// healthBar.TakeDamage(damage);
		HealthBar_t16FCB4D24034E750B0152144EC1371F4494A95FA* L_2 = __this->___healthBar_9;
		int32_t L_3 = ___damage0;
		HealthBar_TakeDamage_m6284A559EEE3A5477FF2868DDCC41D1EB4215314(L_2, ((float)L_3), NULL);
		// if (hp < 0 && !killed) Kill();
		int32_t L_4 = __this->___hp_4;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		bool L_5 = __this->___killed_14;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		// if (hp < 0 && !killed) Kill();
		Target_Kill_mE60A14FAE095283D3A0AA025D8AB135044AF5F12(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Boolean Target::IsInAir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Target_IsInAir_m5DEA86BDCCCC47CAD77777425F714E5AD0F890BA (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return isInAir;
		bool L_0 = __this->___isInAir_7;
		return L_0;
	}
}
// UnityEngine.Transform Target::GetAttackPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return attackPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___attackPoint_12;
		return L_0;
	}
}
// System.Void Target::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_Kill_mE60A14FAE095283D3A0AA025D8AB135044AF5F12 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(deathEffect, transform.position, transform.rotation);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___deathEffect_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5;
		L_5 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_0, L_2, L_4, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		// OnKilled();
		VirtualActionInvoker0::Invoke(4 /* System.Void Target::OnKilled() */, __this);
		// killed = true;
		__this->___killed_14 = (bool)1;
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return;
	}
}
// System.Void Target::OnKilled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_OnKilled_m7597DD23C7D7CC13264E04C729A884B0A47E2C1C (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Killed != null)
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_0 = __this->___Killed_13;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Killed(this, EventArgs.Empty);
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_1 = __this->___Killed_13;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_inline(L_1, __this, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Target::Setup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target_Setup_m6501D87EC2BE71E59492BFDE025D54D4C12A7B9F (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, bool ___team0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Model_OnKilled_m9543EB52E5961420FF9FC5237E31DEC905E998F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model = GameObject.Find("Model").GetComponent<Model>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319, NULL);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_1;
		L_1 = GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170(L_0, GameObject_GetComponent_TisModel_t16965B77731155D141BDA701CA9E9DEACEF2ADED_mCC0A7315DBFD73292A2D38203D63E9D1CD2A9170_RuntimeMethod_var);
		__this->___model_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_8), (void*)L_1);
		// this.team = team;
		bool L_2 = ___team0;
		__this->___team_6 = L_2;
		// model.AddTarget(this);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_3 = __this->___model_8;
		Model_AddTarget_m3069FD56359083A84427B590FB0ED463C09953A4(L_3, __this, NULL);
		// Killed += model.OnKilled;
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_4 = __this->___model_8;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_5 = (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)il2cpp_codegen_object_new(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var);
		KilledEventHandler__ctor_m9FEEEF9F925D5BDB05834647CC99D3E6144D7757(L_5, L_4, (intptr_t)((void*)Model_OnKilled_m9543EB52E5961420FF9FC5237E31DEC905E998F3_RuntimeMethod_var), NULL);
		Target_add_Killed_m7CDE22B2D7BC8A7E3A1589980925C49FA98385D6(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_Multicast(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* currentDelegate = reinterpret_cast<KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___source0, ___args1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenInst(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___source0, ___args1, method);
}
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenStatic(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___source0, ___args1, method);
}
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenVirtual(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(il2cpp_codegen_method_get_slot(method), ___source0, ___args1);
}
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenInterface(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___source0, ___args1);
}
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenGenericVirtual(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(method, ___source0, ___args1);
}
void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenGenericInterface(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(method, ___source0, ___args1);
}
// System.Void Target/KilledEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledEventHandler__ctor_m9FEEEF9F925D5BDB05834647CC99D3E6144D7757 (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_Multicast;
}
// System.Void Target/KilledEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6 (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___source0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Target/KilledEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KilledEventHandler_BeginInvoke_m98A6CA48F66210B0DAF20E3FFAB43747AE548731 (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Target/KilledEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledEventHandler_EndInvoke_m34509CF4574B3A3A5B14D31AF28576C7C151A35C (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tower::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_OnEnable_m12B7F4CEAE544FE01B8EF63A903AE2D161238F39 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Tower::RecalculateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_RecalculateDestination_m01C92EE6DB2A0D22E3D6CB00DC253C901A3E98CC (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	{
		// target = model.GetNearestTargetFrom(this);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_0 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___model_8;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_1;
		L_1 = Model_GetNearestTargetFrom_mA6B84E2C4F5E3A403CD8BEA3C42DA024322D3432(L_0, __this, NULL);
		__this->___target_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.IEnumerator Tower::CalulateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_CalulateDestination_mCC0BE82C1E6E8155A590A1F3F6928BF646AE0C00 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* L_0 = (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62*)il2cpp_codegen_object_new(U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62_il2cpp_TypeInfo_var);
		U3CCalulateDestinationU3Ed__8__ctor_m7ECBEA0C6A8770B714E0BB592F1C06F0161BDDB9(L_0, 0, NULL);
		U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Tower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Update_mF0E8AA55D0906C473D7D69C5D8C143B003286450 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null || Vector3.Distance(attackPoint.position, target.GetAttackPoint().position) > range)
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = __this->___target_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___attackPoint_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_4 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_6, NULL);
		float L_8 = __this->___range_20;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// timer -= Time.deltaTime;
		float L_9 = __this->___timer_18;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_18 = ((float)il2cpp_codegen_subtract(L_9, L_10));
		// if (timer <= 0f)
		float L_11 = __this->___timer_18;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		// ShootBullet();
		Tower_ShootBullet_m020BB76C4265C223303042DF023D58C09E780E1C(__this, NULL);
		// timer = cooldown;
		__this->___timer_18 = (1.0f);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Tower::ShootBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_ShootBullet_m020BB76C4265C223303042DF023D58C09E780E1C (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m609588111E70F00D5F37D685BDFABE4C42D0B601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject shot = Instantiate(bullet, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bullet_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// shot.GetComponent<Bullet>().SetupBullet(target.GetAttackPoint().position);
		Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* L_6;
		L_6 = GameObject_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m609588111E70F00D5F37D685BDFABE4C42D0B601(L_5, GameObject_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m609588111E70F00D5F37D685BDFABE4C42D0B601_RuntimeMethod_var);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Bullet_SetupBullet_m396511521011EECE519AF1328573D3CB9C190571(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Int32 Tower::GetId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tower_GetId_mBE786DD14CB49D4E11E63FF9FEEBE6DAF170FAF5 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		int32_t L_0 = __this->___id_15;
		return L_0;
	}
}
// System.Void Tower::TargetStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_TargetStart_mB809929EC6AC7C676BC7DF06A62AE535537EF9A7 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Model_OnKilled_m9543EB52E5961420FF9FC5237E31DEC905E998F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE338D1B4E5DD1E52B063CA4C0941E0717E088F60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attackPoint = transform.Find("AttackPoint").transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralE338D1B4E5DD1E52B063CA4C0941E0717E088F60, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___attackPoint_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___attackPoint_12), (void*)L_2);
		// model.AddTarget(this);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_3 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___model_8;
		Model_AddTarget_m3069FD56359083A84427B590FB0ED463C09953A4(L_3, __this, NULL);
		// Killed += model.OnKilled;
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_4 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___model_8;
		KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* L_5 = (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3*)il2cpp_codegen_object_new(KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3_il2cpp_TypeInfo_var);
		KilledEventHandler__ctor_m9FEEEF9F925D5BDB05834647CC99D3E6144D7757(L_5, L_4, (intptr_t)((void*)Model_OnKilled_m9543EB52E5961420FF9FC5237E31DEC905E998F3_RuntimeMethod_var), NULL);
		Target_add_Killed_m7CDE22B2D7BC8A7E3A1589980925C49FA98385D6(__this, L_5, NULL);
		// target = model.GetNearestTargetFrom(this);
		Model_t16965B77731155D141BDA701CA9E9DEACEF2ADED* L_6 = ((Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)__this)->___model_8;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7;
		L_7 = Model_GetNearestTargetFrom_mA6B84E2C4F5E3A403CD8BEA3C42DA024322D3432(L_6, __this, NULL);
		__this->___target_16 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_7);
		// StartCoroutine(CalulateDestination());
		RuntimeObject* L_8;
		L_8 = Tower_CalulateDestination_mCC0BE82C1E6E8155A590A1F3F6928BF646AE0C00(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Tower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower__ctor_m1DDECE451BF98AEDFB7520FFBA14FB8D89DB0A80 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	{
		// private float timer = cooldown;
		__this->___timer_18 = (1.0f);
		// private float range = 10f;
		__this->___range_20 = (10.0f);
		Building__ctor_m1966393898763C921095D832800266FB5532893F(__this, NULL);
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
// System.Void Tower/<CalulateDestination>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__8__ctor_m7ECBEA0C6A8770B714E0BB592F1C06F0161BDDB9 (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Tower/<CalulateDestination>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__8_System_IDisposable_Dispose_m690EEF535A3F4660D1AE1D943512F979EFEC40E1 (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Tower/<CalulateDestination>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCalulateDestinationU3Ed__8_MoveNext_mEBADEFD05B8B5FBB7F41AB5BB500B7B1E121A537 (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0046;
	}

IL_0020:
	{
		// RecalculateDestination();
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_4 = V_1;
		Tower_RecalculateDestination_m01C92EE6DB2A0D22E3D6CB00DC253C901A3E98CC(L_4, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0046:
	{
		// while (isActiveAndEnabled)
		Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* L_6 = V_1;
		bool L_7;
		L_7 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_6, NULL);
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Tower/<CalulateDestination>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalulateDestinationU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA6E635000C6722B23FEF263E089DD6027D9953EC (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Tower/<CalulateDestination>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalulateDestinationU3Ed__8_System_Collections_IEnumerator_Reset_mFB7DC96372EA5072FBBF5FA636CCC96BD83ACBE1 (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCalulateDestinationU3Ed__8_System_Collections_IEnumerator_Reset_mFB7DC96372EA5072FBBF5FA636CCC96BD83ACBE1_RuntimeMethod_var)));
	}
}
// System.Object Tower/<CalulateDestination>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalulateDestinationU3Ed__8_System_Collections_IEnumerator_get_Current_m89C04DEA21F5847269430B24CF1B4BB8FBB143A1 (U3CCalulateDestinationU3Ed__8_t099677D0151DB2D133A157A87783ED31A5DDDA62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EnvMapAnimator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvMapAnimator_Awake_m1D86ECDDD4A7A6DF98748B11BAC74D2D3B2F9435 (EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_textMeshPro = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_textMeshPro_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textMeshPro_5), (void*)L_0);
		// m_material = m_textMeshPro.fontSharedMaterial;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_textMeshPro_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(67 /* UnityEngine.Material TMPro.TMP_Text::get_fontSharedMaterial() */, L_1);
		__this->___m_material_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_material_6), (void*)L_2);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnvMapAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvMapAnimator_Start_mB8A6567BB58BDFD0FC70980AFA952748DF1E80E9 (EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* L_0 = (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557*)il2cpp_codegen_object_new(U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557_il2cpp_TypeInfo_var);
		U3CStartU3Ed__4__ctor_m432062D94FDEF42B01FAB69EBC06A4D137C525C2(L_0, 0, NULL);
		U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EnvMapAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvMapAnimator__ctor_m465E8527E49D1AA672A9A8A3B96FE78C24D11138 (EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnvMapAnimator/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m432062D94FDEF42B01FAB69EBC06A4D137C525C2 (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnvMapAnimator/<Start>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_IDisposable_Dispose_m8088B5A404D1CB754E73D37137F9A288E47E7E9C (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnvMapAnimator/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__4_MoveNext_mF689BF83350416D2071533C92042BF12AC52F0C0 (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A7E77DB84E1908153085B0037B2757EFD9E6B67);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Matrix4x4 matrix = new Matrix4x4();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = (&__this->___U3CmatrixU3E5__2_3);
		il2cpp_codegen_initobj(L_4, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
	}

IL_002d:
	{
		// matrix.SetTRS(Vector3.zero, Quaternion.Euler(Time.time * RotationSpeeds.x, Time.time * RotationSpeeds.y , Time.time * RotationSpeeds.z), Vector3.one);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5 = (&__this->___U3CmatrixU3E5__2_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___RotationSpeeds_4);
		float L_10 = L_9->___x_2;
		float L_11;
		L_11 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&L_12->___RotationSpeeds_4);
		float L_14 = L_13->___y_3;
		float L_15;
		L_15 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&L_16->___RotationSpeeds_4);
		float L_18 = L_17->___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(L_7, L_10)), ((float)il2cpp_codegen_multiply(L_11, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_18)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_SetTRS_m8002A569FE81574DABE86044C8FF6F7C44DA21AA(L_5, L_6, L_19, L_20, NULL);
		// m_material.SetMatrix("_EnvMatrix", matrix);
		EnvMapAnimator_tFBDB01D5863979E446E8FF4A3A9C1EA6933D38DB* L_21 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___m_material_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23 = __this->___U3CmatrixU3E5__2_3;
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_22, _stringLiteral9A7E77DB84E1908153085B0037B2757EFD9E6B67, L_23, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_002d;
	}
}
// System.Object EnvMapAnimator/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA3CCB9B113B234F43186B26439E10AD6609DD565 (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnvMapAnimator/<Start>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m3EF23BF40634D4262D8A2AE3DB14140FEFB4BF52 (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m3EF23BF40634D4262D8A2AE3DB14140FEFB4BF52_RuntimeMethod_var)));
	}
}
// System.Object EnvMapAnimator/<Start>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_mB1C119A46A09AD8F0D4DE964F6B335BE2A460FAA (U3CStartU3Ed__4_t7AF0F1ABA8D3AE9575A02603D2DC2137FA816557* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Target_GetAttackPoint_m8CEC205C254AF5B4CFCD80510B05DAC9AF39D27F_inline (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return attackPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___attackPoint_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Target_GetTeam_m8649522D9D2DF327FE0E7F6FAE785F93F6391A0A_inline (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return team;
		bool L_0 = __this->___team_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Target_IsInAir_m5DEA86BDCCCC47CAD77777425F714E5AD0F890BA_inline (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		// return isInAir;
		bool L_0 = __this->___isInAir_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* Entity_GetDestination_m4E3DC39182E1EDF73117B389C29D3778EE8AB589_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// return destination;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = __this->___destination_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KilledEventHandler_Invoke_m6F370BD8FBBB3F97BD3F92C9B71BB8DB64638DF6_inline (KilledEventHandler_t27F8B1B28FF11CC8357CC7AACA90803573135EB3* __this, RuntimeObject* ___source0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___source0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
