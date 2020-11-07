// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_input_gamepad_id_SwitchJoyconLeftID
#define INCLUDED_flixel_input_gamepad_id_SwitchJoyconLeftID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,SwitchJoyconLeftID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES SwitchJoyconLeftID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SwitchJoyconLeftID_obj OBJ_;
		SwitchJoyconLeftID_obj();

	public:
		enum { _hx_ClassId = 0x1bb93172 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.SwitchJoyconLeftID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.SwitchJoyconLeftID"); }

		inline static ::hx::ObjectPtr< SwitchJoyconLeftID_obj > __new() {
			::hx::ObjectPtr< SwitchJoyconLeftID_obj > __this = new SwitchJoyconLeftID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SwitchJoyconLeftID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SwitchJoyconLeftID_obj *__this = (SwitchJoyconLeftID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchJoyconLeftID_obj), false, "flixel.input.gamepad.id.SwitchJoyconLeftID"));
			*(void **)__this = SwitchJoyconLeftID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SwitchJoyconLeftID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SwitchJoyconLeftID",24,8f,85,7b); }

		static void __boot();
		static int ZL;
		static int DOWN;
		static int RIGHT;
		static int LEFT;
		static int UP;
		static int L;
		static int MINUS;
		static int LEFT_STICK_CLICK;
		static int SL;
		static int SR;
		static int CAPTURE;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_SwitchJoyconLeftID */ 
