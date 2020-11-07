// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e05dc14770b0678_30_new,"openfl.display.DOMRenderer","new",0xd62a842d,"openfl.display.DOMRenderer.new","openfl/display/DOMRenderer.hx",30,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_102_applyStyle,"openfl.display.DOMRenderer","applyStyle",0x738a30b6,"openfl.display.DOMRenderer.applyStyle","openfl/display/DOMRenderer.hx",102,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_125_clearStyle,"openfl.display.DOMRenderer","clearStyle",0x9d42f437,"openfl.display.DOMRenderer.clearStyle","openfl/display/DOMRenderer.hx",125,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_135___applyStyle,"openfl.display.DOMRenderer","__applyStyle",0x34df8696,"openfl.display.DOMRenderer.__applyStyle","openfl/display/DOMRenderer.hx",135,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_202___popMask,"openfl.display.DOMRenderer","__popMask",0x6d6ec38a,"openfl.display.DOMRenderer.__popMask","openfl/display/DOMRenderer.hx",202,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_206___popMaskObject,"openfl.display.DOMRenderer","__popMaskObject",0xc1c8f9e9,"openfl.display.DOMRenderer.__popMaskObject","openfl/display/DOMRenderer.hx",206,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_220___popMaskRect,"openfl.display.DOMRenderer","__popMaskRect",0x8b58c9ce,"openfl.display.DOMRenderer.__popMaskRect","openfl/display/DOMRenderer.hx",220,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_239___pushMask,"openfl.display.DOMRenderer","__pushMask",0xfe9af6d9,"openfl.display.DOMRenderer.__pushMask","openfl/display/DOMRenderer.hx",239,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_243___pushMaskObject,"openfl.display.DOMRenderer","__pushMaskObject",0x17bd1278,"openfl.display.DOMRenderer.__pushMaskObject","openfl/display/DOMRenderer.hx",243,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_256___pushMaskRect,"openfl.display.DOMRenderer","__pushMaskRect",0x0ec2509d,"openfl.display.DOMRenderer.__pushMaskRect","openfl/display/DOMRenderer.hx",256,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_288___render,"openfl.display.DOMRenderer","__render",0xc8823b89,"openfl.display.DOMRenderer.__render","openfl/display/DOMRenderer.hx",288,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_303___setBlendMode,"openfl.display.DOMRenderer","__setBlendMode",0xbf231cc5,"openfl.display.DOMRenderer.__setBlendMode","openfl/display/DOMRenderer.hx",303,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_380___updateClip,"openfl.display.DOMRenderer","__updateClip",0xffe7bf2c,"openfl.display.DOMRenderer.__updateClip","openfl/display/DOMRenderer.hx",380,0x3d2c4865)
HX_LOCAL_STACK_FRAME(_hx_pos_6e05dc14770b0678_30_boot,"openfl.display.DOMRenderer","boot",0x872223c5,"openfl.display.DOMRenderer.boot","openfl/display/DOMRenderer.hx",30,0x3d2c4865)
namespace openfl{
namespace display{

void DOMRenderer_obj::__construct( ::Dynamic element){
            	HX_GC_STACKFRAME(&_hx_pos_6e05dc14770b0678_30_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(element,"element")
HXLINE(  30)
HXLINE(  41)		this->pixelRatio = ((Float)1);
HXLINE(  55)		super::__construct();
HXLINE(  57)		this->element = element;
HXLINE(  83)		this->_hx___clipRects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  84)		this->_hx___numClipRects = 0;
HXLINE(  85)		this->_hx___z = 0;
HXLINE(  88)		this->_hx___type = HX_("dom",82,42,4c,00);
HXLINE(  91)		this->_hx___canvasRenderer =  ::openfl::display::CanvasRenderer_obj::__alloc( HX_CTX ,null());
HXLINE(  92)		this->_hx___canvasRenderer->_hx___isDOM = true;
            	}

Dynamic DOMRenderer_obj::__CreateEmpty() { return new DOMRenderer_obj; }

void *DOMRenderer_obj::_hx_vtable = 0;

Dynamic DOMRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMRenderer_obj > _hx_result = new DOMRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DOMRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e77aebf) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x0e77aebf;
		}
	} else {
		return inClassId==(int)0x49529132;
	}
}

void DOMRenderer_obj::applyStyle( ::openfl::display::DisplayObject parent, ::Dynamic childElement){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_102_applyStyle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parent,"parent")
            	HX_STACK_ARG(childElement,"childElement")
HXLINE( 102)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderer_obj,applyStyle,(void))

void DOMRenderer_obj::clearStyle( ::Dynamic childElement){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_125_clearStyle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(childElement,"childElement")
HXLINE( 125)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderer_obj,clearStyle,(void))

void DOMRenderer_obj::_hx___applyStyle( ::openfl::display::DisplayObject displayObject,bool setTransform,bool setAlpha,bool setClip){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_135___applyStyle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(displayObject,"displayObject")
            	HX_STACK_ARG(setTransform,"setTransform")
            	HX_STACK_ARG(setAlpha,"setAlpha")
            	HX_STACK_ARG(setClip,"setClip")
HXLINE( 135)
            	}


HX_DEFINE_DYNAMIC_FUNC4(DOMRenderer_obj,_hx___applyStyle,(void))

void DOMRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_202___popMask)
            	HX_STACK_THIS(this)
HXLINE( 202)
HXDLIN( 202)		this->_hx___popMaskRect();
            	}


void DOMRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_206___popMaskObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE( 206)
HXLINE( 207)		if (::hx::IsNotNull( object->_hx___mask )) {
HXLINE( 209)			this->_hx___popMask();
            		}
HXLINE( 212)		bool _hx_tmp;
HXDLIN( 212)		if (handleScrollRect) {
HXLINE( 212)			_hx_tmp = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 212)			_hx_tmp = false;
            		}
HXDLIN( 212)		if (_hx_tmp) {
HXLINE( 214)			this->_hx___popMaskRect();
            		}
            	}


void DOMRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_220___popMaskRect)
            	HX_STACK_THIS(this)
HXLINE( 220)
HXDLIN( 220)		if ((this->_hx___numClipRects > 0)) {
HXLINE( 222)			this->_hx___numClipRects--;
HXLINE( 224)			if ((this->_hx___numClipRects > 0)) {
HXLINE( 226)				this->_hx___currentClipRect = this->_hx___clipRects->__get((this->_hx___numClipRects - 1)).StaticCast<  ::openfl::geom::Rectangle >();
            			}
            			else {
HXLINE( 230)				this->_hx___currentClipRect = null();
            			}
            		}
            	}


void DOMRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_239___pushMask)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mask,"mask")
HXLINE( 239)
HXDLIN( 239)		 ::openfl::geom::Rectangle _hx_tmp = mask->getBounds(mask);
HXDLIN( 239)		this->_hx___pushMaskRect(_hx_tmp,mask->_hx___renderTransform);
            	}


void DOMRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_243___pushMaskObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE( 243)
HXLINE( 244)		bool _hx_tmp;
HXDLIN( 244)		if (handleScrollRect) {
HXLINE( 244)			_hx_tmp = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 244)			_hx_tmp = false;
            		}
HXDLIN( 244)		if (_hx_tmp) {
HXLINE( 246)			this->_hx___pushMaskRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE( 249)		if (::hx::IsNotNull( object->_hx___mask )) {
HXLINE( 251)			this->_hx___pushMask(object->_hx___mask);
            		}
            	}


void DOMRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_6e05dc14770b0678_256___pushMaskRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(transform,"transform")
HXLINE( 256)
HXLINE( 259)		if ((this->_hx___numClipRects == this->_hx___clipRects->length)) {
HXLINE( 261)			this->_hx___clipRects[this->_hx___numClipRects] =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 264)		HX_VARI(  ::openfl::geom::Rectangle,clipRect) = this->_hx___clipRects->__get(this->_hx___numClipRects).StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 265)		rect->_hx___transform(clipRect,transform);
HXLINE( 267)		if ((this->_hx___numClipRects > 0)) {
HXLINE( 269)			HX_VARI(  ::openfl::geom::Rectangle,parentClipRect) = this->_hx___clipRects->__get((this->_hx___numClipRects - 1)).StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 270)			clipRect->_hx___contract(parentClipRect->x,parentClipRect->y,parentClipRect->width,parentClipRect->height);
            		}
HXLINE( 273)		if ((clipRect->height < 0)) {
HXLINE( 275)			clipRect->height = ( (Float)(0) );
            		}
HXLINE( 278)		if ((clipRect->width < 0)) {
HXLINE( 280)			clipRect->width = ( (Float)(0) );
            		}
HXLINE( 283)		this->_hx___currentClipRect = clipRect;
HXLINE( 284)		this->_hx___numClipRects++;
            	}


void DOMRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_288___render)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE( 288)
HXLINE( 289)		if (!(this->_hx___stage->_hx___transparent)) {
HXLINE( 291)			 ::Dynamic(this->element->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic))->__SetField(HX_("background",ee,93,1d,26),this->_hx___stage->_hx___colorString,::hx::paccDynamic);
            		}
            		else {
HXLINE( 295)			 ::Dynamic(this->element->__Field(HX_("style",31,a5,1d,84),::hx::paccDynamic))->__SetField(HX_("background",ee,93,1d,26),HX_("none",b8,12,0a,49),::hx::paccDynamic);
            		}
HXLINE( 298)		this->_hx___z = 1;
HXLINE( 299)		::openfl::display::IBitmapDrawable_obj::_hx___renderDOM(object,::hx::ObjectPtr<OBJ_>(this));
            	}


void DOMRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_303___setBlendMode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 303)
HXLINE( 304)		if (::hx::IsNotNull( this->_hx___overrideBlendMode )) {
HXLINE( 304)			value = this->_hx___overrideBlendMode;
            		}
HXLINE( 305)		if (::hx::IsEq( this->_hx___blendMode,value )) {
HXLINE( 305)			return;
            		}
HXLINE( 307)		this->_hx___blendMode = value;
            	}


void DOMRenderer_obj::_hx___updateClip( ::openfl::display::DisplayObject displayObject){
            	HX_GC_STACKFRAME(&_hx_pos_6e05dc14770b0678_380___updateClip)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(displayObject,"displayObject")
HXLINE( 380)
HXDLIN( 380)		if (::hx::IsNull( this->_hx___currentClipRect )) {
HXLINE( 382)			displayObject->_hx___worldClipChanged = ::hx::IsNotNull( displayObject->_hx___worldClip );
HXLINE( 383)			displayObject->_hx___worldClip = null();
            		}
            		else {
HXLINE( 387)			if (::hx::IsNull( displayObject->_hx___worldClip )) {
HXLINE( 389)				displayObject->_hx___worldClip =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE( 392)			HX_VARI(  ::openfl::geom::Rectangle,clip) = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 393)			HX_VARI(  ::openfl::geom::Matrix,matrix) = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 395)			matrix->copyFrom(displayObject->_hx___renderTransform);
HXLINE( 396)			matrix->invert();
HXLINE( 398)			this->_hx___currentClipRect->_hx___transform(clip,matrix);
HXLINE( 400)			if (clip->equals(displayObject->_hx___worldClip)) {
HXLINE( 402)				displayObject->_hx___worldClipChanged = false;
            			}
            			else {
HXLINE( 406)				displayObject->_hx___worldClip->copyFrom(clip);
HXLINE( 407)				displayObject->_hx___worldClipChanged = true;
            			}
HXLINE( 410)			::openfl::geom::Rectangle_obj::_hx___pool->release(clip);
HXLINE( 411)			::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderer_obj,_hx___updateClip,(void))


::hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__new( ::Dynamic element) {
	::hx::ObjectPtr< DOMRenderer_obj > __this = new DOMRenderer_obj();
	__this->__construct(element);
	return __this;
}

::hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic element) {
	DOMRenderer_obj *__this = (DOMRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMRenderer_obj), true, "openfl.display.DOMRenderer"));
	*(void **)__this = DOMRenderer_obj::_hx_vtable;
	__this->__construct(element);
	return __this;
}

DOMRenderer_obj::DOMRenderer_obj()
{
}

void DOMRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMRenderer);
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_MARK_MEMBER_NAME(_hx___canvasRenderer,"__canvasRenderer");
	HX_MARK_MEMBER_NAME(_hx___clipRects,"__clipRects");
	HX_MARK_MEMBER_NAME(_hx___currentClipRect,"__currentClipRect");
	HX_MARK_MEMBER_NAME(_hx___numClipRects,"__numClipRects");
	HX_MARK_MEMBER_NAME(_hx___transformOriginProperty,"__transformOriginProperty");
	HX_MARK_MEMBER_NAME(_hx___transformProperty,"__transformProperty");
	HX_MARK_MEMBER_NAME(_hx___vendorPrefix,"__vendorPrefix");
	HX_MARK_MEMBER_NAME(_hx___z,"__z");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_VISIT_MEMBER_NAME(_hx___canvasRenderer,"__canvasRenderer");
	HX_VISIT_MEMBER_NAME(_hx___clipRects,"__clipRects");
	HX_VISIT_MEMBER_NAME(_hx___currentClipRect,"__currentClipRect");
	HX_VISIT_MEMBER_NAME(_hx___numClipRects,"__numClipRects");
	HX_VISIT_MEMBER_NAME(_hx___transformOriginProperty,"__transformOriginProperty");
	HX_VISIT_MEMBER_NAME(_hx___transformProperty,"__transformProperty");
	HX_VISIT_MEMBER_NAME(_hx___vendorPrefix,"__vendorPrefix");
	HX_VISIT_MEMBER_NAME(_hx___z,"__z");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DOMRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__z") ) { return ::hx::Val( _hx___z ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return ::hx::Val( element ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { return ::hx::Val( pixelRatio ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle") ) { return ::hx::Val( clearStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__clipRects") ) { return ::hx::Val( _hx___clipRects ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__applyStyle") ) { return ::hx::Val( _hx___applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateClip") ) { return ::hx::Val( _hx___updateClip_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__numClipRects") ) { return ::hx::Val( _hx___numClipRects ); }
		if (HX_FIELD_EQ(inName,"__vendorPrefix") ) { return ::hx::Val( _hx___vendorPrefix ); }
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__canvasRenderer") ) { return ::hx::Val( _hx___canvasRenderer ); }
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__currentClipRect") ) { return ::hx::Val( _hx___currentClipRect ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__transformProperty") ) { return ::hx::Val( _hx___transformProperty ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__transformOriginProperty") ) { return ::hx::Val( _hx___transformOriginProperty ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DOMRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__z") ) { _hx___z=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { pixelRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__clipRects") ) { _hx___clipRects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__numClipRects") ) { _hx___numClipRects=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vendorPrefix") ) { _hx___vendorPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__canvasRenderer") ) { _hx___canvasRenderer=inValue.Cast<  ::openfl::display::CanvasRenderer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__currentClipRect") ) { _hx___currentClipRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__transformProperty") ) { _hx___transformProperty=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__transformOriginProperty") ) { _hx___transformOriginProperty=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("element",bc,ae,54,06));
	outFields->push(HX_("pixelRatio",a5,78,12,83));
	outFields->push(HX_("__canvasRenderer",5b,f9,33,bd));
	outFields->push(HX_("__clipRects",bf,ca,ff,32));
	outFields->push(HX_("__currentClipRect",4d,7a,16,b0));
	outFields->push(HX_("__numClipRects",d9,0d,04,cd));
	outFields->push(HX_("__transformOriginProperty",c7,6b,bb,16));
	outFields->push(HX_("__transformProperty",c1,a6,ba,36));
	outFields->push(HX_("__vendorPrefix",5a,8c,c3,81));
	outFields->push(HX_("__z",5a,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DOMRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DOMRenderer_obj,element),HX_("element",bc,ae,54,06)},
	{::hx::fsFloat,(int)offsetof(DOMRenderer_obj,pixelRatio),HX_("pixelRatio",a5,78,12,83)},
	{::hx::fsObject /*  ::openfl::display::CanvasRenderer */ ,(int)offsetof(DOMRenderer_obj,_hx___canvasRenderer),HX_("__canvasRenderer",5b,f9,33,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DOMRenderer_obj,_hx___clipRects),HX_("__clipRects",bf,ca,ff,32)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(DOMRenderer_obj,_hx___currentClipRect),HX_("__currentClipRect",4d,7a,16,b0)},
	{::hx::fsInt,(int)offsetof(DOMRenderer_obj,_hx___numClipRects),HX_("__numClipRects",d9,0d,04,cd)},
	{::hx::fsString,(int)offsetof(DOMRenderer_obj,_hx___transformOriginProperty),HX_("__transformOriginProperty",c7,6b,bb,16)},
	{::hx::fsString,(int)offsetof(DOMRenderer_obj,_hx___transformProperty),HX_("__transformProperty",c1,a6,ba,36)},
	{::hx::fsString,(int)offsetof(DOMRenderer_obj,_hx___vendorPrefix),HX_("__vendorPrefix",5a,8c,c3,81)},
	{::hx::fsInt,(int)offsetof(DOMRenderer_obj,_hx___z),HX_("__z",5a,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DOMRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DOMRenderer_obj_sMemberFields[] = {
	HX_("element",bc,ae,54,06),
	HX_("pixelRatio",a5,78,12,83),
	HX_("__canvasRenderer",5b,f9,33,bd),
	HX_("__clipRects",bf,ca,ff,32),
	HX_("__currentClipRect",4d,7a,16,b0),
	HX_("__numClipRects",d9,0d,04,cd),
	HX_("__transformOriginProperty",c7,6b,bb,16),
	HX_("__transformProperty",c1,a6,ba,36),
	HX_("__vendorPrefix",5a,8c,c3,81),
	HX_("__z",5a,69,48,00),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("clearStyle",64,e4,27,59),
	HX_("__applyStyle",03,9c,02,68),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__setBlendMode",72,27,48,51),
	HX_("__updateClip",99,d4,0a,33),
	::String(null()) };

::hx::Class DOMRenderer_obj::__mClass;

void DOMRenderer_obj::__register()
{
	DOMRenderer_obj _hx_dummy;
	DOMRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DOMRenderer",bb,e9,d7,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DOMRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DOMRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6e05dc14770b0678_30_boot)
HXDLIN(  30)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("_",5f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("element",bc,ae,54,06), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("applyStyle",e3,20,6f,2f), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(3,HX_("clearStyle",64,e4,27,59), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
