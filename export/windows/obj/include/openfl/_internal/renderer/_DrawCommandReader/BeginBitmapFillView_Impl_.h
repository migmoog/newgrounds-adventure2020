// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginBitmapFillView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginBitmapFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,BeginBitmapFillView_Impl_)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES BeginBitmapFillView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BeginBitmapFillView_Impl__obj OBJ_;
		BeginBitmapFillView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x12aaafe6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.BeginBitmapFillView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.BeginBitmapFillView_Impl_"); }

		inline static ::hx::ObjectPtr< BeginBitmapFillView_Impl__obj > __new() {
			::hx::ObjectPtr< BeginBitmapFillView_Impl__obj > __this = new BeginBitmapFillView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BeginBitmapFillView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			BeginBitmapFillView_Impl__obj *__this = (BeginBitmapFillView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BeginBitmapFillView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.BeginBitmapFillView_Impl_"));
			*(void **)__this = BeginBitmapFillView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BeginBitmapFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BeginBitmapFillView_Impl_",20,66,b3,b0); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::display::BitmapData get_bitmap( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_bitmap_dyn();

		static  ::openfl::geom::Matrix get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_matrix_dyn();

		static bool get_repeat( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_repeat_dyn();

		static bool get_smooth( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_smooth_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginBitmapFillView_Impl_ */ 
