#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
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

Void ActorScript_obj::__construct(::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("ActorScript::new","com/stencyl/behavior/ActorScript.hx",10);
{
	HX_STACK_LINE(11)
	super::__construct(engine);
	HX_STACK_LINE(13)
	this->actor = actor;
}
;
	return null();
}

ActorScript_obj::~ActorScript_obj() { }

Dynamic ActorScript_obj::__CreateEmpty() { return  new ActorScript_obj; }
hx::ObjectPtr< ActorScript_obj > ActorScript_obj::__new(::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< ActorScript_obj > result = new ActorScript_obj();
	result->__construct(actor,engine);
	return result;}

Dynamic ActorScript_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorScript_obj > result = new ActorScript_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ActorScript_obj::disableThisBehavior( ){
{
		HX_STACK_PUSH("ActorScript::disableThisBehavior","com/stencyl/behavior/ActorScript.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		this->actor->disableBehavior(this->wrapper->name);
	}
return null();
}


Dynamic ActorScript_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("ActorScript::shout","com/stencyl/behavior/ActorScript.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(31)
	return this->actor->shout(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(ActorScript_obj,shout,return )

Void ActorScript_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("ActorScript::setValue","com/stencyl/behavior/ActorScript.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(26)
		this->actor->setValue(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ActorScript_obj,setValue,(void))

Dynamic ActorScript_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("ActorScript::getValue","com/stencyl/behavior/ActorScript.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(21)
	return this->actor->getValue(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(ActorScript_obj,getValue,return )


ActorScript_obj::ActorScript_obj()
{
}

void ActorScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorScript);
	HX_MARK_MEMBER_NAME(actor,"actor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActorScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actor,"actor");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ActorScript_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shout") ) { return shout_dyn(); }
		if (HX_FIELD_EQ(inName,"actor") ) { return actor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableThisBehavior") ) { return disableThisBehavior_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActorScript_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"actor") ) { actor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("actor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("disableThisBehavior"),
	HX_CSTRING("shout"),
	HX_CSTRING("setValue"),
	HX_CSTRING("getValue"),
	HX_CSTRING("actor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorScript_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorScript_obj::__mClass,"__mClass");
};

Class ActorScript_obj::__mClass;

void ActorScript_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.ActorScript"), hx::TCanCast< ActorScript_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorScript_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
