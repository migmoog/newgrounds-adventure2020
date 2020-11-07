// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_MouseWheelMode
#include <lime/ui/MouseWheelMode.h>
#endif
namespace lime{
namespace ui{

::lime::ui::MouseWheelMode MouseWheelMode_obj::LINES;

::lime::ui::MouseWheelMode MouseWheelMode_obj::PAGES;

::lime::ui::MouseWheelMode MouseWheelMode_obj::PIXELS;

::lime::ui::MouseWheelMode MouseWheelMode_obj::UNKNOWN;

bool MouseWheelMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINES",df,15,f0,f2)) { outValue = MouseWheelMode_obj::LINES; return true; }
	if (inName==HX_("PAGES",24,63,3b,3b)) { outValue = MouseWheelMode_obj::PAGES; return true; }
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) { outValue = MouseWheelMode_obj::PIXELS; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = MouseWheelMode_obj::UNKNOWN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MouseWheelMode_obj)

int MouseWheelMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LINES",df,15,f0,f2)) return 1;
	if (inName==HX_("PAGES",24,63,3b,3b)) return 2;
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 3;
	return super::__FindIndex(inName);
}

int MouseWheelMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LINES",df,15,f0,f2)) return 0;
	if (inName==HX_("PAGES",24,63,3b,3b)) return 0;
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val MouseWheelMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINES",df,15,f0,f2)) return LINES;
	if (inName==HX_("PAGES",24,63,3b,3b)) return PAGES;
	if (inName==HX_("PIXELS",2d,9b,2c,3f)) return PIXELS;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String MouseWheelMode_obj_sStaticFields[] = {
	HX_("PIXELS",2d,9b,2c,3f),
	HX_("LINES",df,15,f0,f2),
	HX_("PAGES",24,63,3b,3b),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

::hx::Class MouseWheelMode_obj::__mClass;

Dynamic __Create_MouseWheelMode_obj() { return new MouseWheelMode_obj; }

void MouseWheelMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime.ui.MouseWheelMode",1a,08,21,1a), ::hx::TCanCast< MouseWheelMode_obj >,MouseWheelMode_obj_sStaticFields,0,
	&__Create_MouseWheelMode_obj, &__Create,
	&super::__SGetClass(), &CreateMouseWheelMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MouseWheelMode_obj::__GetStatic;
}

void MouseWheelMode_obj::__boot()
{
LINES = ::hx::CreateConstEnum< MouseWheelMode_obj >(HX_("LINES",df,15,f0,f2),1);
PAGES = ::hx::CreateConstEnum< MouseWheelMode_obj >(HX_("PAGES",24,63,3b,3b),2);
PIXELS = ::hx::CreateConstEnum< MouseWheelMode_obj >(HX_("PIXELS",2d,9b,2c,3f),0);
UNKNOWN = ::hx::CreateConstEnum< MouseWheelMode_obj >(HX_("UNKNOWN",6a,f7,4e,61),3);
}


} // end namespace lime
} // end namespace ui
