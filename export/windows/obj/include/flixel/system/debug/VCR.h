// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_system_debug_VCR
#define INCLUDED_flixel_system_debug_VCR

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebugger)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,VCR)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES VCR_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VCR_obj OBJ_;
		VCR_obj();

	public:
		enum { _hx_ClassId = 0x532e649d };

		void __construct( ::flixel::_hx_system::debug::FlxDebugger Debugger);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.VCR")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.VCR"); }
		static ::hx::ObjectPtr< VCR_obj > __new( ::flixel::_hx_system::debug::FlxDebugger Debugger);
		static ::hx::ObjectPtr< VCR_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::FlxDebugger Debugger);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VCR_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VCR",85,7c,41,00); }

		 ::openfl::text::TextField runtimeDisplay;
		Float runtime;
		bool manualPause;
		 ::flixel::_hx_system::ui::FlxSystemButton playbackToggleBtn;
		 ::flixel::_hx_system::ui::FlxSystemButton stepBtn;
		 ::flixel::_hx_system::ui::FlxSystemButton restartBtn;
		 ::flixel::_hx_system::ui::FlxSystemButton recordBtn;
		 ::flixel::_hx_system::ui::FlxSystemButton openBtn;
		void onManualPause();
		::Dynamic onManualPause_dyn();

		void onPause();
		::Dynamic onPause_dyn();

		void onResume();
		::Dynamic onResume_dyn();

		void onStep();
		::Dynamic onStep_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_VCR */ 
