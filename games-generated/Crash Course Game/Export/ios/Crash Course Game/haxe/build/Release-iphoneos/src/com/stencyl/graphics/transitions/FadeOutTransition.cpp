#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeOutTransition
#include <com/stencyl/graphics/transitions/FadeOutTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
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
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{

Void FadeOutTransition_obj::__construct(Float duration,hx::Null< int >  __o_color)
{
HX_STACK_PUSH("FadeOutTransition::new","com/stencyl/graphics/transitions/FadeOutTransition.hx",18);
int color = __o_color.Default(-16777216);
{
	HX_STACK_LINE(19)
	super::__construct(duration);
	HX_STACK_LINE(21)
	this->color = color;
	HX_STACK_LINE(22)
	this->direction = ::com::stencyl::graphics::transitions::Transition_obj::IN;
}
;
	return null();
}

FadeOutTransition_obj::~FadeOutTransition_obj() { }

Dynamic FadeOutTransition_obj::__CreateEmpty() { return  new FadeOutTransition_obj; }
hx::ObjectPtr< FadeOutTransition_obj > FadeOutTransition_obj::__new(Float duration,hx::Null< int >  __o_color)
{  hx::ObjectPtr< FadeOutTransition_obj > result = new FadeOutTransition_obj();
	result->__construct(duration,__o_color);
	return result;}

Dynamic FadeOutTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FadeOutTransition_obj > result = new FadeOutTransition_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FadeOutTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("FadeOutTransition::cleanup","com/stencyl/graphics/transitions/FadeOutTransition.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		if (((this->rect != null()))){
			HX_STACK_LINE(44)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(45)
			this->rect = null();
		}
	}
return null();
}


Void FadeOutTransition_obj::start( ){
{
		HX_STACK_PUSH("FadeOutTransition::start","com/stencyl/graphics/transitions/FadeOutTransition.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_LINE(27)
		this->active = true;
		HX_STACK_LINE(29)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(30)
		this->rect->set_alpha((int)0);
		HX_STACK_LINE(31)
		::flash::display::Graphics g = this->rect->get_graphics();		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(32)
		g->beginFill(this->color,null());
		HX_STACK_LINE(33)
		g->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(34)
		g->endFill();
		HX_STACK_LINE(35)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/FadeOutTransition.hx",37);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(37)
		::motion::Actuate_obj::tween(this->rect,this->duration,_Function_1_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



FadeOutTransition_obj::FadeOutTransition_obj()
{
}

void FadeOutTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FadeOutTransition);
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FadeOutTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FadeOutTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FadeOutTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FadeOutTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("start"),
	HX_CSTRING("rect"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FadeOutTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FadeOutTransition_obj::__mClass,"__mClass");
};

Class FadeOutTransition_obj::__mClass;

void FadeOutTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.FadeOutTransition"), hx::TCanCast< FadeOutTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FadeOutTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
