// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxGamepadAttachment FlxGamepadAttachment_obj::NONE;

::flixel::input::gamepad::FlxGamepadAttachment FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER;

::flixel::input::gamepad::FlxGamepadAttachment FlxGamepadAttachment_obj::WII_NUNCHUCK;

bool FlxGamepadAttachment_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = FlxGamepadAttachment_obj::NONE; return true; }
	if (inName==HX_("WII_CLASSIC_CONTROLLER",91,6b,e3,04)) { outValue = FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER; return true; }
	if (inName==HX_("WII_NUNCHUCK",b9,49,d3,63)) { outValue = FlxGamepadAttachment_obj::WII_NUNCHUCK; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxGamepadAttachment_obj)

int FlxGamepadAttachment_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return 2;
	if (inName==HX_("WII_CLASSIC_CONTROLLER",91,6b,e3,04)) return 1;
	if (inName==HX_("WII_NUNCHUCK",b9,49,d3,63)) return 0;
	return super::__FindIndex(inName);
}

int FlxGamepadAttachment_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("WII_CLASSIC_CONTROLLER",91,6b,e3,04)) return 0;
	if (inName==HX_("WII_NUNCHUCK",b9,49,d3,63)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxGamepadAttachment_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("WII_CLASSIC_CONTROLLER",91,6b,e3,04)) return WII_CLASSIC_CONTROLLER;
	if (inName==HX_("WII_NUNCHUCK",b9,49,d3,63)) return WII_NUNCHUCK;
	return super::__Field(inName,inCallProp);
}

static ::String FlxGamepadAttachment_obj_sStaticFields[] = {
	HX_("WII_NUNCHUCK",b9,49,d3,63),
	HX_("WII_CLASSIC_CONTROLLER",91,6b,e3,04),
	HX_("NONE",b8,da,ca,33),
	::String(null())
};

::hx::Class FlxGamepadAttachment_obj::__mClass;

Dynamic __Create_FlxGamepadAttachment_obj() { return new FlxGamepadAttachment_obj; }

void FlxGamepadAttachment_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.input.gamepad.FlxGamepadAttachment",d5,99,0c,e9), ::hx::TCanCast< FlxGamepadAttachment_obj >,FlxGamepadAttachment_obj_sStaticFields,0,
	&__Create_FlxGamepadAttachment_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGamepadAttachment_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxGamepadAttachment_obj::__GetStatic;
}

void FlxGamepadAttachment_obj::__boot()
{
NONE = ::hx::CreateConstEnum< FlxGamepadAttachment_obj >(HX_("NONE",b8,da,ca,33),2);
WII_CLASSIC_CONTROLLER = ::hx::CreateConstEnum< FlxGamepadAttachment_obj >(HX_("WII_CLASSIC_CONTROLLER",91,6b,e3,04),1);
WII_NUNCHUCK = ::hx::CreateConstEnum< FlxGamepadAttachment_obj >(HX_("WII_NUNCHUCK",b9,49,d3,63),0);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
