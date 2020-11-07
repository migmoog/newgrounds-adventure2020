// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl__internal_formats_swf_FilterType
#define INCLUDED_openfl__internal_formats_swf_FilterType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,formats,swf,FilterType)
namespace openfl{
namespace _internal{
namespace formats{
namespace swf{


class FilterType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FilterType_obj OBJ_;

	public:
		FilterType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl._internal.formats.swf.FilterType",60,11,fc,5e); }
		::String __ToString() const { return HX_("FilterType.",3c,5d,b0,ae) + _hx_tag; }

		static ::openfl::_internal::formats::swf::FilterType BlurFilter(Float blurX,Float blurY,int quality);
		static ::Dynamic BlurFilter_dyn();
		static ::openfl::_internal::formats::swf::FilterType ColorMatrixFilter(::Array< Float > matrix);
		static ::Dynamic ColorMatrixFilter_dyn();
		static ::openfl::_internal::formats::swf::FilterType DropShadowFilter(Float distance,Float angle,int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout,bool hideObject);
		static ::Dynamic DropShadowFilter_dyn();
		static ::openfl::_internal::formats::swf::FilterType GlowFilter(int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout);
		static ::Dynamic GlowFilter_dyn();
};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace swf

#endif /* INCLUDED_openfl__internal_formats_swf_FilterType */ 
