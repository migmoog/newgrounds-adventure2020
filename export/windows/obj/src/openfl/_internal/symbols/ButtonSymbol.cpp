// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_SWFLite
#include <openfl/_internal/formats/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_ButtonSymbol
#include <openfl/_internal/symbols/ButtonSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_906043296d6f2c53_20_new,"openfl._internal.symbols.ButtonSymbol","new",0x02e216df,"openfl._internal.symbols.ButtonSymbol.new","openfl/_internal/symbols/ButtonSymbol.hx",20,0xd0678f8e)
HX_LOCAL_STACK_FRAME(_hx_pos_906043296d6f2c53_24___createObject,"openfl._internal.symbols.ButtonSymbol","__createObject",0x5a781ddc,"openfl._internal.symbols.ButtonSymbol.__createObject","openfl/_internal/symbols/ButtonSymbol.hx",24,0xd0678f8e)
namespace openfl{
namespace _internal{
namespace symbols{

void ButtonSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_906043296d6f2c53_20_new)
            	HX_STACK_THIS(this)
HXLINE(  20)
HXDLIN(  20)		super::__construct();
            	}

Dynamic ButtonSymbol_obj::__CreateEmpty() { return new ButtonSymbol_obj; }

void *ButtonSymbol_obj::_hx_vtable = 0;

Dynamic ButtonSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonSymbol_obj > _hx_result = new ButtonSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6ec9976b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6ec9976b;
	} else {
		return inClassId==(int)0x76db5459;
	}
}

 ::openfl::display::DisplayObject ButtonSymbol_obj::_hx___createObject( ::openfl::_internal::formats::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_906043296d6f2c53_24___createObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(swf,"swf")
HXLINE(  24)
HXLINE(  25)		HX_VARI(  ::openfl::display::SimpleButton,simpleButton) = null();
HXLINE(  27)		::openfl::display::SimpleButton_obj::_hx___initSWF = swf;
HXLINE(  28)		::openfl::display::SimpleButton_obj::_hx___initSymbol = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  30)		if (::hx::IsNotNull( this->className )) {
HXLINE(  32)			HX_VARI( ::hx::Class,symbolType) = ::Type_obj::resolveClass(this->className);
HXLINE(  34)			if (::hx::IsNotNull( symbolType )) {
HXLINE(  36)				simpleButton = ( ( ::openfl::display::SimpleButton)(::Type_obj::createInstance(symbolType,::cpp::VirtualArray_obj::__new(0))) );
            			}
            		}
HXLINE(  44)		if (::hx::IsNull( simpleButton )) {
HXLINE(  46)			simpleButton =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  49)		return simpleButton;
            	}



::hx::ObjectPtr< ButtonSymbol_obj > ButtonSymbol_obj::__new() {
	::hx::ObjectPtr< ButtonSymbol_obj > __this = new ButtonSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ButtonSymbol_obj > ButtonSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ButtonSymbol_obj *__this = (ButtonSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonSymbol_obj), true, "openfl._internal.symbols.ButtonSymbol"));
	*(void **)__this = ButtonSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonSymbol_obj::ButtonSymbol_obj()
{
}

void ButtonSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonSymbol);
	HX_MARK_MEMBER_NAME(downState,"downState");
	HX_MARK_MEMBER_NAME(hitState,"hitState");
	HX_MARK_MEMBER_NAME(overState,"overState");
	HX_MARK_MEMBER_NAME(upState,"upState");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downState,"downState");
	HX_VISIT_MEMBER_NAME(hitState,"hitState");
	HX_VISIT_MEMBER_NAME(overState,"overState");
	HX_VISIT_MEMBER_NAME(upState,"upState");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { return ::hx::Val( upState ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitState") ) { return ::hx::Val( hitState ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { return ::hx::Val( downState ); }
		if (HX_FIELD_EQ(inName,"overState") ) { return ::hx::Val( overState ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"upState") ) { upState=inValue.Cast<  ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitState") ) { hitState=inValue.Cast<  ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { downState=inValue.Cast<  ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overState") ) { overState=inValue.Cast<  ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("downState",4f,4a,21,9a));
	outFields->push(HX_("hitState",be,d2,6a,c3));
	outFields->push(HX_("overState",1d,04,cd,e7));
	outFields->push(HX_("upState",b6,95,80,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_internal::symbols::SpriteSymbol */ ,(int)offsetof(ButtonSymbol_obj,downState),HX_("downState",4f,4a,21,9a)},
	{::hx::fsObject /*  ::openfl::_internal::symbols::SpriteSymbol */ ,(int)offsetof(ButtonSymbol_obj,hitState),HX_("hitState",be,d2,6a,c3)},
	{::hx::fsObject /*  ::openfl::_internal::symbols::SpriteSymbol */ ,(int)offsetof(ButtonSymbol_obj,overState),HX_("overState",1d,04,cd,e7)},
	{::hx::fsObject /*  ::openfl::_internal::symbols::SpriteSymbol */ ,(int)offsetof(ButtonSymbol_obj,upState),HX_("upState",b6,95,80,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonSymbol_obj_sMemberFields[] = {
	HX_("downState",4f,4a,21,9a),
	HX_("hitState",be,d2,6a,c3),
	HX_("overState",1d,04,cd,e7),
	HX_("upState",b6,95,80,e0),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

::hx::Class ButtonSymbol_obj::__mClass;

void ButtonSymbol_obj::__register()
{
	ButtonSymbol_obj _hx_dummy;
	ButtonSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.ButtonSymbol",6d,bb,7f,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
