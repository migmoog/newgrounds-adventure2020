// Generated by Haxe 4.1.2
#ifndef INCLUDED_lime_graphics_ImageFileFormat
#define INCLUDED_lime_graphics_ImageFileFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ImageFileFormat)
namespace lime{
namespace graphics{


class ImageFileFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageFileFormat_obj OBJ_;

	public:
		ImageFileFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.graphics.ImageFileFormat",c4,c2,81,0b); }
		::String __ToString() const { return HX_("ImageFileFormat.",80,ce,1f,57) + _hx_tag; }

		static ::lime::graphics::ImageFileFormat BMP;
		static inline ::lime::graphics::ImageFileFormat BMP_dyn() { return BMP; }
		static ::lime::graphics::ImageFileFormat JPEG;
		static inline ::lime::graphics::ImageFileFormat JPEG_dyn() { return JPEG; }
		static ::lime::graphics::ImageFileFormat PNG;
		static inline ::lime::graphics::ImageFileFormat PNG_dyn() { return PNG; }
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ImageFileFormat */ 