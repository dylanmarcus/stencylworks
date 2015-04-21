#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#include <com/stencyl/behavior/TimedTask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void TimedTask_obj::__construct(Dynamic toExecute,int interval,bool repeats,::com::stencyl::models::Actor actor)
{
HX_STACK_PUSH("TimedTask::new","com/stencyl/behavior/TimedTask.hx",20);
{
	HX_STACK_LINE(21)
	this->toExecute = toExecute;
	HX_STACK_LINE(22)
	this->interval = interval;
	HX_STACK_LINE(23)
	this->repeats = repeats;
	HX_STACK_LINE(24)
	this->actor = actor;
	HX_STACK_LINE(26)
	this->done = false;
	HX_STACK_LINE(28)
	this->timer = interval;
}
;
	return null();
}

TimedTask_obj::~TimedTask_obj() { }

Dynamic TimedTask_obj::__CreateEmpty() { return  new TimedTask_obj; }
hx::ObjectPtr< TimedTask_obj > TimedTask_obj::__new(Dynamic toExecute,int interval,bool repeats,::com::stencyl::models::Actor actor)
{  hx::ObjectPtr< TimedTask_obj > result = new TimedTask_obj();
	result->__construct(toExecute,interval,repeats,actor);
	return result;}

Dynamic TimedTask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimedTask_obj > result = new TimedTask_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void TimedTask_obj::update( int timeElapsed){
{
		HX_STACK_PUSH("TimedTask::update","com/stencyl/behavior/TimedTask.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(timeElapsed,"timeElapsed");
		HX_STACK_LINE(33)
		if (((bool((this->actor != null())) && bool(!(this->actor->isAlive()))))){
			HX_STACK_LINE(35)
			this->done = true;
			HX_STACK_LINE(36)
			return null();
		}
		HX_STACK_LINE(39)
		if (((bool((bool((this->actor == null())) && bool(::com::stencyl::Engine_obj::engine->isPaused()))) || bool((bool((this->actor != null())) && bool(this->actor->isPaused())))))){
			HX_STACK_LINE(40)
			return null();
		}
		HX_STACK_LINE(44)
		hx::SubEq(this->timer,timeElapsed);
		HX_STACK_LINE(46)
		if (((this->timer <= (int)0))){
			HX_STACK_LINE(48)
			this->toExecute(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(49)
			this->done = !(this->repeats);
			HX_STACK_LINE(51)
			if ((this->repeats)){
				HX_STACK_LINE(52)
				hx::AddEq(this->timer,this->interval);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimedTask_obj,update,(void))


TimedTask_obj::TimedTask_obj()
{
}

void TimedTask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimedTask);
	HX_MARK_MEMBER_NAME(actorCreateTime,"actorCreateTime");
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(actor,"actor");
	HX_MARK_MEMBER_NAME(repeats,"repeats");
	HX_MARK_MEMBER_NAME(interval,"interval");
	HX_MARK_MEMBER_NAME(toExecute,"toExecute");
	HX_MARK_END_CLASS();
}

void TimedTask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actorCreateTime,"actorCreateTime");
	HX_VISIT_MEMBER_NAME(done,"done");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(actor,"actor");
	HX_VISIT_MEMBER_NAME(repeats,"repeats");
	HX_VISIT_MEMBER_NAME(interval,"interval");
	HX_VISIT_MEMBER_NAME(toExecute,"toExecute");
}

Dynamic TimedTask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"actor") ) { return actor; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeats") ) { return repeats; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interval") ) { return interval; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toExecute") ) { return toExecute; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actorCreateTime") ) { return actorCreateTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimedTask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actor") ) { actor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeats") ) { repeats=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interval") ) { interval=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toExecute") ) { toExecute=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actorCreateTime") ) { actorCreateTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimedTask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("actorCreateTime"));
	outFields->push(HX_CSTRING("done"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("actor"));
	outFields->push(HX_CSTRING("repeats"));
	outFields->push(HX_CSTRING("interval"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("actorCreateTime"),
	HX_CSTRING("done"),
	HX_CSTRING("timer"),
	HX_CSTRING("actor"),
	HX_CSTRING("repeats"),
	HX_CSTRING("interval"),
	HX_CSTRING("toExecute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimedTask_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimedTask_obj::__mClass,"__mClass");
};

Class TimedTask_obj::__mClass;

void TimedTask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.TimedTask"), hx::TCanCast< TimedTask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TimedTask_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
