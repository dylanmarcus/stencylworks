#include <hxcpp.h>

#ifndef INCLUDED__RoxGestureAgent_TouchPoint
#include <_RoxGestureAgent/TouchPoint.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
namespace _RoxGestureAgent{

Void TouchPoint_obj::__construct(::flash::display::InteractiveObject src,Dynamic e,int touchId)
{
HX_STACK_PUSH("TouchPoint::new","RoxGestureAgent.hx",380);
{
	HX_STACK_LINE(381)
	this->tid = touchId;
	HX_STACK_LINE(382)
	this->sx = e->__Field(HX_CSTRING("stageX"),true);
	HX_STACK_LINE(383)
	this->sy = e->__Field(HX_CSTRING("stageY"),true);
	HX_STACK_LINE(384)
	this->spt = ::flash::geom::Point_obj::__new(this->sx,this->sy);
	HX_STACK_LINE(385)
	this->lpt = src->globalToLocal(this->spt);
	HX_STACK_LINE(386)
	this->lx = this->lpt->x;
	HX_STACK_LINE(387)
	this->ly = this->lpt->y;
	HX_STACK_LINE(388)
	this->time = ::haxe::Timer_obj::stamp();
}
;
	return null();
}

TouchPoint_obj::~TouchPoint_obj() { }

Dynamic TouchPoint_obj::__CreateEmpty() { return  new TouchPoint_obj; }
hx::ObjectPtr< TouchPoint_obj > TouchPoint_obj::__new(::flash::display::InteractiveObject src,Dynamic e,int touchId)
{  hx::ObjectPtr< TouchPoint_obj > result = new TouchPoint_obj();
	result->__construct(src,e,touchId);
	return result;}

Dynamic TouchPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchPoint_obj > result = new TouchPoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float TouchPoint_obj::distSqr( ::_RoxGestureAgent::TouchPoint pt){
	HX_STACK_PUSH("TouchPoint::distSqr","RoxGestureAgent.hx",391);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pt,"pt");
	HX_STACK_LINE(392)
	Float dx = (pt->sx - this->sx);		HX_STACK_VAR(dx,"dx");
	Float dy = (pt->sy - this->sy);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(393)
	return ((dx * dx) + (dy * dy));
}


HX_DEFINE_DYNAMIC_FUNC1(TouchPoint_obj,distSqr,return )


TouchPoint_obj::TouchPoint_obj()
{
}

void TouchPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchPoint);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(spt,"spt");
	HX_MARK_MEMBER_NAME(lpt,"lpt");
	HX_MARK_MEMBER_NAME(sy,"sy");
	HX_MARK_MEMBER_NAME(sx,"sx");
	HX_MARK_MEMBER_NAME(ly,"ly");
	HX_MARK_MEMBER_NAME(lx,"lx");
	HX_MARK_MEMBER_NAME(tid,"tid");
	HX_MARK_END_CLASS();
}

void TouchPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(spt,"spt");
	HX_VISIT_MEMBER_NAME(lpt,"lpt");
	HX_VISIT_MEMBER_NAME(sy,"sy");
	HX_VISIT_MEMBER_NAME(sx,"sx");
	HX_VISIT_MEMBER_NAME(ly,"ly");
	HX_VISIT_MEMBER_NAME(lx,"lx");
	HX_VISIT_MEMBER_NAME(tid,"tid");
}

Dynamic TouchPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sy") ) { return sy; }
		if (HX_FIELD_EQ(inName,"sx") ) { return sx; }
		if (HX_FIELD_EQ(inName,"ly") ) { return ly; }
		if (HX_FIELD_EQ(inName,"lx") ) { return lx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"spt") ) { return spt; }
		if (HX_FIELD_EQ(inName,"lpt") ) { return lpt; }
		if (HX_FIELD_EQ(inName,"tid") ) { return tid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"distSqr") ) { return distSqr_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sy") ) { sy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sx") ) { sx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ly") ) { ly=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lx") ) { lx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"spt") ) { spt=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lpt") ) { lpt=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tid") ) { tid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("spt"));
	outFields->push(HX_CSTRING("lpt"));
	outFields->push(HX_CSTRING("sy"));
	outFields->push(HX_CSTRING("sx"));
	outFields->push(HX_CSTRING("ly"));
	outFields->push(HX_CSTRING("lx"));
	outFields->push(HX_CSTRING("tid"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("distSqr"),
	HX_CSTRING("time"),
	HX_CSTRING("spt"),
	HX_CSTRING("lpt"),
	HX_CSTRING("sy"),
	HX_CSTRING("sx"),
	HX_CSTRING("ly"),
	HX_CSTRING("lx"),
	HX_CSTRING("tid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchPoint_obj::__mClass,"__mClass");
};

Class TouchPoint_obj::__mClass;

void TouchPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("_RoxGestureAgent.TouchPoint"), hx::TCanCast< TouchPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TouchPoint_obj::__boot()
{
}

} // end namespace _RoxGestureAgent
