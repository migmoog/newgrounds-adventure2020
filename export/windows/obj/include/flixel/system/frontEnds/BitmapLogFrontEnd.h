// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#define INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,BitmapLogFrontEnd)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES BitmapLogFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapLogFrontEnd_obj OBJ_;
		BitmapLogFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x799a5779 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.BitmapLogFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.frontEnds.BitmapLogFrontEnd"); }
		static ::hx::ObjectPtr< BitmapLogFrontEnd_obj > __new();
		static ::hx::ObjectPtr< BitmapLogFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapLogFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapLogFrontEnd",87,e7,7c,bb); }

		void add( ::openfl::display::BitmapData Data,::String Name);
		::Dynamic add_dyn();

		void clear();
		::Dynamic clear_dyn();

		void clearAt(::hx::Null< int >  Index);
		::Dynamic clearAt_dyn();

		void viewCache();
		::Dynamic viewCache_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd */ 
