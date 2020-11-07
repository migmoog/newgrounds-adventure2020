// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxBaseGamepadList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadButtonList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadButtonList_obj : public  ::flixel::input::gamepad::lists::FlxBaseGamepadList_obj
{
	public:
		typedef  ::flixel::input::gamepad::lists::FlxBaseGamepadList_obj super;
		typedef FlxGamepadButtonList_obj OBJ_;
		FlxGamepadButtonList_obj();

	public:
		enum { _hx_ClassId = 0x46c3c8b9 };

		void __construct(int status, ::flixel::input::gamepad::FlxGamepad gamepad);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadButtonList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.lists.FlxGamepadButtonList"); }
		static ::hx::ObjectPtr< FlxGamepadButtonList_obj > __new(int status, ::flixel::input::gamepad::FlxGamepad gamepad);
		static ::hx::ObjectPtr< FlxGamepadButtonList_obj > __alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::gamepad::FlxGamepad gamepad);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGamepadButtonList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGamepadButtonList",bf,2a,41,35); }

		bool get_A();
		::Dynamic get_A_dyn();

		bool get_B();
		::Dynamic get_B_dyn();

		bool get_X();
		::Dynamic get_X_dyn();

		bool get_Y();
		::Dynamic get_Y_dyn();

		bool get_LEFT_SHOULDER();
		::Dynamic get_LEFT_SHOULDER_dyn();

		bool get_RIGHT_SHOULDER();
		::Dynamic get_RIGHT_SHOULDER_dyn();

		bool get_BACK();
		::Dynamic get_BACK_dyn();

		bool get_START();
		::Dynamic get_START_dyn();

		bool get_LEFT_STICK_CLICK();
		::Dynamic get_LEFT_STICK_CLICK_dyn();

		bool get_RIGHT_STICK_CLICK();
		::Dynamic get_RIGHT_STICK_CLICK_dyn();

		bool get_GUIDE();
		::Dynamic get_GUIDE_dyn();

		bool get_DPAD_UP();
		::Dynamic get_DPAD_UP_dyn();

		bool get_DPAD_DOWN();
		::Dynamic get_DPAD_DOWN_dyn();

		bool get_DPAD_LEFT();
		::Dynamic get_DPAD_LEFT_dyn();

		bool get_DPAD_RIGHT();
		::Dynamic get_DPAD_RIGHT_dyn();

		bool get_LEFT_TRIGGER_BUTTON();
		::Dynamic get_LEFT_TRIGGER_BUTTON_dyn();

		bool get_RIGHT_TRIGGER_BUTTON();
		::Dynamic get_RIGHT_TRIGGER_BUTTON_dyn();

		bool get_LEFT_TRIGGER();
		::Dynamic get_LEFT_TRIGGER_dyn();

		bool get_RIGHT_TRIGGER();
		::Dynamic get_RIGHT_TRIGGER_dyn();

		bool get_LEFT_ANALOG_STICK();
		::Dynamic get_LEFT_ANALOG_STICK_dyn();

		bool get_RIGHT_ANALOG_STICK();
		::Dynamic get_RIGHT_ANALOG_STICK_dyn();

		bool get_DPAD();
		::Dynamic get_DPAD_dyn();

		bool get_TILT_PITCH();
		::Dynamic get_TILT_PITCH_dyn();

		bool get_TILT_ROLL();
		::Dynamic get_TILT_ROLL_dyn();

		bool get_POINTER_X();
		::Dynamic get_POINTER_X_dyn();

		bool get_POINTER_Y();
		::Dynamic get_POINTER_Y_dyn();

		bool get_EXTRA_0();
		::Dynamic get_EXTRA_0_dyn();

		bool get_EXTRA_1();
		::Dynamic get_EXTRA_1_dyn();

		bool get_EXTRA_2();
		::Dynamic get_EXTRA_2_dyn();

		bool get_EXTRA_3();
		::Dynamic get_EXTRA_3_dyn();

		bool get_LEFT_STICK_DIGITAL_UP();
		::Dynamic get_LEFT_STICK_DIGITAL_UP_dyn();

		bool get_LEFT_STICK_DIGITAL_RIGHT();
		::Dynamic get_LEFT_STICK_DIGITAL_RIGHT_dyn();

		bool get_LEFT_STICK_DIGITAL_DOWN();
		::Dynamic get_LEFT_STICK_DIGITAL_DOWN_dyn();

		bool get_LEFT_STICK_DIGITAL_LEFT();
		::Dynamic get_LEFT_STICK_DIGITAL_LEFT_dyn();

		bool get_RIGHT_STICK_DIGITAL_UP();
		::Dynamic get_RIGHT_STICK_DIGITAL_UP_dyn();

		bool get_RIGHT_STICK_DIGITAL_RIGHT();
		::Dynamic get_RIGHT_STICK_DIGITAL_RIGHT_dyn();

		bool get_RIGHT_STICK_DIGITAL_DOWN();
		::Dynamic get_RIGHT_STICK_DIGITAL_DOWN_dyn();

		bool get_RIGHT_STICK_DIGITAL_LEFT();
		::Dynamic get_RIGHT_STICK_DIGITAL_LEFT_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList */ 
