// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_input_IFlxInput
#define INCLUDED_flixel_input_IFlxInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,IFlxInput)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES IFlxInput_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_justReleased)(); 
		static inline bool get_justReleased( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInput_obj *>(_hx_.mPtr->_hx_getInterface(0x52baf533)))->_hx_get_justReleased)();
		}
		bool (::hx::Object :: *_hx_get_released)(); 
		static inline bool get_released( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInput_obj *>(_hx_.mPtr->_hx_getInterface(0x52baf533)))->_hx_get_released)();
		}
		bool (::hx::Object :: *_hx_get_pressed)(); 
		static inline bool get_pressed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInput_obj *>(_hx_.mPtr->_hx_getInterface(0x52baf533)))->_hx_get_pressed)();
		}
		bool (::hx::Object :: *_hx_get_justPressed)(); 
		static inline bool get_justPressed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::input::IFlxInput_obj *>(_hx_.mPtr->_hx_getInterface(0x52baf533)))->_hx_get_justPressed)();
		}
};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_IFlxInput */ 
