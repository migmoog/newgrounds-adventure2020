// Generated by Haxe 4.1.2
#ifndef INCLUDED_openfl__internal_symbols_timeline_FrameObjectType
#define INCLUDED_openfl__internal_symbols_timeline_FrameObjectType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,symbols,timeline,FrameObjectType)
namespace openfl{
namespace _internal{
namespace symbols{
namespace timeline{


class FrameObjectType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FrameObjectType_obj OBJ_;

	public:
		FrameObjectType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl._internal.symbols.timeline.FrameObjectType",7c,dc,9a,f0); }
		::String __ToString() const { return HX_("FrameObjectType.",e8,cd,8d,a4) + _hx_tag; }

		static ::openfl::_internal::symbols::timeline::FrameObjectType CREATE;
		static inline ::openfl::_internal::symbols::timeline::FrameObjectType CREATE_dyn() { return CREATE; }
		static ::openfl::_internal::symbols::timeline::FrameObjectType DESTROY;
		static inline ::openfl::_internal::symbols::timeline::FrameObjectType DESTROY_dyn() { return DESTROY; }
		static ::openfl::_internal::symbols::timeline::FrameObjectType UPDATE;
		static inline ::openfl::_internal::symbols::timeline::FrameObjectType UPDATE_dyn() { return UPDATE; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
} // end namespace timeline

#endif /* INCLUDED_openfl__internal_symbols_timeline_FrameObjectType */ 
