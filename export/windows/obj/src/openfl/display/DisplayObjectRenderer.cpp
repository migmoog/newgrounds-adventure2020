// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a81acb3bead7383_38_new,"openfl.display.DisplayObjectRenderer","new",0x2db5f24c,"openfl.display.DisplayObjectRenderer.new","openfl/display/DisplayObjectRenderer.hx",38,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_46___clear,"openfl.display.DisplayObjectRenderer","__clear",0x54d15259,"openfl.display.DisplayObjectRenderer.__clear","openfl/display/DisplayObjectRenderer.hx",46,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_50___getAlpha,"openfl.display.DisplayObjectRenderer","__getAlpha",0x82bb5d9c,"openfl.display.DisplayObjectRenderer.__getAlpha","openfl/display/DisplayObjectRenderer.hx",50,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_55___getColorTransform,"openfl.display.DisplayObjectRenderer","__getColorTransform",0x8add698b,"openfl.display.DisplayObjectRenderer.__getColorTransform","openfl/display/DisplayObjectRenderer.hx",55,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_67___popMask,"openfl.display.DisplayObjectRenderer","__popMask",0xc15a12e9,"openfl.display.DisplayObjectRenderer.__popMask","openfl/display/DisplayObjectRenderer.hx",67,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_69___popMaskObject,"openfl.display.DisplayObjectRenderer","__popMaskObject",0xe6109a88,"openfl.display.DisplayObjectRenderer.__popMaskObject","openfl/display/DisplayObjectRenderer.hx",69,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_71___popMaskRect,"openfl.display.DisplayObjectRenderer","__popMaskRect",0x0ba8b4ad,"openfl.display.DisplayObjectRenderer.__popMaskRect","openfl/display/DisplayObjectRenderer.hx",71,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_73___pushMask,"openfl.display.DisplayObjectRenderer","__pushMask",0x18951a9a,"openfl.display.DisplayObjectRenderer.__pushMask","openfl/display/DisplayObjectRenderer.hx",73,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_75___pushMaskObject,"openfl.display.DisplayObjectRenderer","__pushMaskObject",0xb221fcf9,"openfl.display.DisplayObjectRenderer.__pushMaskObject","openfl/display/DisplayObjectRenderer.hx",75,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_77___pushMaskRect,"openfl.display.DisplayObjectRenderer","__pushMaskRect",0xd45fe8de,"openfl.display.DisplayObjectRenderer.__pushMaskRect","openfl/display/DisplayObjectRenderer.hx",77,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_79___render,"openfl.display.DisplayObjectRenderer","__render",0xdfd83d0a,"openfl.display.DisplayObjectRenderer.__render","openfl/display/DisplayObjectRenderer.hx",79,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_81___resize,"openfl.display.DisplayObjectRenderer","__resize",0xe32a2ba8,"openfl.display.DisplayObjectRenderer.__resize","openfl/display/DisplayObjectRenderer.hx",81,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_83___setBlendMode,"openfl.display.DisplayObjectRenderer","__setBlendMode",0x84c0b506,"openfl.display.DisplayObjectRenderer.__setBlendMode","openfl/display/DisplayObjectRenderer.hx",83,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_21_boot,"openfl.display.DisplayObjectRenderer","boot",0xc99710c6,"openfl.display.DisplayObjectRenderer.boot","openfl/display/DisplayObjectRenderer.hx",21,0x59a0b9a6)
namespace openfl{
namespace display{

void DisplayObjectRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5a81acb3bead7383_38_new)
            	HX_STACK_THIS(this)
HXLINE(  38)
HXLINE(  39)		super::__construct(null());
HXLINE(  41)		this->_hx___allowSmoothing = true;
HXLINE(  42)		this->_hx___tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  43)		this->_hx___worldAlpha = ( (Float)(1) );
            	}

Dynamic DisplayObjectRenderer_obj::__CreateEmpty() { return new DisplayObjectRenderer_obj; }

void *DisplayObjectRenderer_obj::_hx_vtable = 0;

Dynamic DisplayObjectRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectRenderer_obj > _hx_result = new DisplayObjectRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x49529132;
	}
}

void DisplayObjectRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_46___clear)
            	HX_STACK_THIS(this)
HXLINE(  46)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___clear,(void))

Float DisplayObjectRenderer_obj::_hx___getAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_50___getAlpha)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  50)
HXDLIN(  50)		return (value * this->_hx___worldAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getAlpha,return )

 ::openfl::geom::ColorTransform DisplayObjectRenderer_obj::_hx___getColorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_55___getColorTransform)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  55)
HXDLIN(  55)		if (::hx::IsNotNull( this->_hx___worldColorTransform )) {
HXLINE(  57)			this->_hx___tempColorTransform->_hx___copyFrom(this->_hx___worldColorTransform);
HXLINE(  58)			this->_hx___tempColorTransform->_hx___combine(value);
HXLINE(  59)			return this->_hx___tempColorTransform;
            		}
            		else {
HXLINE(  63)			return value;
            		}
HXLINE(  55)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getColorTransform,return )

void DisplayObjectRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_67___popMask)
            	HX_STACK_THIS(this)
HXLINE(  67)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMask,(void))

void DisplayObjectRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_69___popMaskObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  69)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___popMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_71___popMaskRect)
            	HX_STACK_THIS(this)
HXLINE(  71)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_73___pushMask)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mask,"mask")
HXLINE(  73)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___pushMask,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_75___pushMaskObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  75)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_77___pushMaskRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(transform,"transform")
HXLINE(  77)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_79___render)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE(  79)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___render,(void))

void DisplayObjectRenderer_obj::_hx___resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_81___resize)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  81)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___resize,(void))

void DisplayObjectRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_83___setBlendMode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  83)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___setBlendMode,(void))


::hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectRenderer_obj > __this = new DisplayObjectRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectRenderer_obj *__this = (DisplayObjectRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectRenderer_obj), true, "openfl.display.DisplayObjectRenderer"));
	*(void **)__this = DisplayObjectRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectRenderer_obj::DisplayObjectRenderer_obj()
{
}

void DisplayObjectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectRenderer);
	HX_MARK_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_MARK_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(_hx___cleared,"__cleared");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___overrideBlendMode,"__overrideBlendMode");
	HX_MARK_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	HX_MARK_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_MARK_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_MARK_MEMBER_NAME(_hx___type,"__type");
	HX_MARK_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_VISIT_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(_hx___cleared,"__cleared");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___overrideBlendMode,"__overrideBlendMode");
	HX_VISIT_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	HX_VISIT_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(_hx___type,"__type");
	HX_VISIT_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { return ::hx::Val( _hx___type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { return ::hx::Val( _hx___stage ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return ::hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return ::hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleared") ) { return ::hx::Val( _hx___cleared ); }
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getAlpha") ) { return ::hx::Val( _hx___getAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return ::hx::Val( _hx___blendMode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return ::hx::Val( _hx___worldAlpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { return ::hx::Val( _hx___roundPixels ); }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return ::hx::Val( _hx___transparent ); }
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { return ::hx::Val( _hx___allowSmoothing ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__overrideBlendMode") ) { return ::hx::Val( _hx___overrideBlendMode ); }
		if (HX_FIELD_EQ(inName,"__getColorTransform") ) { return ::hx::Val( _hx___getColorTransform_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { return ::hx::Val( _hx___tempColorTransform ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return ::hx::Val( _hx___worldColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { _hx___type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleared") ) { _hx___cleared=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { _hx___blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { _hx___worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { _hx___roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { _hx___transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { _hx___allowSmoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__overrideBlendMode") ) { _hx___overrideBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { _hx___tempColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { _hx___worldColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__allowSmoothing",cb,42,a6,9c));
	outFields->push(HX_("__blendMode",34,2d,64,3a));
	outFields->push(HX_("__cleared",0c,58,93,2c));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__overrideBlendMode",48,21,da,ac));
	outFields->push(HX_("__roundPixels",fb,ca,70,07));
	outFields->push(HX_("__stage",9e,c3,69,ee));
	outFields->push(HX_("__tempColorTransform",dd,84,da,33));
	outFields->push(HX_("__transparent",32,6c,32,6b));
	outFields->push(HX_("__type",da,55,01,fc));
	outFields->push(HX_("__worldAlpha",cc,d2,d6,c5));
	outFields->push(HX_("__worldColorTransform",5b,ce,21,a3));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___allowSmoothing),HX_("__allowSmoothing",cb,42,a6,9c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___blendMode),HX_("__blendMode",34,2d,64,3a)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___cleared),HX_("__cleared",0c,58,93,2c)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___overrideBlendMode),HX_("__overrideBlendMode",48,21,da,ac)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___roundPixels),HX_("__roundPixels",fb,ca,70,07)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___stage),HX_("__stage",9e,c3,69,ee)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___tempColorTransform),HX_("__tempColorTransform",dd,84,da,33)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___transparent),HX_("__transparent",32,6c,32,6b)},
	{::hx::fsString,(int)offsetof(DisplayObjectRenderer_obj,_hx___type),HX_("__type",da,55,01,fc)},
	{::hx::fsFloat,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldAlpha),HX_("__worldAlpha",cc,d2,d6,c5)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldColorTransform),HX_("__worldColorTransform",5b,ce,21,a3)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectRenderer_obj_sMemberFields[] = {
	HX_("__allowSmoothing",cb,42,a6,9c),
	HX_("__blendMode",34,2d,64,3a),
	HX_("__cleared",0c,58,93,2c),
	HX_("__context",cf,e6,c5,9a),
	HX_("__overrideBlendMode",48,21,da,ac),
	HX_("__roundPixels",fb,ca,70,07),
	HX_("__stage",9e,c3,69,ee),
	HX_("__tempColorTransform",dd,84,da,33),
	HX_("__transparent",32,6c,32,6b),
	HX_("__type",da,55,01,fc),
	HX_("__worldAlpha",cc,d2,d6,c5),
	HX_("__worldColorTransform",5b,ce,21,a3),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__clear",6d,ca,b9,b2),
	HX_("__getAlpha",08,2a,a6,24),
	HX_("__getColorTransform",9f,af,a3,d2),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__resize",14,c5,aa,b0),
	HX_("__setBlendMode",72,27,48,51),
	::String(null()) };

::hx::Class DisplayObjectRenderer_obj::__mClass;

void DisplayObjectRenderer_obj::__register()
{
	DisplayObjectRenderer_obj _hx_dummy;
	DisplayObjectRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectRenderer",5a,1c,ac,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DisplayObjectRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__context",cf,e6,c5,9a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("__type",da,55,01,fc), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
