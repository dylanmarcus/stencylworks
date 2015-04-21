#include <hxcpp.h>

#ifndef INCLUDED_RoxGestureAgent
#include <RoxGestureAgent.h>
#endif
#ifndef INCLUDED_RoxGestureEvent
#include <RoxGestureEvent.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif

Void RoxGestureEvent_obj::__construct(::String type,Dynamic __o_bubbles,Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY,Dynamic __o_inTouchPointId,::RoxGestureAgent inAgent,Dynamic inExtra)
{
HX_STACK_PUSH("RoxGestureEvent::new","RoxGestureEvent.hx",39);
Dynamic bubbles = __o_bubbles.Default(true);
Dynamic cancelable = __o_cancelable.Default(false);
Dynamic inTouchPointId = __o_inTouchPointId.Default(0);
{
	HX_STACK_LINE(40)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(41)
	this->localX = inLocalX;
	HX_STACK_LINE(42)
	this->localY = inLocalY;
	HX_STACK_LINE(43)
	this->stageX = inStageX;
	HX_STACK_LINE(44)
	this->stageY = inStageY;
	HX_STACK_LINE(45)
	this->touchPointID = inTouchPointId;
	HX_STACK_LINE(46)
	this->agent = inAgent;
	HX_STACK_LINE(47)
	this->extra = inExtra;
}
;
	return null();
}

RoxGestureEvent_obj::~RoxGestureEvent_obj() { }

Dynamic RoxGestureEvent_obj::__CreateEmpty() { return  new RoxGestureEvent_obj; }
hx::ObjectPtr< RoxGestureEvent_obj > RoxGestureEvent_obj::__new(::String type,Dynamic __o_bubbles,Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY,Dynamic __o_inTouchPointId,::RoxGestureAgent inAgent,Dynamic inExtra)
{  hx::ObjectPtr< RoxGestureEvent_obj > result = new RoxGestureEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,inLocalX,inLocalY,inStageX,inStageY,__o_inTouchPointId,inAgent,inExtra);
	return result;}

Dynamic RoxGestureEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RoxGestureEvent_obj > result = new RoxGestureEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

::String RoxGestureEvent_obj::toString( ){
	HX_STACK_PUSH("RoxGestureEvent::toString","RoxGestureEvent.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return ((((((((((((this->get_type() + HX_CSTRING("(")) + this->touchPointID) + HX_CSTRING("): local=(")) + this->localX) + HX_CSTRING(",")) + this->localY) + HX_CSTRING("), stage=(")) + this->stageX) + HX_CSTRING(",")) + this->stageY) + HX_CSTRING("), extra=")) + ((  ((::Std_obj::is(this->extra,hx::ClassOf< ::flash::geom::Point >()))) ? ::String(((((HX_CSTRING("Point(") + ::Std_obj::string(this->extra->__Field(HX_CSTRING("x"),true))) + HX_CSTRING(",")) + ::Std_obj::string(this->extra->__Field(HX_CSTRING("y"),true))) + HX_CSTRING(")"))) : ::String(this->extra) )));
}


::String RoxGestureEvent_obj::TOUCH_BEGIN;

::String RoxGestureEvent_obj::TOUCH_END;

::String RoxGestureEvent_obj::TOUCH_MOVE;

::String RoxGestureEvent_obj::TOUCH_OVER;

::String RoxGestureEvent_obj::TOUCH_OUT;

::String RoxGestureEvent_obj::TOUCH_ROLL_OVER;

::String RoxGestureEvent_obj::TOUCH_ROLL_OUT;

::String RoxGestureEvent_obj::TOUCH_TAP;

::String RoxGestureEvent_obj::GESTURE_TAP;

::String RoxGestureEvent_obj::GESTURE_LONG_PRESS;

::String RoxGestureEvent_obj::GESTURE_PAN;

::String RoxGestureEvent_obj::GESTURE_SWIPE;

::String RoxGestureEvent_obj::GESTURE_BEGIN;

::String RoxGestureEvent_obj::GESTURE_PINCH;

::String RoxGestureEvent_obj::GESTURE_ROTATION;

::String RoxGestureEvent_obj::GESTURE_END;


RoxGestureEvent_obj::RoxGestureEvent_obj()
{
}

void RoxGestureEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RoxGestureEvent);
	HX_MARK_MEMBER_NAME(extra,"extra");
	HX_MARK_MEMBER_NAME(agent,"agent");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(localX,"localX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RoxGestureEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extra,"extra");
	HX_VISIT_MEMBER_NAME(agent,"agent");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RoxGestureEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { return extra; }
		if (HX_FIELD_EQ(inName,"agent") ) { return agent; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"localY") ) { return localY; }
		if (HX_FIELD_EQ(inName,"localX") ) { return localX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RoxGestureEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"agent") ) { agent=inValue.Cast< ::RoxGestureAgent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RoxGestureEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("extra"));
	outFields->push(HX_CSTRING("agent"));
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("stageY"));
	outFields->push(HX_CSTRING("stageX"));
	outFields->push(HX_CSTRING("localY"));
	outFields->push(HX_CSTRING("localX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOUCH_BEGIN"),
	HX_CSTRING("TOUCH_END"),
	HX_CSTRING("TOUCH_MOVE"),
	HX_CSTRING("TOUCH_OVER"),
	HX_CSTRING("TOUCH_OUT"),
	HX_CSTRING("TOUCH_ROLL_OVER"),
	HX_CSTRING("TOUCH_ROLL_OUT"),
	HX_CSTRING("TOUCH_TAP"),
	HX_CSTRING("GESTURE_TAP"),
	HX_CSTRING("GESTURE_LONG_PRESS"),
	HX_CSTRING("GESTURE_PAN"),
	HX_CSTRING("GESTURE_SWIPE"),
	HX_CSTRING("GESTURE_BEGIN"),
	HX_CSTRING("GESTURE_PINCH"),
	HX_CSTRING("GESTURE_ROTATION"),
	HX_CSTRING("GESTURE_END"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("extra"),
	HX_CSTRING("agent"),
	HX_CSTRING("touchPointID"),
	HX_CSTRING("stageY"),
	HX_CSTRING("stageX"),
	HX_CSTRING("localY"),
	HX_CSTRING("localX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_TAP,"TOUCH_TAP");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_TAP,"GESTURE_TAP");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_LONG_PRESS,"GESTURE_LONG_PRESS");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PAN,"GESTURE_PAN");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_SWIPE,"GESTURE_SWIPE");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_BEGIN,"GESTURE_BEGIN");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PINCH,"GESTURE_PINCH");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_ROTATION,"GESTURE_ROTATION");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_END,"GESTURE_END");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_TAP,"TOUCH_TAP");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_TAP,"GESTURE_TAP");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_LONG_PRESS,"GESTURE_LONG_PRESS");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PAN,"GESTURE_PAN");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_SWIPE,"GESTURE_SWIPE");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_BEGIN,"GESTURE_BEGIN");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PINCH,"GESTURE_PINCH");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_ROTATION,"GESTURE_ROTATION");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_END,"GESTURE_END");
};

Class RoxGestureEvent_obj::__mClass;

void RoxGestureEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("RoxGestureEvent"), hx::TCanCast< RoxGestureEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RoxGestureEvent_obj::__boot()
{
	TOUCH_BEGIN= HX_CSTRING("rox_touch_begin");
	TOUCH_END= HX_CSTRING("rox_touch_end");
	TOUCH_MOVE= HX_CSTRING("rox_touch_move");
	TOUCH_OVER= HX_CSTRING("rox_touch_over");
	TOUCH_OUT= HX_CSTRING("rox_touch_out");
	TOUCH_ROLL_OVER= HX_CSTRING("rox_touch_roll_over");
	TOUCH_ROLL_OUT= HX_CSTRING("rox_touch_roll_in");
	TOUCH_TAP= HX_CSTRING("rox_touch_tap");
	GESTURE_TAP= HX_CSTRING("rox_gesture_tap");
	GESTURE_LONG_PRESS= HX_CSTRING("rox_gesture_long_press");
	GESTURE_PAN= HX_CSTRING("rox_gesture_pan");
	GESTURE_SWIPE= HX_CSTRING("rox_gesture_swipe");
	GESTURE_BEGIN= HX_CSTRING("rox_gesture_begin");
	GESTURE_PINCH= HX_CSTRING("rox_gesture_pinch");
	GESTURE_ROTATION= HX_CSTRING("rox_gesture_rotation");
	GESTURE_END= HX_CSTRING("rox_gesture_end");
}

