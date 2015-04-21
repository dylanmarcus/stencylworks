#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_SlideTransition
#include <com/stencyl/graphics/transitions/SlideTransition.h>
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

Void SlideTransition_obj::__construct(::flash::display::Sprite sceneSpr,Float duration,::String slideDirection)
{
HX_STACK_PUSH("SlideTransition::new","com/stencyl/graphics/transitions/SlideTransition.hx",36);
{
	HX_STACK_LINE(37)
	super::__construct(duration);
	HX_STACK_LINE(39)
	this->sceneSpr = sceneSpr;
	HX_STACK_LINE(41)
	this->oldSceneMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(42)
	this->newSceneMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(43)
	this->tx = (int)0;
	HX_STACK_LINE(44)
	this->ty = (int)0;
	HX_STACK_LINE(46)
	if (((slideDirection == ::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_UP))){
		HX_STACK_LINE(48)
		this->newSceneMatrix->ty = (-(::com::stencyl::Engine_obj::screenHeight) * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(49)
		this->ty = (::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE);
	}
	else{
		HX_STACK_LINE(51)
		if (((slideDirection == ::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_DOWN))){
			HX_STACK_LINE(53)
			this->newSceneMatrix->ty = (::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE);
			HX_STACK_LINE(54)
			this->ty = (-(::com::stencyl::Engine_obj::screenHeight) * ::com::stencyl::Engine_obj::SCALE);
		}
		else{
			HX_STACK_LINE(56)
			if (((slideDirection == ::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_LEFT))){
				HX_STACK_LINE(58)
				this->newSceneMatrix->tx = (-(::com::stencyl::Engine_obj::screenWidth) * ::com::stencyl::Engine_obj::SCALE);
				HX_STACK_LINE(59)
				this->tx = (::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE);
			}
			else{
				HX_STACK_LINE(61)
				if (((slideDirection == ::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_RIGHT))){
					HX_STACK_LINE(63)
					this->newSceneMatrix->tx = (::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE);
					HX_STACK_LINE(64)
					this->tx = (-(::com::stencyl::Engine_obj::screenWidth) * ::com::stencyl::Engine_obj::SCALE);
				}
				else{
					HX_STACK_LINE(68)
					::haxe::Log_obj::trace((HX_CSTRING("Invalid slide direction: ") + slideDirection),hx::SourceInfo(HX_CSTRING("SlideTransition.hx"),68,HX_CSTRING("com.stencyl.graphics.transitions.SlideTransition"),HX_CSTRING("new")));
					HX_STACK_LINE(69)
					this->complete = true;
				}
			}
		}
	}
}
;
	return null();
}

SlideTransition_obj::~SlideTransition_obj() { }

Dynamic SlideTransition_obj::__CreateEmpty() { return  new SlideTransition_obj; }
hx::ObjectPtr< SlideTransition_obj > SlideTransition_obj::__new(::flash::display::Sprite sceneSpr,Float duration,::String slideDirection)
{  hx::ObjectPtr< SlideTransition_obj > result = new SlideTransition_obj();
	result->__construct(sceneSpr,duration,slideDirection);
	return result;}

Dynamic SlideTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SlideTransition_obj > result = new SlideTransition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SlideTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("SlideTransition::cleanup","com/stencyl/graphics/transitions/SlideTransition.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_LINE(110)
		this->sceneSpr = null();
		HX_STACK_LINE(112)
		if (((this->rect != null()))){
			HX_STACK_LINE(114)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(115)
			this->rect = null();
		}
	}
return null();
}


Void SlideTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("SlideTransition::draw","com/stencyl/graphics/transitions/SlideTransition.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(97)
		this->graphics->clear();
		HX_STACK_LINE(99)
		this->newBitmap->draw(this->sceneSpr,null(),null(),null(),null(),null());
		HX_STACK_LINE(100)
		this->drawBitmap->draw(this->newBitmap,this->newSceneMatrix,null(),null(),null(),null());
		HX_STACK_LINE(101)
		this->drawBitmap->draw(this->oldBitmap,this->oldSceneMatrix,null(),null(),null(),null());
		HX_STACK_LINE(103)
		this->graphics->beginBitmapFill(this->drawBitmap,null(),null(),null());
		HX_STACK_LINE(104)
		this->graphics->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(105)
		this->graphics->endFill();
	}
return null();
}


Void SlideTransition_obj::start( ){
{
		HX_STACK_PUSH("SlideTransition::start","com/stencyl/graphics/transitions/SlideTransition.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_LINE(75)
		this->active = true;
		HX_STACK_LINE(77)
		this->oldBitmap = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(78)
		this->oldBitmap->draw(this->sceneSpr,null(),null(),null(),null(),null());
		HX_STACK_LINE(80)
		this->newBitmap = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(81)
		this->drawBitmap = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(83)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(84)
		this->graphics = this->rect->get_graphics();
		HX_STACK_LINE(85)
		this->graphics->beginBitmapFill(this->oldBitmap,null(),null(),null());
		HX_STACK_LINE(86)
		this->graphics->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(87)
		this->graphics->endFill();
		HX_STACK_LINE(89)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::graphics::transitions::SlideTransition_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/SlideTransition.hx",91);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("tx") , __this->tx,false);
					__result->Add(HX_CSTRING("ty") , __this->ty,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(91)
		::motion::Actuate_obj::tween(this->oldSceneMatrix,this->duration,_Function_1_1::Block(this),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/SlideTransition.hx",92);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("tx") , (int)0,false);
					__result->Add(HX_CSTRING("ty") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		::motion::Actuate_obj::tween(this->newSceneMatrix,this->duration,_Function_1_2::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}


::String SlideTransition_obj::SLIDE_UP;

::String SlideTransition_obj::SLIDE_DOWN;

::String SlideTransition_obj::SLIDE_LEFT;

::String SlideTransition_obj::SLIDE_RIGHT;


SlideTransition_obj::SlideTransition_obj()
{
}

void SlideTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlideTransition);
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(newSceneMatrix,"newSceneMatrix");
	HX_MARK_MEMBER_NAME(oldSceneMatrix,"oldSceneMatrix");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(drawBitmap,"drawBitmap");
	HX_MARK_MEMBER_NAME(newBitmap,"newBitmap");
	HX_MARK_MEMBER_NAME(oldBitmap,"oldBitmap");
	HX_MARK_MEMBER_NAME(sceneSpr,"sceneSpr");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SlideTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(newSceneMatrix,"newSceneMatrix");
	HX_VISIT_MEMBER_NAME(oldSceneMatrix,"oldSceneMatrix");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(drawBitmap,"drawBitmap");
	HX_VISIT_MEMBER_NAME(newBitmap,"newBitmap");
	HX_VISIT_MEMBER_NAME(oldBitmap,"oldBitmap");
	HX_VISIT_MEMBER_NAME(sceneSpr,"sceneSpr");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SlideTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SLIDE_UP") ) { return SLIDE_UP; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"sceneSpr") ) { return sceneSpr; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"newBitmap") ) { return newBitmap; }
		if (HX_FIELD_EQ(inName,"oldBitmap") ) { return oldBitmap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SLIDE_DOWN") ) { return SLIDE_DOWN; }
		if (HX_FIELD_EQ(inName,"SLIDE_LEFT") ) { return SLIDE_LEFT; }
		if (HX_FIELD_EQ(inName,"drawBitmap") ) { return drawBitmap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SLIDE_RIGHT") ) { return SLIDE_RIGHT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"newSceneMatrix") ) { return newSceneMatrix; }
		if (HX_FIELD_EQ(inName,"oldSceneMatrix") ) { return oldSceneMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SlideTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SLIDE_UP") ) { SLIDE_UP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneSpr") ) { sceneSpr=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"newBitmap") ) { newBitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldBitmap") ) { oldBitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SLIDE_DOWN") ) { SLIDE_DOWN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SLIDE_LEFT") ) { SLIDE_LEFT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawBitmap") ) { drawBitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SLIDE_RIGHT") ) { SLIDE_RIGHT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"newSceneMatrix") ) { newSceneMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldSceneMatrix") ) { oldSceneMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SlideTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("newSceneMatrix"));
	outFields->push(HX_CSTRING("oldSceneMatrix"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("drawBitmap"));
	outFields->push(HX_CSTRING("newBitmap"));
	outFields->push(HX_CSTRING("oldBitmap"));
	outFields->push(HX_CSTRING("sceneSpr"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SLIDE_UP"),
	HX_CSTRING("SLIDE_DOWN"),
	HX_CSTRING("SLIDE_LEFT"),
	HX_CSTRING("SLIDE_RIGHT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("rect"),
	HX_CSTRING("ty"),
	HX_CSTRING("tx"),
	HX_CSTRING("newSceneMatrix"),
	HX_CSTRING("oldSceneMatrix"),
	HX_CSTRING("graphics"),
	HX_CSTRING("drawBitmap"),
	HX_CSTRING("newBitmap"),
	HX_CSTRING("oldBitmap"),
	HX_CSTRING("sceneSpr"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SlideTransition_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SlideTransition_obj::SLIDE_UP,"SLIDE_UP");
	HX_MARK_MEMBER_NAME(SlideTransition_obj::SLIDE_DOWN,"SLIDE_DOWN");
	HX_MARK_MEMBER_NAME(SlideTransition_obj::SLIDE_LEFT,"SLIDE_LEFT");
	HX_MARK_MEMBER_NAME(SlideTransition_obj::SLIDE_RIGHT,"SLIDE_RIGHT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SlideTransition_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SlideTransition_obj::SLIDE_UP,"SLIDE_UP");
	HX_VISIT_MEMBER_NAME(SlideTransition_obj::SLIDE_DOWN,"SLIDE_DOWN");
	HX_VISIT_MEMBER_NAME(SlideTransition_obj::SLIDE_LEFT,"SLIDE_LEFT");
	HX_VISIT_MEMBER_NAME(SlideTransition_obj::SLIDE_RIGHT,"SLIDE_RIGHT");
};

Class SlideTransition_obj::__mClass;

void SlideTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.SlideTransition"), hx::TCanCast< SlideTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SlideTransition_obj::__boot()
{
	SLIDE_UP= HX_CSTRING("up");
	SLIDE_DOWN= HX_CSTRING("down");
	SLIDE_LEFT= HX_CSTRING("left");
	SLIDE_RIGHT= HX_CSTRING("right");
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
