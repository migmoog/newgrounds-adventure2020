// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers
#include <lime/graphics/opengl/ext/EXT_shadow_samplers.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21ea11ad88c3ea67_4_new,"lime.graphics.opengl.ext.EXT_shadow_samplers","new",0x0292977c,"lime.graphics.opengl.ext.EXT_shadow_samplers.new","lime/graphics/opengl/ext/EXT_shadow_samplers.hx",4,0x5ea25d96)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_shadow_samplers_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_21ea11ad88c3ea67_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(   9)		this->SAMPLER_2D_SHADOW_EXT = 35682;
HXLINE(   8)		this->COMPARE_REF_TO_TEXTURE_EXT = 34894;
HXLINE(   7)		this->TEXTURE_COMPARE_FUNC_EXT = 34893;
HXLINE(   6)		this->TEXTURE_COMPARE_MODE_EXT = 34892;
            	}

Dynamic EXT_shadow_samplers_obj::__CreateEmpty() { return new EXT_shadow_samplers_obj; }

void *EXT_shadow_samplers_obj::_hx_vtable = 0;

Dynamic EXT_shadow_samplers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_shadow_samplers_obj > _hx_result = new EXT_shadow_samplers_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_shadow_samplers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47639066;
}


EXT_shadow_samplers_obj::EXT_shadow_samplers_obj()
{
}

::hx::Val EXT_shadow_samplers_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_SHADOW_EXT") ) { return ::hx::Val( SAMPLER_2D_SHADOW_EXT ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_MODE_EXT") ) { return ::hx::Val( TEXTURE_COMPARE_MODE_EXT ); }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_FUNC_EXT") ) { return ::hx::Val( TEXTURE_COMPARE_FUNC_EXT ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPARE_REF_TO_TEXTURE_EXT") ) { return ::hx::Val( COMPARE_REF_TO_TEXTURE_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_shadow_samplers_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"SAMPLER_2D_SHADOW_EXT") ) { SAMPLER_2D_SHADOW_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_MODE_EXT") ) { TEXTURE_COMPARE_MODE_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPARE_FUNC_EXT") ) { TEXTURE_COMPARE_FUNC_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPARE_REF_TO_TEXTURE_EXT") ) { COMPARE_REF_TO_TEXTURE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_shadow_samplers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("TEXTURE_COMPARE_MODE_EXT",e3,97,18,c1));
	outFields->push(HX_("TEXTURE_COMPARE_FUNC_EXT",44,b4,fc,02));
	outFields->push(HX_("COMPARE_REF_TO_TEXTURE_EXT",3f,0b,e1,ff));
	outFields->push(HX_("SAMPLER_2D_SHADOW_EXT",18,8f,28,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_shadow_samplers_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,TEXTURE_COMPARE_MODE_EXT),HX_("TEXTURE_COMPARE_MODE_EXT",e3,97,18,c1)},
	{::hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,TEXTURE_COMPARE_FUNC_EXT),HX_("TEXTURE_COMPARE_FUNC_EXT",44,b4,fc,02)},
	{::hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,COMPARE_REF_TO_TEXTURE_EXT),HX_("COMPARE_REF_TO_TEXTURE_EXT",3f,0b,e1,ff)},
	{::hx::fsInt,(int)offsetof(EXT_shadow_samplers_obj,SAMPLER_2D_SHADOW_EXT),HX_("SAMPLER_2D_SHADOW_EXT",18,8f,28,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_shadow_samplers_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_shadow_samplers_obj_sMemberFields[] = {
	HX_("TEXTURE_COMPARE_MODE_EXT",e3,97,18,c1),
	HX_("TEXTURE_COMPARE_FUNC_EXT",44,b4,fc,02),
	HX_("COMPARE_REF_TO_TEXTURE_EXT",3f,0b,e1,ff),
	HX_("SAMPLER_2D_SHADOW_EXT",18,8f,28,f9),
	::String(null()) };

::hx::Class EXT_shadow_samplers_obj::__mClass;

void EXT_shadow_samplers_obj::__register()
{
	EXT_shadow_samplers_obj _hx_dummy;
	EXT_shadow_samplers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_shadow_samplers",8a,69,a2,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_shadow_samplers_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_shadow_samplers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_shadow_samplers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_shadow_samplers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
