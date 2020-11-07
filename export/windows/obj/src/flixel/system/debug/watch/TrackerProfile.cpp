// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_045fa5a979169169_277_new,"flixel.system.debug.watch.TrackerProfile","new",0x3f8f952a,"flixel.system.debug.watch.TrackerProfile.new","flixel/system/debug/watch/Tracker.hx",277,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_045fa5a979169169_285_toString,"flixel.system.debug.watch.TrackerProfile","toString",0x9a236fa2,"flixel.system.debug.watch.TrackerProfile.toString","flixel/system/debug/watch/Tracker.hx",285,0x14368dcf)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void TrackerProfile_obj::__construct(::hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions){
            	HX_STACKFRAME(&_hx_pos_045fa5a979169169_277_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ObjectClass,"ObjectClass")
            	HX_STACK_ARG(Variables,"Variables")
            	HX_STACK_ARG(Extensions,"Extensions")
HXLINE( 277)
HXLINE( 278)		this->objectClass = ObjectClass;
HXLINE( 279)		this->variables = Variables;
HXLINE( 280)		this->extensions = Extensions;
            	}

Dynamic TrackerProfile_obj::__CreateEmpty() { return new TrackerProfile_obj; }

void *TrackerProfile_obj::_hx_vtable = 0;

Dynamic TrackerProfile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrackerProfile_obj > _hx_result = new TrackerProfile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TrackerProfile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ab81f28;
}

::String TrackerProfile_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_045fa5a979169169_285_toString)
            	HX_STACK_THIS(this)
HXLINE( 285)
HXLINE( 286)		 ::Dynamic value = this->variables;
HXDLIN( 286)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 286)		_this->label = HX_("variables",b7,e2,62,82);
HXDLIN( 286)		_this->value = value;
HXLINE( 287)		 ::Dynamic value1 = this->extensions;
HXDLIN( 287)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 287)		_this1->label = HX_("extensions",14,7c,70,89);
HXDLIN( 287)		_this1->value = value1;
HXLINE( 285)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrackerProfile_obj,toString,return )


::hx::ObjectPtr< TrackerProfile_obj > TrackerProfile_obj::__new(::hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions) {
	::hx::ObjectPtr< TrackerProfile_obj > __this = new TrackerProfile_obj();
	__this->__construct(ObjectClass,Variables,Extensions);
	return __this;
}

::hx::ObjectPtr< TrackerProfile_obj > TrackerProfile_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions) {
	TrackerProfile_obj *__this = (TrackerProfile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrackerProfile_obj), true, "flixel.system.debug.watch.TrackerProfile"));
	*(void **)__this = TrackerProfile_obj::_hx_vtable;
	__this->__construct(ObjectClass,Variables,Extensions);
	return __this;
}

TrackerProfile_obj::TrackerProfile_obj()
{
}

void TrackerProfile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrackerProfile);
	HX_MARK_MEMBER_NAME(objectClass,"objectClass");
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_END_CLASS();
}

void TrackerProfile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectClass,"objectClass");
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
}

::hx::Val TrackerProfile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return ::hx::Val( variables ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return ::hx::Val( extensions ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { return ::hx::Val( objectClass ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TrackerProfile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { objectClass=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrackerProfile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("objectClass",f9,94,87,b7));
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("extensions",14,7c,70,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrackerProfile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(TrackerProfile_obj,objectClass),HX_("objectClass",f9,94,87,b7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TrackerProfile_obj,variables),HX_("variables",b7,e2,62,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TrackerProfile_obj,extensions),HX_("extensions",14,7c,70,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrackerProfile_obj_sStaticStorageInfo = 0;
#endif

static ::String TrackerProfile_obj_sMemberFields[] = {
	HX_("objectClass",f9,94,87,b7),
	HX_("variables",b7,e2,62,82),
	HX_("extensions",14,7c,70,89),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class TrackerProfile_obj::__mClass;

void TrackerProfile_obj::__register()
{
	TrackerProfile_obj _hx_dummy;
	TrackerProfile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.watch.TrackerProfile",38,78,47,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrackerProfile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrackerProfile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrackerProfile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrackerProfile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
