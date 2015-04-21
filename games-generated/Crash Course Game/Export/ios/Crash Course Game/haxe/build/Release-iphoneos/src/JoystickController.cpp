#include <hxcpp.h>

#ifndef INCLUDED_Joystick
#include <Joystick.h>
#endif
#ifndef INCLUDED_JoystickController
#include <JoystickController.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void JoystickController_obj::__construct()
{
	return null();
}

JoystickController_obj::~JoystickController_obj() { }

Dynamic JoystickController_obj::__CreateEmpty() { return  new JoystickController_obj; }
hx::ObjectPtr< JoystickController_obj > JoystickController_obj::__new()
{  hx::ObjectPtr< JoystickController_obj > result = new JoystickController_obj();
	result->__construct();
	return result;}

Dynamic JoystickController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoystickController_obj > result = new JoystickController_obj();
	result->__construct();
	return result;}

::Joystick JoystickController_obj::joystick1;

::Joystick JoystickController_obj::joystick2;

Void JoystickController_obj::initialize( ){
{
		HX_STACK_PUSH("JoystickController::initialize","JoystickController.hx",17);
		HX_STACK_LINE(17)
		if (((bool((::JoystickController_obj::joystick1 == null())) || bool((::JoystickController_obj::joystick2 == null()))))){
			HX_STACK_LINE(20)
			::flash::display::Sprite target = ::com::stencyl::Engine_obj::engine->root;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(21)
			::flash::display::BitmapData outer = null();		HX_STACK_VAR(outer,"outer");
			HX_STACK_LINE(22)
			::flash::display::BitmapData inner = null();		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(24)
			if (((::com::stencyl::Engine_obj::SCALE == (int)1))){
				HX_STACK_LINE(26)
				outer = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/outer-joystick.png"),null());
				HX_STACK_LINE(27)
				inner = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/inner-joystick.png"),null());
			}
			else{
				HX_STACK_LINE(30)
				if (((::com::stencyl::Engine_obj::SCALE == 1.5))){
					HX_STACK_LINE(32)
					outer = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/outer-joystick@1.5x.png"),null());
					HX_STACK_LINE(33)
					inner = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/inner-joystick@1.5x.png"),null());
				}
				else{
					HX_STACK_LINE(36)
					if (((::com::stencyl::Engine_obj::SCALE == (int)2))){
						HX_STACK_LINE(38)
						outer = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/outer-joystick@2x.png"),null());
						HX_STACK_LINE(39)
						inner = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/inner-joystick@2x.png"),null());
					}
					else{
						HX_STACK_LINE(44)
						outer = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/outer-joystick@4x.png"),null());
						HX_STACK_LINE(45)
						inner = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/inner-joystick@4x.png"),null());
					}
				}
			}
			HX_STACK_LINE(48)
			if (((::JoystickController_obj::joystick1 == null()))){
				HX_STACK_LINE(49)
				::JoystickController_obj::joystick1 = ::JoystickController_obj::createJoystick(target,outer,inner,::Joystick_obj::JoystickStatic);
			}
			HX_STACK_LINE(53)
			if (((::JoystickController_obj::joystick2 == null()))){
				HX_STACK_LINE(54)
				::JoystickController_obj::joystick2 = ::JoystickController_obj::createJoystick(target,outer,inner,::Joystick_obj::JoystickStatic);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JoystickController_obj,initialize,(void))

Void JoystickController_obj::setStyle( int joystick,int style){
{
		HX_STACK_PUSH("JoystickController::setStyle","JoystickController.hx",61);
		HX_STACK_ARG(joystick,"joystick");
		HX_STACK_ARG(style,"style");
		HX_STACK_LINE(62)
		::JoystickController_obj::initialize();
		HX_STACK_LINE(64)
		if (((style > (int)0))){
			HX_STACK_LINE(65)
			style = ::Joystick_obj::JoystickAbsolute;
		}
		else{
			HX_STACK_LINE(70)
			style = ::Joystick_obj::JoystickStatic;
		}
		HX_STACK_LINE(74)
		if (((joystick == (int)1))){
			HX_STACK_LINE(75)
			::JoystickController_obj::joystick1->setType(style);
		}
		else{
			HX_STACK_LINE(79)
			if (((joystick == (int)2))){
				HX_STACK_LINE(80)
				::JoystickController_obj::joystick2->setType(style);
			}
			else{
				HX_STACK_LINE(86)
				::JoystickController_obj::joystick1->setType(style);
				HX_STACK_LINE(87)
				::JoystickController_obj::joystick2->setType(style);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickController_obj,setStyle,(void))

Void JoystickController_obj::setX( int joystick,Float x){
{
		HX_STACK_PUSH("JoystickController::setX","JoystickController.hx",92);
		HX_STACK_ARG(joystick,"joystick");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(93)
		x = ::Std_obj::_int(x);
		HX_STACK_LINE(95)
		::JoystickController_obj::initialize();
		HX_STACK_LINE(97)
		if (((bool((joystick == (int)1)) && bool((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))))){
			HX_STACK_LINE(98)
			::JoystickController_obj::joystick1->set_x(x);
		}
		else{
			HX_STACK_LINE(102)
			if (((bool((joystick == (int)2)) && bool((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))))){
				HX_STACK_LINE(103)
				::JoystickController_obj::joystick2->set_x(x);
			}
			else{
				HX_STACK_LINE(109)
				if (((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(110)
					::JoystickController_obj::joystick1->set_x(x);
				}
				HX_STACK_LINE(114)
				if (((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(115)
					::JoystickController_obj::joystick2->set_x(x);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickController_obj,setX,(void))

Void JoystickController_obj::setY( int joystick,Float y){
{
		HX_STACK_PUSH("JoystickController::setY","JoystickController.hx",122);
		HX_STACK_ARG(joystick,"joystick");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(123)
		y = ::Std_obj::_int(y);
		HX_STACK_LINE(125)
		::JoystickController_obj::initialize();
		HX_STACK_LINE(127)
		if (((bool((joystick == (int)1)) && bool((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))))){
			HX_STACK_LINE(128)
			::JoystickController_obj::joystick1->set_y(y);
		}
		else{
			HX_STACK_LINE(132)
			if (((bool((joystick == (int)2)) && bool((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))))){
				HX_STACK_LINE(133)
				::JoystickController_obj::joystick2->set_y(y);
			}
			else{
				HX_STACK_LINE(139)
				if (((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(140)
					::JoystickController_obj::joystick1->set_y(y);
				}
				HX_STACK_LINE(144)
				if (((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(145)
					::JoystickController_obj::joystick2->set_y(y);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickController_obj,setY,(void))

Void JoystickController_obj::enable( int joystick){
{
		HX_STACK_PUSH("JoystickController::enable","JoystickController.hx",152);
		HX_STACK_ARG(joystick,"joystick");
		HX_STACK_LINE(153)
		::JoystickController_obj::initialize();
		HX_STACK_LINE(155)
		if (((bool((joystick == (int)1)) && bool((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))))){
			HX_STACK_LINE(156)
			::JoystickController_obj::joystick1->show();
		}
		else{
			HX_STACK_LINE(160)
			if (((bool((joystick == (int)2)) && bool((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))))){
				HX_STACK_LINE(161)
				::JoystickController_obj::joystick2->show();
			}
			else{
				HX_STACK_LINE(167)
				if (((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(168)
					::JoystickController_obj::joystick1->show();
				}
				HX_STACK_LINE(172)
				if (((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(173)
					::JoystickController_obj::joystick2->show();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickController_obj,enable,(void))

Void JoystickController_obj::disable( int joystick){
{
		HX_STACK_PUSH("JoystickController::disable","JoystickController.hx",180);
		HX_STACK_ARG(joystick,"joystick");
		HX_STACK_LINE(181)
		::JoystickController_obj::initialize();
		HX_STACK_LINE(183)
		if (((bool((joystick == (int)1)) && bool((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))))){
			HX_STACK_LINE(184)
			::JoystickController_obj::joystick1->hide();
		}
		else{
			HX_STACK_LINE(188)
			if (((bool((joystick == (int)2)) && bool((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))))){
				HX_STACK_LINE(189)
				::JoystickController_obj::joystick2->hide();
			}
			else{
				HX_STACK_LINE(195)
				if (((::JoystickController_obj::joystick1->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(196)
					::JoystickController_obj::joystick1->hide();
				}
				HX_STACK_LINE(200)
				if (((::JoystickController_obj::joystick2->mType == ::Joystick_obj::JoystickStatic))){
					HX_STACK_LINE(201)
					::JoystickController_obj::joystick2->hide();
				}
			}
		}
		HX_STACK_LINE(206)
		if (((joystick == (int)1))){
			HX_STACK_LINE(208)
			::flash::display::Sprite target = ::com::stencyl::Engine_obj::engine->root;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(210)
			if (((::JoystickController_obj::joystick1 != null()))){
				HX_STACK_LINE(211)
				target->removeChild(::JoystickController_obj::joystick1);
			}
			HX_STACK_LINE(215)
			::JoystickController_obj::joystick1 = null();
		}
		HX_STACK_LINE(218)
		if (((joystick == (int)2))){
			HX_STACK_LINE(220)
			::flash::display::Sprite target = ::com::stencyl::Engine_obj::engine->root;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(222)
			if (((::JoystickController_obj::joystick2 != null()))){
				HX_STACK_LINE(223)
				target->removeChild(::JoystickController_obj::joystick2);
			}
			HX_STACK_LINE(227)
			::JoystickController_obj::joystick2 = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickController_obj,disable,(void))

Void JoystickController_obj::reset( ){
{
		HX_STACK_PUSH("JoystickController::reset","JoystickController.hx",232);
		HX_STACK_LINE(233)
		::flash::display::Sprite target = ::com::stencyl::Engine_obj::engine->root;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(235)
		if (((::JoystickController_obj::joystick1 != null()))){
			HX_STACK_LINE(236)
			target->removeChild(::JoystickController_obj::joystick1);
		}
		else{
			HX_STACK_LINE(240)
			if (((::JoystickController_obj::joystick2 != null()))){
				HX_STACK_LINE(241)
				target->removeChild(::JoystickController_obj::joystick2);
			}
		}
		HX_STACK_LINE(245)
		::JoystickController_obj::joystick1 = null();
		HX_STACK_LINE(246)
		::JoystickController_obj::joystick2 = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JoystickController_obj,reset,(void))

Float JoystickController_obj::getDirection( int joystick){
	HX_STACK_PUSH("JoystickController::getDirection","JoystickController.hx",250);
	HX_STACK_ARG(joystick,"joystick");
	HX_STACK_LINE(251)
	::JoystickController_obj::initialize();
	HX_STACK_LINE(253)
	if (((joystick == (int)1))){
		HX_STACK_LINE(254)
		return ::JoystickController_obj::joystick1->mDirection;
	}
	else{
		HX_STACK_LINE(259)
		return ::JoystickController_obj::joystick2->mDirection;
	}
	HX_STACK_LINE(253)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickController_obj,getDirection,return )

Float JoystickController_obj::getDistance( int joystick){
	HX_STACK_PUSH("JoystickController::getDistance","JoystickController.hx",265);
	HX_STACK_ARG(joystick,"joystick");
	HX_STACK_LINE(266)
	::JoystickController_obj::initialize();
	HX_STACK_LINE(268)
	if (((joystick == (int)1))){
		HX_STACK_LINE(269)
		return ::JoystickController_obj::joystick1->mDistance;
	}
	else{
		HX_STACK_LINE(274)
		return ::JoystickController_obj::joystick2->mDistance;
	}
	HX_STACK_LINE(268)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickController_obj,getDistance,return )

::Joystick JoystickController_obj::createJoystick( ::flash::display::Sprite target,::flash::display::BitmapData outer,::flash::display::BitmapData inner,int type){
	HX_STACK_PUSH("JoystickController::createJoystick","JoystickController.hx",280);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(outer,"outer");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(281)
	::Joystick j = ::Joystick_obj::__new();		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(282)
	j->setOuterImage(::flash::display::Bitmap_obj::__new(outer,null(),null()));
	HX_STACK_LINE(283)
	j->setInnerImage(::flash::display::Bitmap_obj::__new(inner,null(),null()));
	HX_STACK_LINE(284)
	j->setType(type);
	HX_STACK_LINE(285)
	j->setInnerRadius((int)0);
	HX_STACK_LINE(286)
	j->setOuterRadius((int)40);
	HX_STACK_LINE(287)
	target->addChild(j);
	HX_STACK_LINE(288)
	j->hide();
	HX_STACK_LINE(289)
	j->start();
	HX_STACK_LINE(290)
	return j;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(JoystickController_obj,createJoystick,return )


JoystickController_obj::JoystickController_obj()
{
}

void JoystickController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickController);
	HX_MARK_END_CLASS();
}

void JoystickController_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic JoystickController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setStyle") ) { return setStyle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"joystick1") ) { return joystick1; }
		if (HX_FIELD_EQ(inName,"joystick2") ) { return joystick2; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getDirection") ) { return getDirection_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createJoystick") ) { return createJoystick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JoystickController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"joystick1") ) { joystick1=inValue.Cast< ::Joystick >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joystick2") ) { joystick2=inValue.Cast< ::Joystick >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickController_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("joystick1"),
	HX_CSTRING("joystick2"),
	HX_CSTRING("initialize"),
	HX_CSTRING("setStyle"),
	HX_CSTRING("setX"),
	HX_CSTRING("setY"),
	HX_CSTRING("enable"),
	HX_CSTRING("disable"),
	HX_CSTRING("reset"),
	HX_CSTRING("getDirection"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("createJoystick"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JoystickController_obj::joystick1,"joystick1");
	HX_MARK_MEMBER_NAME(JoystickController_obj::joystick2,"joystick2");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoystickController_obj::joystick1,"joystick1");
	HX_VISIT_MEMBER_NAME(JoystickController_obj::joystick2,"joystick2");
};

Class JoystickController_obj::__mClass;

void JoystickController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("JoystickController"), hx::TCanCast< JoystickController_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JoystickController_obj::__boot()
{
	joystick1= null();
	joystick2= null();
}

