// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_def54b8cacb52d8e_2614_new,"lime.graphics.opengl.GLObject","new",0x33d200eb,"lime.graphics.opengl.GLObject.new","lime/graphics/opengl/GL.hx",2614,0xa5aa2623)
HX_LOCAL_STACK_FRAME(_hx_pos_def54b8cacb52d8e_2618_fromInt,"lime.graphics.opengl.GLObject","fromInt",0x6703afb0,"lime.graphics.opengl.GLObject.fromInt","lime/graphics/opengl/GL.hx",2618,0xa5aa2623)
namespace lime{
namespace graphics{
namespace opengl{

void GLObject_obj::__construct(int id){
            	HX_STACKFRAME(&_hx_pos_def54b8cacb52d8e_2614_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(2614)
HXDLIN(2614)		this->id = id;
            	}

Dynamic GLObject_obj::__CreateEmpty() { return new GLObject_obj; }

void *GLObject_obj::_hx_vtable = 0;

Dynamic GLObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLObject_obj > _hx_result = new GLObject_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GLObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x018b5f13;
}

 ::lime::graphics::opengl::GLObject GLObject_obj::fromInt(int type,int id){
            	HX_GC_STACKFRAME(&_hx_pos_def54b8cacb52d8e_2618_fromInt)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(id,"id")
HXLINE(2618)
HXLINE(2619)		if ((id == 0)) {
HXLINE(2619)			return null();
            		}
HXLINE(2622)		HX_VARI(  ::hx::Object *,object) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_gl_object_from_id(id,type);
HXLINE(2624)		if (::hx::IsNotNull( object )) {
HXLINE(2626)			return ( ( ::Dynamic)(object) );
            		}
HXLINE(2629)		object = ::hx::DynamicPtr( ::lime::graphics::opengl::GLObject_obj::__alloc( HX_CTX ,id));
HXLINE(2630)		( ( ::Dynamic)(object) )->__SetField(HX_("ptr",ee,61,55,00),( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gl_object_register(id,type,object)) ),::hx::paccDynamic);
HXLINE(2631)		return ( ( ::Dynamic)(object) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLObject_obj,fromInt,return )


GLObject_obj::GLObject_obj()
{
}

void GLObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLObject);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(ptr,"ptr");
	HX_MARK_MEMBER_NAME(refs,"refs");
	HX_MARK_END_CLASS();
}

void GLObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(ptr,"ptr");
	HX_VISIT_MEMBER_NAME(refs,"refs");
}

::hx::Val GLObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { return ::hx::Val( ptr ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"refs") ) { return ::hx::Val( refs ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GLObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

::hx::Val GLObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { ptr=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"refs") ) { refs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("ptr",ee,61,55,00));
	outFields->push(HX_("refs",c0,4f,a7,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GLObject_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GLObject_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GLObject_obj,ptr),HX_("ptr",ee,61,55,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GLObject_obj,refs),HX_("refs",c0,4f,a7,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GLObject_obj_sStaticStorageInfo = 0;
#endif

static ::String GLObject_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("ptr",ee,61,55,00),
	HX_("refs",c0,4f,a7,4b),
	::String(null()) };

::hx::Class GLObject_obj::__mClass;

static ::String GLObject_obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLObject_obj::__register()
{
	GLObject_obj _hx_dummy;
	GLObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.GLObject",79,af,16,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GLObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GLObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
