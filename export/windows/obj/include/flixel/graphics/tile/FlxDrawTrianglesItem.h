// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#define INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTrianglesItem)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxDrawTrianglesItem_obj : public  ::flixel::graphics::tile::FlxDrawBaseItem_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxDrawBaseItem_obj super;
		typedef FlxDrawTrianglesItem_obj OBJ_;
		FlxDrawTrianglesItem_obj();

	public:
		enum { _hx_ClassId = 0x1a0ba75d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxDrawTrianglesItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.tile.FlxDrawTrianglesItem"); }
		static ::hx::ObjectPtr< FlxDrawTrianglesItem_obj > __new();
		static ::hx::ObjectPtr< FlxDrawTrianglesItem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxDrawTrianglesItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxDrawTrianglesItem",08,8c,a8,0b); }

		static void __boot();
		static  ::flixel::math::FlxPoint point;
		static  ::flixel::math::FlxRect rect;
		static  ::flixel::math::FlxRect inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y);
		static ::Dynamic inflateBounds_dyn();

		 ::openfl::_Vector::FloatVector vertices;
		 ::openfl::_Vector::IntVector indices;
		 ::openfl::_Vector::FloatVector uvtData;
		 ::openfl::_Vector::IntVector colors;
		int verticesPosition;
		int indicesPosition;
		int colorsPosition;
		 ::flixel::math::FlxRect bounds;
		void render( ::flixel::FlxCamera camera);

		void reset();

		void dispose();

		void addTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::openfl::_Vector::IntVector colors, ::flixel::math::FlxPoint position, ::flixel::math::FlxRect cameraBounds);
		::Dynamic addTriangles_dyn();

		void addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform);

		int get_numVertices();

		int get_numTriangles();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem */ 
