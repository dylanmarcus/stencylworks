#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_StencylEvent
#include <com/stencyl/event/StencylEvent.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace com{
namespace stencyl{
namespace event{

Void EventMaster_obj::__construct()
{
HX_STACK_PUSH("EventMaster::new","com/stencyl/event/EventMaster.hx",17);
{
	HX_STACK_LINE(18)
	this->eventTable = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(20)
	this->eventTable->set(::com::stencyl::event::EventMaster_obj::TYPE_ADS,Array_obj< ::Dynamic >::__new());
	HX_STACK_LINE(21)
	this->eventTable->set(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES,Array_obj< ::Dynamic >::__new());
	HX_STACK_LINE(22)
	this->eventTable->set(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER,Array_obj< ::Dynamic >::__new());
	HX_STACK_LINE(23)
	this->eventTable->set(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD,Array_obj< ::Dynamic >::__new());
}
;
	return null();
}

EventMaster_obj::~EventMaster_obj() { }

Dynamic EventMaster_obj::__CreateEmpty() { return  new EventMaster_obj; }
hx::ObjectPtr< EventMaster_obj > EventMaster_obj::__new()
{  hx::ObjectPtr< EventMaster_obj > result = new EventMaster_obj();
	result->__construct();
	return result;}

Dynamic EventMaster_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventMaster_obj > result = new EventMaster_obj();
	result->__construct();
	return result;}

Void EventMaster_obj::clear( ){
{
		HX_STACK_PUSH("EventMaster::clear","com/stencyl/event/EventMaster.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Dynamic arr = this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_ADS);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(48)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			Dynamic arr = this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(49)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			Dynamic arr = this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(50)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Dynamic arr = this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(51)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventMaster_obj,clear,(void))

Void EventMaster_obj::addKeyboardEvent( ::com::stencyl::event::StencylEvent e){
{
		HX_STACK_PUSH("EventMaster::addKeyboardEvent","com/stencyl/event/EventMaster.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(42)
		this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD)->__Field(HX_CSTRING("push"),true)(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addKeyboardEvent,(void))

Void EventMaster_obj::addGameCenterEvent( ::com::stencyl::event::StencylEvent e){
{
		HX_STACK_PUSH("EventMaster::addGameCenterEvent","com/stencyl/event/EventMaster.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(37)
		this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER)->__Field(HX_CSTRING("push"),true)(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addGameCenterEvent,(void))

Void EventMaster_obj::addPurchaseEvent( ::com::stencyl::event::StencylEvent e){
{
		HX_STACK_PUSH("EventMaster::addPurchaseEvent","com/stencyl/event/EventMaster.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(32)
		this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES)->__Field(HX_CSTRING("push"),true)(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addPurchaseEvent,(void))

Void EventMaster_obj::addAdEvent( ::com::stencyl::event::StencylEvent e){
{
		HX_STACK_PUSH("EventMaster::addAdEvent","com/stencyl/event/EventMaster.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(27)
		this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_ADS)->__Field(HX_CSTRING("push"),true)(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addAdEvent,(void))

int EventMaster_obj::TYPE_ADS;

int EventMaster_obj::TYPE_PURCHASES;

int EventMaster_obj::TYPE_GAMECENTER;

int EventMaster_obj::TYPE_KEYBOARD;


EventMaster_obj::EventMaster_obj()
{
}

void EventMaster_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventMaster);
	HX_MARK_MEMBER_NAME(eventTable,"eventTable");
	HX_MARK_END_CLASS();
}

void EventMaster_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(eventTable,"eventTable");
}

Dynamic EventMaster_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TYPE_ADS") ) { return TYPE_ADS; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addAdEvent") ) { return addAdEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"eventTable") ) { return eventTable; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TYPE_KEYBOARD") ) { return TYPE_KEYBOARD; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TYPE_PURCHASES") ) { return TYPE_PURCHASES; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TYPE_GAMECENTER") ) { return TYPE_GAMECENTER; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addKeyboardEvent") ) { return addKeyboardEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addPurchaseEvent") ) { return addPurchaseEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addGameCenterEvent") ) { return addGameCenterEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventMaster_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"TYPE_ADS") ) { TYPE_ADS=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventTable") ) { eventTable=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TYPE_KEYBOARD") ) { TYPE_KEYBOARD=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TYPE_PURCHASES") ) { TYPE_PURCHASES=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TYPE_GAMECENTER") ) { TYPE_GAMECENTER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventMaster_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("eventTable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TYPE_ADS"),
	HX_CSTRING("TYPE_PURCHASES"),
	HX_CSTRING("TYPE_GAMECENTER"),
	HX_CSTRING("TYPE_KEYBOARD"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("addKeyboardEvent"),
	HX_CSTRING("addGameCenterEvent"),
	HX_CSTRING("addPurchaseEvent"),
	HX_CSTRING("addAdEvent"),
	HX_CSTRING("eventTable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventMaster_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_ADS,"TYPE_ADS");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_PURCHASES,"TYPE_PURCHASES");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_GAMECENTER,"TYPE_GAMECENTER");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_KEYBOARD,"TYPE_KEYBOARD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventMaster_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_ADS,"TYPE_ADS");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_PURCHASES,"TYPE_PURCHASES");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_GAMECENTER,"TYPE_GAMECENTER");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_KEYBOARD,"TYPE_KEYBOARD");
};

Class EventMaster_obj::__mClass;

void EventMaster_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.event.EventMaster"), hx::TCanCast< EventMaster_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EventMaster_obj::__boot()
{
	TYPE_ADS= (int)1;
	TYPE_PURCHASES= (int)2;
	TYPE_GAMECENTER= (int)3;
	TYPE_KEYBOARD= (int)4;
}

} // end namespace com
} // end namespace stencyl
} // end namespace event
