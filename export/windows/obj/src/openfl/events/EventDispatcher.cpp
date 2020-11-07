// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_78_new,"openfl.events.EventDispatcher","new",0xd41245fc,"openfl.events.EventDispatcher.new","openfl/events/EventDispatcher.hx",78,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_178_addEventListener,"openfl.events.EventDispatcher","addEventListener",0xf79f44b1,"openfl.events.EventDispatcher.addEventListener","openfl/events/EventDispatcher.hx",178,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_236_dispatchEvent,"openfl.events.EventDispatcher","dispatchEvent",0x2230d79c,"openfl.events.EventDispatcher.dispatchEvent","openfl/events/EventDispatcher.hx",236,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_270_hasEventListener,"openfl.events.EventDispatcher","hasEventListener",0x132567d8,"openfl.events.EventDispatcher.hasEventListener","openfl/events/EventDispatcher.hx",270,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_292_removeEventListener,"openfl.events.EventDispatcher","removeEventListener",0x40c1f566,"openfl.events.EventDispatcher.removeEventListener","openfl/events/EventDispatcher.hx",292,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_328_toString,"openfl.events.EventDispatcher","toString",0x34d48590,"openfl.events.EventDispatcher.toString","openfl/events/EventDispatcher.hx",328,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_356_willTrigger,"openfl.events.EventDispatcher","willTrigger",0x7a1765e2,"openfl.events.EventDispatcher.willTrigger","openfl/events/EventDispatcher.hx",356,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_360___dispatchEvent,"openfl.events.EventDispatcher","__dispatchEvent",0x417d6f7c,"openfl.events.EventDispatcher.__dispatchEvent","openfl/events/EventDispatcher.hx",360,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_426___removeAllListeners,"openfl.events.EventDispatcher","__removeAllListeners",0x1f26f486,"openfl.events.EventDispatcher.__removeAllListeners","openfl/events/EventDispatcher.hx",426,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_e38539b7b6ad7309_432___addListenerByPriority,"openfl.events.EventDispatcher","__addListenerByPriority",0xd68810ec,"openfl.events.EventDispatcher.__addListenerByPriority","openfl/events/EventDispatcher.hx",432,0xe2270714)
namespace openfl{
namespace events{

void EventDispatcher_obj::__construct(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_78_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(target,"target")
HXLINE(  78)
HXDLIN(  78)		if (::hx::IsNotNull( target )) {
HXLINE(  80)			this->_hx___targetDispatcher = target;
            		}
            	}

Dynamic EventDispatcher_obj::__CreateEmpty() { return new EventDispatcher_obj; }

void *EventDispatcher_obj::_hx_vtable = 0;

Dynamic EventDispatcher_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventDispatcher_obj > _hx_result = new EventDispatcher_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EventDispatcher_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
}

static ::openfl::events::IEventDispatcher_obj _hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::openfl::events::EventDispatcher_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::openfl::events::EventDispatcher_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::openfl::events::EventDispatcher_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::willTrigger,
};

void *EventDispatcher_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void EventDispatcher_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_e38539b7b6ad7309_178_addEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE( 178)
HXLINE( 179)		if (::hx::IsNull( listener )) {
HXLINE( 179)			return;
            		}
HXLINE( 181)		if (::hx::IsNull( this->_hx___eventMap )) {
HXLINE( 183)			this->_hx___eventMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 184)			this->_hx___iterators =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 187)		if (!(this->_hx___eventMap->exists(type))) {
HXLINE( 189)			HX_VARI( ::Array< ::Dynamic>,list) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 190)			list->push( ::openfl::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority));
HXLINE( 192)			HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) =  ::openfl::events::_EventDispatcher::DispatchIterator_obj::__alloc( HX_CTX ,list);
HXLINE( 194)			this->_hx___eventMap->set(type,list);
HXLINE( 195)			this->_hx___iterators->set(type,::Array_obj< ::Dynamic>::__new(1)->init(0,iterator));
            		}
            		else {
HXLINE( 199)			HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 201)			{
HXLINE( 201)				int _g = 0;
HXDLIN( 201)				int _g1 = list->length;
HXDLIN( 201)				while((_g < _g1)){
HXLINE( 201)					_g = (_g + 1);
HXDLIN( 201)					HX_VARI( int,i) = (_g - 1);
HXLINE( 203)					if (list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture)) {
HXLINE( 203)						return;
            					}
            				}
            			}
HXLINE( 206)			HX_VARI( ::Array< ::Dynamic>,iterators) = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 208)			{
HXLINE( 208)				int _g2 = 0;
HXDLIN( 208)				while((_g2 < iterators->length)){
HXLINE( 208)					HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) = iterators->__get(_g2).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXDLIN( 208)					_g2 = (_g2 + 1);
HXLINE( 210)					if (iterator->active) {
HXLINE( 212)						iterator->copy();
            					}
            				}
            			}
HXLINE( 216)			this->_hx___addListenerByPriority(list, ::openfl::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_236_dispatchEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 236)
HXLINE( 237)		if (::hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE( 239)			event->target = this->_hx___targetDispatcher;
            		}
            		else {
HXLINE( 243)			event->target = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 246)		return this->_hx___dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_270_hasEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 270)
HXLINE( 271)		if (::hx::IsNull( this->_hx___eventMap )) {
HXLINE( 271)			return false;
            		}
HXLINE( 273)		return this->_hx___eventMap->exists(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

void EventDispatcher_obj::removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_292_removeEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
HXLINE( 292)
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		if (::hx::IsNotNull( this->_hx___eventMap )) {
HXLINE( 293)			_hx_tmp = ::hx::IsNull( listener );
            		}
            		else {
HXLINE( 293)			_hx_tmp = true;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 293)			return;
            		}
HXLINE( 295)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 296)		if (::hx::IsNull( list )) {
HXLINE( 296)			return;
            		}
HXLINE( 298)		HX_VARI( ::Array< ::Dynamic>,iterators) = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 300)		{
HXLINE( 300)			int _g = 0;
HXDLIN( 300)			int _g1 = list->length;
HXDLIN( 300)			while((_g < _g1)){
HXLINE( 300)				_g = (_g + 1);
HXDLIN( 300)				HX_VARI( int,i) = (_g - 1);
HXLINE( 302)				if (list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture)) {
HXLINE( 304)					{
HXLINE( 304)						int _g = 0;
HXDLIN( 304)						while((_g < iterators->length)){
HXLINE( 304)							HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) = iterators->__get(_g).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXDLIN( 304)							_g = (_g + 1);
HXLINE( 306)							iterator->remove(list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >(),i);
            						}
            					}
HXLINE( 309)					list->removeRange(i,1);
HXLINE( 310)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 314)		if ((list->length == 0)) {
HXLINE( 316)			this->_hx___eventMap->remove(type);
HXLINE( 317)			this->_hx___iterators->remove(type);
            		}
HXLINE( 320)		if (!(( (bool)(this->_hx___eventMap->iterator()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ))) {
HXLINE( 322)			this->_hx___eventMap = null();
HXLINE( 323)			this->_hx___iterators = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_328_toString)
            	HX_STACK_THIS(this)
HXLINE( 328)
HXLINE( 329)		HX_VARI( ::String,full) = ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
HXLINE( 330)		HX_VARI_NAME( ::String,_hx_short,"short") = ( (::String)(full.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 331)		return ((HX_("[object ",86,f9,3d,d7) + _hx_short) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger(::String type){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_356_willTrigger)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 356)
HXDLIN( 356)		return this->hasEventListener(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

bool EventDispatcher_obj::_hx___dispatchEvent( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_e38539b7b6ad7309_360___dispatchEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 360)
HXLINE( 361)		bool _hx_tmp;
HXDLIN( 361)		if (::hx::IsNotNull( this->_hx___eventMap )) {
HXLINE( 361)			_hx_tmp = ::hx::IsNull( event );
            		}
            		else {
HXLINE( 361)			_hx_tmp = true;
            		}
HXDLIN( 361)		if (_hx_tmp) {
HXLINE( 361)			return true;
            		}
HXLINE( 363)		HX_VARI( ::String,type) = event->type;
HXLINE( 365)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 366)		if (::hx::IsNull( list )) {
HXLINE( 366)			return true;
            		}
HXLINE( 368)		if (::hx::IsNull( event->target )) {
HXLINE( 370)			if (::hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE( 372)				event->target = this->_hx___targetDispatcher;
            			}
            			else {
HXLINE( 376)				event->target = ::hx::ObjectPtr<OBJ_>(this);
            			}
            		}
HXLINE( 380)		event->currentTarget = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 382)		HX_VARI( bool,capture) = (event->eventPhase == 1);
HXLINE( 384)		HX_VARI( ::Array< ::Dynamic>,iterators) = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 385)		HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) = iterators->__get(0).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXLINE( 387)		if (iterator->active) {
HXLINE( 389)			iterator =  ::openfl::events::_EventDispatcher::DispatchIterator_obj::__alloc( HX_CTX ,list);
HXLINE( 390)			iterators->push(iterator);
            		}
HXLINE( 393)		iterator->start();
HXLINE( 395)		{
HXLINE( 395)			HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,listener) = iterator;
HXDLIN( 395)			while(listener->hasNext()){
HXLINE( 395)				HX_VARI(  ::openfl::events::_EventDispatcher::Listener,listener1) = listener->next();
HXLINE( 397)				if (::hx::IsNull( listener1 )) {
HXLINE( 397)					continue;
            				}
HXLINE( 399)				if ((listener1->useCapture == capture)) {
HXLINE( 402)					listener1->callback(event);
HXLINE( 404)					if (event->_hx___isCanceledNow) {
HXLINE( 406)						goto _hx_goto_11;
            					}
            				}
            			}
            			_hx_goto_11:;
            		}
HXLINE( 411)		iterator->stop();
HXLINE( 413)		if (::hx::IsNotEq( iterator,iterators->__get(0).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >() )) {
HXLINE( 415)			iterators->remove(iterator);
            		}
            		else {
HXLINE( 419)			iterator->reset(list);
            		}
HXLINE( 422)		return !(event->isDefaultPrevented());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,_hx___dispatchEvent,return )

void EventDispatcher_obj::_hx___removeAllListeners(){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_426___removeAllListeners)
            	HX_STACK_THIS(this)
HXLINE( 426)
HXLINE( 427)		this->_hx___eventMap = null();
HXLINE( 428)		this->_hx___iterators = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,_hx___removeAllListeners,(void))

void EventDispatcher_obj::_hx___addListenerByPriority(::Array< ::Dynamic> list, ::openfl::events::_EventDispatcher::Listener listener){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_432___addListenerByPriority)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(list,"list")
            	HX_STACK_ARG(listener,"listener")
HXLINE( 432)
HXLINE( 433)		HX_VARI( int,numElements) = list->length;
HXLINE( 434)		HX_VARI( int,addAtPosition) = numElements;
HXLINE( 436)		{
HXLINE( 436)			int _g = 0;
HXDLIN( 436)			int _g1 = numElements;
HXDLIN( 436)			while((_g < _g1)){
HXLINE( 436)				_g = (_g + 1);
HXDLIN( 436)				HX_VARI( int,i) = (_g - 1);
HXLINE( 438)				if ((list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->priority < listener->priority)) {
HXLINE( 440)					addAtPosition = i;
HXLINE( 442)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 446)		list->insert(addAtPosition,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,_hx___addListenerByPriority,(void))


::hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::Dynamic target) {
	::hx::ObjectPtr< EventDispatcher_obj > __this = new EventDispatcher_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic target) {
	EventDispatcher_obj *__this = (EventDispatcher_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventDispatcher_obj), true, "openfl.events.EventDispatcher"));
	*(void **)__this = EventDispatcher_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(_hx___iterators,"__iterators");
	HX_MARK_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(_hx___iterators,"__iterators");
	HX_VISIT_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
}

::hx::Val EventDispatcher_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return ::hx::Val( _hx___eventMap ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { return ::hx::Val( _hx___iterators ); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return ::hx::Val( willTrigger_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return ::hx::Val( _hx___dispatchEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return ::hx::Val( hasEventListener_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return ::hx::Val( _hx___targetDispatcher ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__removeAllListeners") ) { return ::hx::Val( _hx___removeAllListeners_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__addListenerByPriority") ) { return ::hx::Val( _hx___addListenerByPriority_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventDispatcher_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { _hx___eventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { _hx___iterators=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { _hx___targetDispatcher=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__eventMap",c2,f9,0a,64));
	outFields->push(HX_("__iterators",a5,af,92,c1));
	outFields->push(HX_("__targetDispatcher",78,03,5d,88));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventDispatcher_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventDispatcher_obj,_hx___eventMap),HX_("__eventMap",c2,f9,0a,64)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventDispatcher_obj,_hx___iterators),HX_("__iterators",a5,af,92,c1)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(EventDispatcher_obj,_hx___targetDispatcher),HX_("__targetDispatcher",78,03,5d,88)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventDispatcher_obj_sStaticStorageInfo = 0;
#endif

static ::String EventDispatcher_obj_sMemberFields[] = {
	HX_("__eventMap",c2,f9,0a,64),
	HX_("__iterators",a5,af,92,c1),
	HX_("__targetDispatcher",78,03,5d,88),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("hasEventListener",f4,2e,ea,0c),
	HX_("removeEventListener",ca,87,75,55),
	HX_("toString",ac,d0,6e,38),
	HX_("willTrigger",46,f4,3f,d8),
	HX_("__dispatchEvent",e0,ff,16,4e),
	HX_("__removeAllListeners",a2,79,93,27),
	HX_("__addListenerByPriority",50,a5,7e,d5),
	::String(null()) };

::hx::Class EventDispatcher_obj::__mClass;

void EventDispatcher_obj::__register()
{
	EventDispatcher_obj _hx_dummy;
	EventDispatcher_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.EventDispatcher",0a,d8,08,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventDispatcher_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventDispatcher_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventDispatcher_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventDispatcher_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
