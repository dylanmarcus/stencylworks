#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_RectangleTransition
#include <com/stencyl/graphics/transitions/RectangleTransition.h>
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

Void RectangleTransition_obj::__construct(::String direction,Float duration,int color)
{
HX_STACK_PUSH("RectangleTransition::new","com/stencyl/graphics/transitions/RectangleTransition.hx",33);
{
	HX_STACK_LINE(34)
	super::__construct(duration);
	HX_STACK_LINE(36)
	this->color = color;
	HX_STACK_LINE(37)
	this->direction = direction;
	HX_STACK_LINE(39)
	if (((direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
		HX_STACK_LINE(41)
		this->beginWidth = (int)0;
		HX_STACK_LINE(42)
		this->beginHeight = (int)0;
		HX_STACK_LINE(43)
		this->endWidth = ::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(44)
		this->endHeight = ::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
	}
	else{
		HX_STACK_LINE(46)
		if (((direction == ::com::stencyl::graphics::transitions::Transition_obj::OUT))){
			HX_STACK_LINE(48)
			this->beginWidth = ::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(49)
			this->beginHeight = ::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(50)
			this->endWidth = (int)0;
			HX_STACK_LINE(51)
			this->endHeight = (int)0;
		}
		else{
			HX_STACK_LINE(55)
			::haxe::Log_obj::trace((HX_CSTRING("Invalid transition direction: ") + direction),hx::SourceInfo(HX_CSTRING("RectangleTransition.hx"),55,HX_CSTRING("com.stencyl.graphics.transitions.RectangleTransition"),HX_CSTRING("new")));
			HX_STACK_LINE(56)
			this->complete = true;
		}
	}
}
;
	return null();
}

RectangleTransition_obj::~RectangleTransition_obj() { }

Dynamic RectangleTransition_obj::__CreateEmpty() { return  new RectangleTransition_obj; }
hx::ObjectPtr< RectangleTransition_obj > RectangleTransition_obj::__new(::String direction,Float duration,int color)
{  hx::ObjectPtr< RectangleTransition_obj > result = new RectangleTransition_obj();
	result->__construct(direction,duration,color);
	return result;}

Dynamic RectangleTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleTransition_obj > result = new RectangleTransition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void RectangleTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("RectangleTransition::cleanup","com/stencyl/graphics/transitions/RectangleTransition.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		if (((this->rect != null()))){
			HX_STACK_LINE(101)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(102)
			this->rect = null();
		}
	}
return null();
}


Void RectangleTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("RectangleTransition::draw","com/stencyl/graphics/transitions/RectangleTransition.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(85)
		this->graphics->clear();
		HX_STACK_LINE(87)
		this->graphics->beginFill(this->color,null());
		HX_STACK_LINE(88)
		this->graphics->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(89)
		this->graphics->endFill();
		HX_STACK_LINE(91)
		this->rectangleImg->draw(::com::stencyl::Engine_obj::engine->master,null(),null(),null(),null(),null());
		HX_STACK_LINE(92)
		this->graphics->beginBitmapFill(this->rectangleImg,null(),null(),null());
		HX_STACK_LINE(93)
		this->graphics->drawRect((Float((((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE) - this->width))) / Float((int)2)),(Float((((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE) - this->height))) / Float((int)2)),this->width,this->height);
		HX_STACK_LINE(94)
		this->graphics->endFill();
	}
return null();
}


Void RectangleTransition_obj::start( ){
{
		HX_STACK_PUSH("RectangleTransition::start","com/stencyl/graphics/transitions/RectangleTransition.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_LINE(62)
		this->active = true;
		HX_STACK_LINE(63)
		this->width = this->beginWidth;
		HX_STACK_LINE(64)
		this->height = this->beginHeight;
		HX_STACK_LINE(66)
		this->rectangleImg = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(68)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(69)
		this->graphics = this->rect->get_graphics();
		HX_STACK_LINE(71)
		if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
			HX_STACK_LINE(73)
			this->graphics->beginFill(this->color,null());
			HX_STACK_LINE(74)
			this->graphics->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(75)
			this->graphics->endFill();
		}
		HX_STACK_LINE(78)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::graphics::transitions::RectangleTransition_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/RectangleTransition.hx",80);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("width") , __this->endWidth,false);
					__result->Add(HX_CSTRING("height") , __this->endHeight,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(80)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->duration,_Function_1_1::Block(this),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



RectangleTransition_obj::RectangleTransition_obj()
{
}

void RectangleTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RectangleTransition);
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(endHeight,"endHeight");
	HX_MARK_MEMBER_NAME(beginHeight,"beginHeight");
	HX_MARK_MEMBER_NAME(endWidth,"endWidth");
	HX_MARK_MEMBER_NAME(beginWidth,"beginWidth");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(rectangleImg,"rectangleImg");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RectangleTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(endHeight,"endHeight");
	HX_VISIT_MEMBER_NAME(beginHeight,"beginHeight");
	HX_VISIT_MEMBER_NAME(endWidth,"endWidth");
	HX_VISIT_MEMBER_NAME(beginWidth,"beginWidth");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(rectangleImg,"rectangleImg");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RectangleTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endWidth") ) { return endWidth; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endHeight") ) { return endHeight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginWidth") ) { return beginWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginHeight") ) { return beginHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectangleImg") ) { return rectangleImg; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectangleTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endWidth") ) { endWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endHeight") ) { endHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginWidth") ) { beginWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginHeight") ) { beginHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectangleImg") ) { rectangleImg=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("endHeight"));
	outFields->push(HX_CSTRING("beginHeight"));
	outFields->push(HX_CSTRING("endWidth"));
	outFields->push(HX_CSTRING("beginWidth"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("rectangleImg"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("rect"),
	HX_CSTRING("endHeight"),
	HX_CSTRING("beginHeight"),
	HX_CSTRING("endWidth"),
	HX_CSTRING("beginWidth"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("color"),
	HX_CSTRING("graphics"),
	HX_CSTRING("rectangleImg"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTransition_obj::__mClass,"__mClass");
};

Class RectangleTransition_obj::__mClass;

void RectangleTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.RectangleTransition"), hx::TCanCast< RectangleTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RectangleTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
