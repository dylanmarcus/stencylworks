#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_CircleTransition
#include <com/stencyl/graphics/transitions/CircleTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void CircleTransition_obj::__construct(::String direction,Float duration,hx::Null< int >  __o_color)
{
HX_STACK_PUSH("CircleTransition::new","com/stencyl/graphics/transitions/CircleTransition.hx",30);
int color = __o_color.Default(-16777216);
{
	HX_STACK_LINE(31)
	super::__construct(duration);
	HX_STACK_LINE(33)
	this->color = color;
	HX_STACK_LINE(34)
	this->direction = direction;
	HX_STACK_LINE(36)
	if (((direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
		HX_STACK_LINE(38)
		this->beginRadius = (int)0;
		HX_STACK_LINE(39)
		this->endRadius = ::Std_obj::_int(::Math_obj::ceil(::flash::geom::Point_obj::distance(::flash::geom::Point_obj::__new((int)0,(int)0),::flash::geom::Point_obj::__new((::com::stencyl::Engine_obj::screenWidthHalf * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeightHalf * ::com::stencyl::Engine_obj::SCALE)))));
	}
	else{
		HX_STACK_LINE(42)
		if (((direction == ::com::stencyl::graphics::transitions::Transition_obj::OUT))){
			HX_STACK_LINE(44)
			this->beginRadius = ::Std_obj::_int(::Math_obj::ceil(::flash::geom::Point_obj::distance(::flash::geom::Point_obj::__new((int)0,(int)0),::flash::geom::Point_obj::__new((::com::stencyl::Engine_obj::screenWidthHalf * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeightHalf * ::com::stencyl::Engine_obj::SCALE)))));
			HX_STACK_LINE(45)
			this->endRadius = (int)0;
		}
	}
}
;
	return null();
}

CircleTransition_obj::~CircleTransition_obj() { }

Dynamic CircleTransition_obj::__CreateEmpty() { return  new CircleTransition_obj; }
hx::ObjectPtr< CircleTransition_obj > CircleTransition_obj::__new(::String direction,Float duration,hx::Null< int >  __o_color)
{  hx::ObjectPtr< CircleTransition_obj > result = new CircleTransition_obj();
	result->__construct(direction,duration,__o_color);
	return result;}

Dynamic CircleTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleTransition_obj > result = new CircleTransition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CircleTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("CircleTransition::cleanup","com/stencyl/graphics/transitions/CircleTransition.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		if (((this->s != null()))){
			HX_STACK_LINE(90)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->s);
			HX_STACK_LINE(91)
			this->s = null();
		}
	}
return null();
}


Void CircleTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("CircleTransition::draw","com/stencyl/graphics/transitions/CircleTransition.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(74)
		this->s->get_graphics()->clear();
		HX_STACK_LINE(76)
		this->s->get_graphics()->beginFill(this->color,null());
		HX_STACK_LINE(77)
		this->s->get_graphics()->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(78)
		this->s->get_graphics()->endFill();
		HX_STACK_LINE(80)
		this->circleImg->draw(::com::stencyl::Engine_obj::engine->master,null(),null(),null(),null(),null());
		HX_STACK_LINE(81)
		this->s->get_graphics()->beginBitmapFill(this->circleImg,null(),null(),null());
		HX_STACK_LINE(82)
		this->s->get_graphics()->drawCircle((::com::stencyl::Engine_obj::screenWidthHalf * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeightHalf * ::com::stencyl::Engine_obj::SCALE),this->radius);
		HX_STACK_LINE(83)
		this->s->get_graphics()->endFill();
	}
return null();
}


Void CircleTransition_obj::start( ){
{
		HX_STACK_PUSH("CircleTransition::start","com/stencyl/graphics/transitions/CircleTransition.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		this->active = true;
		HX_STACK_LINE(53)
		this->s = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(54)
		this->circleImg = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(55)
		this->radius = this->beginRadius;
		HX_STACK_LINE(57)
		if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
			HX_STACK_LINE(59)
			::flash::display::Graphics graphics = this->s->get_graphics();		HX_STACK_VAR(graphics,"graphics");
			HX_STACK_LINE(60)
			graphics->beginFill(this->color,null());
			HX_STACK_LINE(61)
			graphics->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(62)
			graphics->endFill();
		}
		HX_STACK_LINE(65)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->s);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::graphics::transitions::CircleTransition_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/CircleTransition.hx",69);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("radius") , __this->endRadius,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(69)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->duration,_Function_1_1::Block(this),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



CircleTransition_obj::CircleTransition_obj()
{
}

void CircleTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleTransition);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(circleImg,"circleImg");
	HX_MARK_MEMBER_NAME(endRadius,"endRadius");
	HX_MARK_MEMBER_NAME(beginRadius,"beginRadius");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircleTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(circleImg,"circleImg");
	HX_VISIT_MEMBER_NAME(endRadius,"endRadius");
	HX_VISIT_MEMBER_NAME(beginRadius,"beginRadius");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircleTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"circleImg") ) { return circleImg; }
		if (HX_FIELD_EQ(inName,"endRadius") ) { return endRadius; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginRadius") ) { return beginRadius; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"circleImg") ) { circleImg=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endRadius") ) { endRadius=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginRadius") ) { beginRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("circleImg"));
	outFields->push(HX_CSTRING("endRadius"));
	outFields->push(HX_CSTRING("beginRadius"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("s"),
	HX_CSTRING("circleImg"),
	HX_CSTRING("endRadius"),
	HX_CSTRING("beginRadius"),
	HX_CSTRING("radius"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleTransition_obj::__mClass,"__mClass");
};

Class CircleTransition_obj::__mClass;

void CircleTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.CircleTransition"), hx::TCanCast< CircleTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircleTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
