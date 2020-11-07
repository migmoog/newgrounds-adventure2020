// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl_geom_Matrix3D
#define INCLUDED_openfl_geom_Matrix3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Matrix3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix3D_obj OBJ_;
		Matrix3D_obj();

	public:
		enum { _hx_ClassId = 0x45c06ede };

		void __construct( ::openfl::_Vector::FloatVector v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.geom.Matrix3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.geom.Matrix3D"); }
		static ::hx::ObjectPtr< Matrix3D_obj > __new( ::openfl::_Vector::FloatVector v);
		static ::hx::ObjectPtr< Matrix3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::_Vector::FloatVector v);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix3D",52,f1,a4,40); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::geom::Matrix3D create2D(Float x,Float y,::hx::Null< Float >  scale,::hx::Null< Float >  rotation);
		static ::Dynamic create2D_dyn();

		static  ::openfl::geom::Matrix3D createABCD(Float a,Float b,Float c,Float d,Float tx,Float ty);
		static ::Dynamic createABCD_dyn();

		static  ::openfl::geom::Matrix3D createOrtho(Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar);
		static ::Dynamic createOrtho_dyn();

		static  ::openfl::geom::Matrix3D interpolate( ::openfl::geom::Matrix3D thisMat, ::openfl::geom::Matrix3D toMat,Float percent);
		static ::Dynamic interpolate_dyn();

		static  ::openfl::geom::Matrix3D _hx___getAxisRotation(Float x,Float y,Float z,Float degrees);
		static ::Dynamic _hx___getAxisRotation_dyn();

		 ::openfl::_Vector::FloatVector rawData;
		void append( ::openfl::geom::Matrix3D lhs);
		::Dynamic append_dyn();

		void appendRotation(Float degrees, ::openfl::geom::Vector3D axis, ::openfl::geom::Vector3D pivotPoint);
		::Dynamic appendRotation_dyn();

		void appendScale(Float xScale,Float yScale,Float zScale);
		::Dynamic appendScale_dyn();

		void appendTranslation(Float x,Float y,Float z);
		::Dynamic appendTranslation_dyn();

		 ::openfl::geom::Matrix3D clone();
		::Dynamic clone_dyn();

		void copyColumnFrom(int column, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyColumnFrom_dyn();

		void copyColumnTo(int column, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyColumnTo_dyn();

		void copyFrom( ::openfl::geom::Matrix3D other);
		::Dynamic copyFrom_dyn();

		void copyRawDataFrom( ::openfl::_Vector::FloatVector vector,::hx::Null< int >  index,::hx::Null< bool >  transpose);
		::Dynamic copyRawDataFrom_dyn();

		void copyRawDataTo( ::openfl::_Vector::FloatVector vector,::hx::Null< int >  index,::hx::Null< bool >  transpose);
		::Dynamic copyRawDataTo_dyn();

		void copyRowFrom(int row, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyRowFrom_dyn();

		void copyRowTo(int row, ::openfl::geom::Vector3D vector3D);
		::Dynamic copyRowTo_dyn();

		void copyToMatrix3D( ::openfl::geom::Matrix3D other);
		::Dynamic copyToMatrix3D_dyn();

		 ::openfl::_Vector::ObjectVector decompose( ::Dynamic orientationStyle);
		::Dynamic decompose_dyn();

		 ::openfl::geom::Vector3D deltaTransformVector( ::openfl::geom::Vector3D v);
		::Dynamic deltaTransformVector_dyn();

		void identity();
		::Dynamic identity_dyn();

		void interpolateTo( ::openfl::geom::Matrix3D toMat,Float percent);
		::Dynamic interpolateTo_dyn();

		bool invert();
		::Dynamic invert_dyn();

		void pointAt( ::openfl::geom::Vector3D pos, ::openfl::geom::Vector3D at, ::openfl::geom::Vector3D up);
		::Dynamic pointAt_dyn();

		void prepend( ::openfl::geom::Matrix3D rhs);
		::Dynamic prepend_dyn();

		void prependRotation(Float degrees, ::openfl::geom::Vector3D axis, ::openfl::geom::Vector3D pivotPoint);
		::Dynamic prependRotation_dyn();

		void prependScale(Float xScale,Float yScale,Float zScale);
		::Dynamic prependScale_dyn();

		void prependTranslation(Float x,Float y,Float z);
		::Dynamic prependTranslation_dyn();

		bool recompose( ::openfl::_Vector::ObjectVector components, ::Dynamic orientationStyle);
		::Dynamic recompose_dyn();

		 ::openfl::geom::Vector3D transformVector( ::openfl::geom::Vector3D v);
		::Dynamic transformVector_dyn();

		void transformVectors( ::openfl::_Vector::FloatVector vin, ::openfl::_Vector::FloatVector vout);
		::Dynamic transformVectors_dyn();

		void transpose();
		::Dynamic transpose_dyn();

		Float get_determinant();
		::Dynamic get_determinant_dyn();

		 ::openfl::geom::Vector3D get_position();
		::Dynamic get_position_dyn();

		 ::openfl::geom::Vector3D set_position( ::openfl::geom::Vector3D val);
		::Dynamic set_position_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Matrix3D */ 
