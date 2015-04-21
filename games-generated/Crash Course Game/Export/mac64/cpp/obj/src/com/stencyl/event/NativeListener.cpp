#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_NativeListener
#include <com/stencyl/event/NativeListener.h>
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

Void NativeListener_obj::__construct(int metaType,int type,Dynamic fn)
{
HX_STACK_PUSH("NativeListener::new","com/stencyl/event/NativeListener.hx",10);
{
	HX_STACK_LINE(11)
	this->metaType = metaType;
	HX_STACK_LINE(12)
	this->type = type;
	HX_STACK_LINE(13)
	this->fn = fn;
}
;
	return null();
}

NativeListener_obj::~NativeListener_obj() { }

Dynamic NativeListener_obj::__CreateEmpty() { return  new NativeListener_obj; }
hx::ObjectPtr< NativeListener_obj > NativeListener_obj::__new(int metaType,int type,Dynamic fn)
{  hx::ObjectPtr< NativeListener_obj > result = new NativeListener_obj();
	result->__construct(metaType,type,fn);
	return result;}

Dynamic NativeListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeListener_obj > result = new NativeListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void NativeListener_obj::checkEvents( ::com::stencyl::event::EventMaster q){
{
		HX_STACK_PUSH("NativeListener::checkEvents","com/stencyl/event/NativeListener.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_LINE(19)
		Array< ::Dynamic > list = q->eventTable->get(this->metaType);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(21)
		if (((list != null()))){
			HX_STACK_LINE(23)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			while(((_g < list->length))){
				HX_STACK_LINE(23)
				::com::stencyl::event::StencylEvent event = list->__get(_g).StaticCast< ::com::stencyl::event::StencylEvent >();		HX_STACK_VAR(event,"event");
				HX_STACK_LINE(23)
				++(_g);
				HX_STACK_LINE(25)
				if (((event->type == this->type))){
					HX_STACK_LINE(26)
					if (((this->metaType == ::com::stencyl::event::EventMaster_obj::TYPE_ADS))){
						HX_STACK_LINE(28)
						this->fn();
					}
					else{
						HX_STACK_LINE(32)
						if (((this->metaType == ::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES))){
							HX_STACK_LINE(33)
							this->fn(event->data1);
						}
						else{
							HX_STACK_LINE(37)
							if (((this->metaType == ::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER))){
								HX_STACK_LINE(38)
								this->fn(event->data1);
							}
							else{
								HX_STACK_LINE(42)
								if (((this->metaType == ::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD))){
									HX_STACK_LINE(43)
									this->fn(event->data1);
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeListener_obj,checkEvents,(void))


NativeListener_obj::NativeListener_obj()
{
}

void NativeListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeListener);
	HX_MARK_MEMBER_NAME(fn,"fn");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(metaType,"metaType");
	HX_MARK_END_CLASS();
}

void NativeListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fn,"fn");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(metaType,"metaType");
}

Dynamic NativeListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fn") ) { return fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"metaType") ) { return metaType; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkEvents") ) { return checkEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fn") ) { fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"metaType") ) { metaType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fn"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("metaType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("checkEvents"),
	HX_CSTRING("fn"),
	HX_CSTRING("type"),
	HX_CSTRING("metaType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeListener_obj::__mClass,"__mClass");
};

Class NativeListener_obj::__mClass;

void NativeListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.event.NativeListener"), hx::TCanCast< NativeListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NativeListener_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace event
