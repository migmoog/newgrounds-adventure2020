// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_math_FlxMath
#define INCLUDED_flixel_math_FlxMath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxMath)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxMath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxMath_obj OBJ_;
		FlxMath_obj();

	public:
		enum { _hx_ClassId = 0x7a539556 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxMath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxMath"); }

		inline static ::hx::ObjectPtr< FlxMath_obj > __new() {
			::hx::ObjectPtr< FlxMath_obj > __this = new FlxMath_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxMath_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxMath_obj *__this = (FlxMath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMath_obj), false, "flixel.math.FlxMath"));
			*(void **)__this = FlxMath_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMath_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMath",3a,7b,ae,d8); }

		static void __boot();
		static Float MIN_VALUE_FLOAT;
		static Float MAX_VALUE_FLOAT;
		static int MIN_VALUE_INT;
		static int MAX_VALUE_INT;
		static Float SQUARE_ROOT_OF_TWO;
		static Float EPSILON;
		static Float roundDecimal(Float Value,int Precision);
		static ::Dynamic roundDecimal_dyn();

		static Float bound(Float Value, ::Dynamic Min, ::Dynamic Max);
		static ::Dynamic bound_dyn();

		static Float lerp(Float a,Float b,Float ratio);
		static ::Dynamic lerp_dyn();

		static bool inBounds(Float Value, ::Dynamic Min, ::Dynamic Max);
		static ::Dynamic inBounds_dyn();

		static bool isOdd(Float n);
		static ::Dynamic isOdd_dyn();

		static bool isEven(Float n);
		static ::Dynamic isEven_dyn();

		static int numericComparison(Float a,Float b);
		static ::Dynamic numericComparison_dyn();

		static bool pointInCoordinates(Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight);
		static ::Dynamic pointInCoordinates_dyn();

		static bool pointInFlxRect(Float pointX,Float pointY, ::flixel::math::FlxRect rect);
		static ::Dynamic pointInFlxRect_dyn();

		static bool pointInRectangle(Float pointX,Float pointY, ::openfl::geom::Rectangle rect);
		static ::Dynamic pointInRectangle_dyn();

		static int maxAdd(int value,int amount,int max,::hx::Null< int >  min);
		static ::Dynamic maxAdd_dyn();

		static int wrap(int value,int min,int max);
		static ::Dynamic wrap_dyn();

		static Float remapToRange(Float value,Float start1,Float stop1,Float start2,Float stop2);
		static ::Dynamic remapToRange_dyn();

		static Float dotProduct(Float ax,Float ay,Float bx,Float by);
		static ::Dynamic dotProduct_dyn();

		static Float vectorLength(Float dx,Float dy);
		static ::Dynamic vectorLength_dyn();

		static int distanceBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB);
		static ::Dynamic distanceBetween_dyn();

		static bool isDistanceWithin( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,Float Distance,::hx::Null< bool >  IncludeEqual);
		static ::Dynamic isDistanceWithin_dyn();

		static int distanceToPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target);
		static ::Dynamic distanceToPoint_dyn();

		static bool isDistanceToPointWithin( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target,Float Distance,::hx::Null< bool >  IncludeEqual);
		static ::Dynamic isDistanceToPointWithin_dyn();

		static int getDecimals(Float n);
		static ::Dynamic getDecimals_dyn();

		static bool equal(Float aValueA,Float aValueB,::hx::Null< Float >  aDiff);
		static ::Dynamic equal_dyn();

		static int signOf(Float n);
		static ::Dynamic signOf_dyn();

		static bool sameSign(Float a,Float b);
		static ::Dynamic sameSign_dyn();

		static Float fastSin(Float n);
		static ::Dynamic fastSin_dyn();

		static Float fastCos(Float n);
		static ::Dynamic fastCos_dyn();

		static Float sinh(Float n);
		static ::Dynamic sinh_dyn();

		static int maxInt(int a,int b);
		static ::Dynamic maxInt_dyn();

		static int minInt(int a,int b);
		static ::Dynamic minInt_dyn();

		static int absInt(int n);
		static ::Dynamic absInt_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxMath */ 
