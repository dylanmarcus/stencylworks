#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_BlindsTransition
#include <com/stencyl/graphics/transitions/BlindsTransition.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void BlindsTransition_obj::__construct(::String direction,Float duration,hx::Null< int >  __o_numBlinds,int color)
{
HX_STACK_PUSH("BlindsTransition::new","com/stencyl/graphics/transitions/BlindsTransition.hx",31);
int numBlinds = __o_numBlinds.Default(10);
{
	HX_STACK_LINE(32)
	super::__construct(duration);
	HX_STACK_LINE(34)
	this->color = color;
	HX_STACK_LINE(35)
	this->direction = direction;
	HX_STACK_LINE(36)
	this->numBlinds = numBlinds;
	HX_STACK_LINE(38)
	if (((direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
		HX_STACK_LINE(40)
		this->beginBlindWidth = (Float((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)) / Float(numBlinds));
		HX_STACK_LINE(41)
		this->endBlindWidth = (int)0;
	}
	else{
		HX_STACK_LINE(43)
		if (((direction == ::com::stencyl::graphics::transitions::Transition_obj::OUT))){
			HX_STACK_LINE(45)
			this->beginBlindWidth = (int)0;
			HX_STACK_LINE(46)
			this->endBlindWidth = (Float((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)) / Float(numBlinds));
		}
		else{
			HX_STACK_LINE(50)
			::haxe::Log_obj::trace((HX_CSTRING("Invalid transition direction: ") + direction),hx::SourceInfo(HX_CSTRING("BlindsTransition.hx"),50,HX_CSTRING("com.stencyl.graphics.transitions.BlindsTransition"),HX_CSTRING("new")));
			HX_STACK_LINE(51)
			this->complete = true;
		}
	}
}
;
	return null();
}

BlindsTransition_obj::~BlindsTransition_obj() { }

Dynamic BlindsTransition_obj::__CreateEmpty() { return  new BlindsTransition_obj; }
hx::ObjectPtr< BlindsTransition_obj > BlindsTransition_obj::__new(::String direction,Float duration,hx::Null< int >  __o_numBlinds,int color)
{  hx::ObjectPtr< BlindsTransition_obj > result = new BlindsTransition_obj();
	result->__construct(direction,duration,__o_numBlinds,color);
	return result;}

Dynamic BlindsTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlindsTransition_obj > result = new BlindsTransition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void BlindsTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("BlindsTransition::cleanup","com/stencyl/graphics/transitions/BlindsTransition.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(101)
		if (((this->rect != null()))){
			HX_STACK_LINE(104)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(105)
			this->rect = null();
		}
	}
return null();
}


Void BlindsTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("BlindsTransition::draw","com/stencyl/graphics/transitions/BlindsTransition.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(79)
		this->graphics->clear();
		HX_STACK_LINE(80)
		this->graphics->beginFill(this->color,null());
		HX_STACK_LINE(82)
		this->blindRect->x = (int)0;
		HX_STACK_LINE(83)
		this->blindRect->width = this->blindWidth;
		HX_STACK_LINE(85)
		if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
			HX_STACK_LINE(86)
			hx::AddEq(this->blindRect->x,((Float((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)) / Float(this->numBlinds)) - this->blindWidth));
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->numBlinds;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while(((_g1 < _g))){
				HX_STACK_LINE(90)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				this->graphics->drawRect(this->blindRect->x,this->blindRect->y,this->blindRect->width,this->blindRect->height);
				HX_STACK_LINE(94)
				hx::AddEq(this->blindRect->x,(Float((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)) / Float(this->numBlinds)));
			}
		}
		HX_STACK_LINE(97)
		this->graphics->endFill();
	}
return null();
}


Void BlindsTransition_obj::start( ){
{
		HX_STACK_PUSH("BlindsTransition::start","com/stencyl/graphics/transitions/BlindsTransition.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_LINE(57)
		this->active = true;
		HX_STACK_LINE(59)
		this->blindRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->beginBlindWidth,(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(60)
		this->blindWidth = this->beginBlindWidth;
		HX_STACK_LINE(62)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(63)
		this->graphics = this->rect->get_graphics();
		HX_STACK_LINE(65)
		if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
			HX_STACK_LINE(67)
			this->graphics->beginFill(this->color,null());
			HX_STACK_LINE(68)
			this->graphics->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(69)
			this->graphics->endFill();
		}
		HX_STACK_LINE(72)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::graphics::transitions::BlindsTransition_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/BlindsTransition.hx",74);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("blindWidth") , __this->endBlindWidth,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(74)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->duration,_Function_1_1::Block(this),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



BlindsTransition_obj::BlindsTransition_obj()
{
}

void BlindsTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlindsTransition);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(blindRect,"blindRect");
	HX_MARK_MEMBER_NAME(endBlindWidth,"endBlindWidth");
	HX_MARK_MEMBER_NAME(beginBlindWidth,"beginBlindWidth");
	HX_MARK_MEMBER_NAME(blindWidth,"blindWidth");
	HX_MARK_MEMBER_NAME(numBlinds,"numBlinds");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BlindsTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(blindRect,"blindRect");
	HX_VISIT_MEMBER_NAME(endBlindWidth,"endBlindWidth");
	HX_VISIT_MEMBER_NAME(beginBlindWidth,"beginBlindWidth");
	HX_VISIT_MEMBER_NAME(blindWidth,"blindWidth");
	HX_VISIT_MEMBER_NAME(numBlinds,"numBlinds");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BlindsTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blindRect") ) { return blindRect; }
		if (HX_FIELD_EQ(inName,"numBlinds") ) { return numBlinds; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blindWidth") ) { return blindWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"endBlindWidth") ) { return endBlindWidth; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBlindWidth") ) { return beginBlindWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlindsTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blindRect") ) { blindRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numBlinds") ) { numBlinds=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blindWidth") ) { blindWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"endBlindWidth") ) { endBlindWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBlindWidth") ) { beginBlindWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlindsTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("blindRect"));
	outFields->push(HX_CSTRING("endBlindWidth"));
	outFields->push(HX_CSTRING("beginBlindWidth"));
	outFields->push(HX_CSTRING("blindWidth"));
	outFields->push(HX_CSTRING("numBlinds"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("graphics"),
	HX_CSTRING("rect"),
	HX_CSTRING("blindRect"),
	HX_CSTRING("endBlindWidth"),
	HX_CSTRING("beginBlindWidth"),
	HX_CSTRING("blindWidth"),
	HX_CSTRING("numBlinds"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlindsTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlindsTransition_obj::__mClass,"__mClass");
};

Class BlindsTransition_obj::__mClass;

void BlindsTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.BlindsTransition"), hx::TCanCast< BlindsTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BlindsTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
