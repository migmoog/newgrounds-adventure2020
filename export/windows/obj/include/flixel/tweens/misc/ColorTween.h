// Generated by Haxe 4.1.2
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#define INCLUDED_flixel_tweens_misc_ColorTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES ColorTween_obj : public  ::flixel::tweens::FlxTween_obj
{
	public:
		typedef  ::flixel::tweens::FlxTween_obj super;
		typedef ColorTween_obj OBJ_;
		ColorTween_obj();

	public:
		enum { _hx_ClassId = 0x04087a7c };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.misc.ColorTween")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.misc.ColorTween"); }
		static ::hx::ObjectPtr< ColorTween_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< ColorTween_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorTween_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorTween",28,c6,8d,34); }

		int color;
		int startColor;
		int endColor;
		 ::flixel::FlxSprite sprite;
		void destroy();

		 ::flixel::tweens::misc::ColorTween tween(Float Duration,int FromColor,int ToColor, ::flixel::FlxSprite Sprite);
		::Dynamic tween_dyn();

		void update(Float elapsed);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_ColorTween */ 
