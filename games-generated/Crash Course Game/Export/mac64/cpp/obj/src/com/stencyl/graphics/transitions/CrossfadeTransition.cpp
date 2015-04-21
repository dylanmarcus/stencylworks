#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_CrossfadeTransition
#include <com/stencyl/graphics/transitions/CrossfadeTransition.h>
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

Void CrossfadeTransition_obj::__construct(::flash::display::Sprite oldImg,Float duration)
{
HX_STACK_PUSH("CrossfadeTransition::new","com/stencyl/graphics/transitions/CrossfadeTransition.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct(duration);
	HX_STACK_LINE(26)
	this->oldImg = oldImg;
}
;
	return null();
}

CrossfadeTransition_obj::~CrossfadeTransition_obj() { }

Dynamic CrossfadeTransition_obj::__CreateEmpty() { return  new CrossfadeTransition_obj; }
hx::ObjectPtr< CrossfadeTransition_obj > CrossfadeTransition_obj::__new(::flash::display::Sprite oldImg,Float duration)
{  hx::ObjectPtr< CrossfadeTransition_obj > result = new CrossfadeTransition_obj();
	result->__construct(oldImg,duration);
	return result;}

Dynamic CrossfadeTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CrossfadeTransition_obj > result = new CrossfadeTransition_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void CrossfadeTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("CrossfadeTransition::cleanup","com/stencyl/graphics/transitions/CrossfadeTransition.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		this->oldImg = null();
		HX_STACK_LINE(54)
		this->bitmap = null();
		HX_STACK_LINE(56)
		if (((this->rect != null()))){
			HX_STACK_LINE(58)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(59)
			this->rect = null();
		}
	}
return null();
}


Void CrossfadeTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("CrossfadeTransition::draw","com/stencyl/graphics/transitions/CrossfadeTransition.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
	}
return null();
}


Void CrossfadeTransition_obj::start( ){
{
		HX_STACK_PUSH("CrossfadeTransition::start","com/stencyl/graphics/transitions/CrossfadeTransition.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->active = true;
		HX_STACK_LINE(33)
		this->bitmap = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(34)
		this->bitmap->draw(this->oldImg,null(),null(),null(),null(),null());
		HX_STACK_LINE(36)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(37)
		::flash::display::Graphics g = this->rect->get_graphics();		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(38)
		g->beginBitmapFill(this->bitmap,null(),null(),null());
		HX_STACK_LINE(39)
		g->drawRect((int)0,(int)0,(::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE),(::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(40)
		g->endFill();
		HX_STACK_LINE(42)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/CrossfadeTransition.hx",44);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		::motion::Actuate_obj::tween(this->rect,this->duration,_Function_1_1::Block(),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



CrossfadeTransition_obj::CrossfadeTransition_obj()
{
}

void CrossfadeTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CrossfadeTransition);
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(oldImg,"oldImg");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CrossfadeTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(oldImg,"oldImg");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CrossfadeTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"oldImg") ) { return oldImg; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CrossfadeTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldImg") ) { oldImg=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CrossfadeTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("oldImg"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("rect"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("oldImg"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CrossfadeTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CrossfadeTransition_obj::__mClass,"__mClass");
};

Class CrossfadeTransition_obj::__mClass;

void CrossfadeTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.CrossfadeTransition"), hx::TCanCast< CrossfadeTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CrossfadeTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
