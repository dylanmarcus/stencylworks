#include <hxcpp.h>

#ifndef INCLUDED_Joystick
#include <Joystick.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
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
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif

Void Joystick_obj::__construct()
{
HX_STACK_PUSH("Joystick::new","Joystick.hx",54);
{
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(57)
	this->mRender = false;
	HX_STACK_LINE(58)
	this->mType = ::Joystick_obj::JoystickStatic;
	HX_STACK_LINE(59)
	this->mTouchRadius = ::Joystick_obj::DEFAULT_TOUCHRADIUS;
	HX_STACK_LINE(60)
	this->mOuterRadius = ::Joystick_obj::DEFAULT_OUTERRADIUS;
	HX_STACK_LINE(61)
	this->mInnerRadius = ::Joystick_obj::DEFAULT_INNERRADIUS;
	HX_STACK_LINE(62)
	this->mBounds = null();
	HX_STACK_LINE(63)
	this->mInnerImageScaleOnTouch = 1.0;
	HX_STACK_LINE(65)
	this->mDistance = (int)0;
	HX_STACK_LINE(66)
	this->mDirection = (int)0;
	HX_STACK_LINE(68)
	this->enabled = true;
}
;
	return null();
}

Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new()
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct();
	return result;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct();
	return result;}

Void Joystick_obj::onTouchEnd( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onTouchEnd","Joystick.hx",621);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(622)
		if (((bool((e != null())) && bool((e->touchPointID != this->mCurTouch))))){
			HX_STACK_LINE(623)
			return null();
		}
		HX_STACK_LINE(627)
		if (((bool((this->mType == ::Joystick_obj::JoystickStatic)) || bool((this->mType == ::Joystick_obj::JoystickRelative))))){
			HX_STACK_LINE(628)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(631)
				this->mInnerImage->set_scaleX(this->mInnerImage->set_scaleY(1.0));
				HX_STACK_LINE(632)
				this->mInnerImage->set_x((Float(((this->getWidth() - this->mInnerImage->get_width()))) / Float((int)2)));
				HX_STACK_LINE(633)
				this->mInnerImage->set_y((Float(((this->getHeight() - this->mInnerImage->get_height()))) / Float((int)2)));
			}
		}
		else{
			HX_STACK_LINE(637)
			if (((bool((this->mType == ::Joystick_obj::JoystickAbsolute)) || bool((this->mType == ::Joystick_obj::JoystickFloat))))){
				HX_STACK_LINE(638)
				this->hide();
			}
		}
		HX_STACK_LINE(642)
		this->mCurTouch = (int)-1;
		HX_STACK_LINE(643)
		this->sendEvent(::Joystick_obj::EVENT_TOUCHUP,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onTouchEnd,(void))

Void Joystick_obj::onFloatMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onFloatMove","Joystick.hx",564);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(565)
		::flash::geom::Point movePosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(movePosition,"movePosition");
		HX_STACK_LINE(566)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(567)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(568)
		Float distance = ::Math_obj::sqrt((::Math_obj::pow(::Math_obj::abs((movePosition->x - centerX)),(int)2) + ::Math_obj::pow(::Math_obj::abs((movePosition->y - centerY)),(int)2)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(569)
		Float radians = ::Math_obj::atan2((centerX - movePosition->x),(centerY - movePosition->y));		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(571)
		if (((distance > (this->mOuterRadius - this->mInnerRadius)))){
			HX_STACK_LINE(573)
			distance = (this->mOuterRadius - this->mInnerRadius);
			HX_STACK_LINE(575)
			::flash::geom::Point touchPosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_parent()->get_x()),(e->stageY - this->get_parent()->get_y()));		HX_STACK_VAR(touchPosition,"touchPosition");
			HX_STACK_LINE(576)
			this->setCenterX((touchPosition->x + (::Math_obj::sin(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			HX_STACK_LINE(577)
			this->setCenterY((touchPosition->y + (::Math_obj::cos(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			HX_STACK_LINE(579)
			if (((this->getCenterX() < this->mBounds->x))){
				HX_STACK_LINE(580)
				this->setCenterX(this->mBounds->x);
			}
			else{
				HX_STACK_LINE(584)
				if (((this->getCenterX() > (this->mBounds->x + this->mBounds->width)))){
					HX_STACK_LINE(585)
					this->setCenterX((this->mBounds->x + this->mBounds->width));
				}
			}
			HX_STACK_LINE(589)
			if (((this->getCenterY() < this->mBounds->y))){
				HX_STACK_LINE(590)
				this->setCenterY(this->mBounds->y);
			}
			else{
				HX_STACK_LINE(594)
				if (((this->getCenterY() > (this->mBounds->y + this->mBounds->height)))){
					HX_STACK_LINE(595)
					this->setCenterY((this->mBounds->y + this->mBounds->height));
				}
			}
			HX_STACK_LINE(599)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(601)
				this->mInnerImage->set_x(((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))) - (::Math_obj::sin(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
				HX_STACK_LINE(602)
				this->mInnerImage->set_y(((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))) - (::Math_obj::cos(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			}
		}
		else{
			HX_STACK_LINE(607)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(610)
				this->mInnerImage->set_x((movePosition->x - (Float(this->mInnerImage->get_width()) / Float((int)2))));
				HX_STACK_LINE(611)
				this->mInnerImage->set_y((movePosition->y - (Float(this->mInnerImage->get_height()) / Float((int)2))));
			}
		}
		HX_STACK_LINE(615)
		this->sendEvent(::Joystick_obj::EVENT_MOVE,(Float(distance) / Float(((this->mOuterRadius - this->mInnerRadius)))),((Float((int)180) / Float(3.14159)) * -(radians)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onFloatMove,(void))

Void Joystick_obj::onAbsoluteMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onAbsoluteMove","Joystick.hx",533);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(534)
		::flash::geom::Point movePosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(movePosition,"movePosition");
		HX_STACK_LINE(535)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(536)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(537)
		Float distance = ::Math_obj::sqrt((::Math_obj::pow(::Math_obj::abs((movePosition->x - centerX)),(int)2) + ::Math_obj::pow(::Math_obj::abs((movePosition->y - centerY)),(int)2)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(538)
		Float radians = ::Math_obj::atan2((centerX - movePosition->x),(centerY - movePosition->y));		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(540)
		if (((distance > (this->mOuterRadius - this->mInnerRadius)))){
			HX_STACK_LINE(542)
			distance = (this->mOuterRadius - this->mInnerRadius);
			HX_STACK_LINE(544)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(546)
				this->mInnerImage->set_x(((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))) - (::Math_obj::sin(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
				HX_STACK_LINE(547)
				this->mInnerImage->set_y(((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))) - (::Math_obj::cos(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			}
		}
		else{
			HX_STACK_LINE(552)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(555)
				this->mInnerImage->set_x((movePosition->x - (Float(this->mInnerImage->get_width()) / Float((int)2))));
				HX_STACK_LINE(556)
				this->mInnerImage->set_y((movePosition->y - (Float(this->mInnerImage->get_height()) / Float((int)2))));
			}
		}
		HX_STACK_LINE(560)
		this->sendEvent(::Joystick_obj::EVENT_MOVE,(Float(distance) / Float(((this->mOuterRadius - this->mInnerRadius)))),((Float((int)180) / Float(3.14159)) * -(radians)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onAbsoluteMove,(void))

Void Joystick_obj::onRelativeMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onRelativeMove","Joystick.hx",502);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(503)
		::flash::geom::Point movePosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(movePosition,"movePosition");
		HX_STACK_LINE(504)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(505)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(506)
		Float distance = ::Math_obj::sqrt((::Math_obj::pow(::Math_obj::abs((movePosition->x - this->mRelativeX)),(int)2) + ::Math_obj::pow(::Math_obj::abs((movePosition->y - this->mRelativeY)),(int)2)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(507)
		Float radians = ::Math_obj::atan2((this->mRelativeX - movePosition->x),(this->mRelativeY - movePosition->y));		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(509)
		if (((distance > (this->mOuterRadius - this->mInnerRadius)))){
			HX_STACK_LINE(511)
			distance = (this->mOuterRadius - this->mInnerRadius);
			HX_STACK_LINE(513)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(515)
				this->mInnerImage->set_x(((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))) - (::Math_obj::sin(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
				HX_STACK_LINE(516)
				this->mInnerImage->set_y(((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))) - (::Math_obj::cos(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			}
		}
		else{
			HX_STACK_LINE(521)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(524)
				this->mInnerImage->set_x((((movePosition->x - this->mRelativeX) - (Float(this->mInnerImage->get_width()) / Float((int)2))) + centerX));
				HX_STACK_LINE(525)
				this->mInnerImage->set_y((((movePosition->y - this->mRelativeY) - (Float(this->mInnerImage->get_height()) / Float((int)2))) + centerY));
			}
		}
		HX_STACK_LINE(529)
		this->sendEvent(::Joystick_obj::EVENT_MOVE,(Float(distance) / Float(((this->mOuterRadius - this->mInnerRadius)))),((Float((int)180) / Float(3.14159)) * -(radians)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onRelativeMove,(void))

Void Joystick_obj::onStaticMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onStaticMove","Joystick.hx",471);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(472)
		::flash::geom::Point movePosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(movePosition,"movePosition");
		HX_STACK_LINE(473)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(474)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(475)
		Float distance = ::Math_obj::sqrt((::Math_obj::pow(::Math_obj::abs((movePosition->x - centerX)),(int)2) + ::Math_obj::pow(::Math_obj::abs((movePosition->y - centerY)),(int)2)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(476)
		Float radians = ::Math_obj::atan2((centerX - movePosition->x),(centerY - movePosition->y));		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(478)
		if (((distance > (this->mOuterRadius - this->mInnerRadius)))){
			HX_STACK_LINE(480)
			distance = (this->mOuterRadius - this->mInnerRadius);
			HX_STACK_LINE(482)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(484)
				this->mInnerImage->set_x(((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))) - (::Math_obj::sin(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
				HX_STACK_LINE(485)
				this->mInnerImage->set_y(((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))) - (::Math_obj::cos(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			}
		}
		else{
			HX_STACK_LINE(490)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(493)
				this->mInnerImage->set_x((movePosition->x - (Float(this->mInnerImage->get_width()) / Float((int)2))));
				HX_STACK_LINE(494)
				this->mInnerImage->set_y((movePosition->y - (Float(this->mInnerImage->get_height()) / Float((int)2))));
			}
		}
		HX_STACK_LINE(498)
		this->sendEvent(::Joystick_obj::EVENT_MOVE,(Float(distance) / Float(((this->mOuterRadius - this->mInnerRadius)))),((Float((int)180) / Float(3.14159)) * -(radians)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onStaticMove,(void))

Void Joystick_obj::onTouchMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onTouchMove","Joystick.hx",443);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(444)
		if (((e->touchPointID != this->mCurTouch))){
			HX_STACK_LINE(445)
			return null();
		}
		HX_STACK_LINE(449)
		if (((this->mType == ::Joystick_obj::JoystickStatic))){
			HX_STACK_LINE(450)
			this->onStaticMove(e);
		}
		else{
			HX_STACK_LINE(454)
			if (((this->mType == ::Joystick_obj::JoystickRelative))){
				HX_STACK_LINE(455)
				this->onRelativeMove(e);
			}
			else{
				HX_STACK_LINE(459)
				if (((this->mType == ::Joystick_obj::JoystickAbsolute))){
					HX_STACK_LINE(460)
					this->onAbsoluteMove(e);
				}
				else{
					HX_STACK_LINE(464)
					if (((this->mType == ::Joystick_obj::JoystickFloat))){
						HX_STACK_LINE(465)
						this->onFloatMove(e);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onTouchMove,(void))

Void Joystick_obj::onAbsoluteTouch( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onAbsoluteTouch","Joystick.hx",413);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(414)
		::flash::geom::Point touchPosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(touchPosition,"touchPosition");
		HX_STACK_LINE(416)
		if ((!(this->isWithinBounds(touchPosition)))){
			HX_STACK_LINE(417)
			return null();
		}
		HX_STACK_LINE(421)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(422)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(424)
		this->mCurTouch = e->touchPointID;
		HX_STACK_LINE(426)
		if (((this->mInnerImage != null()))){
			HX_STACK_LINE(428)
			this->mInnerImage->set_scaleX(this->mInnerImage->set_scaleY(this->mInnerImageScaleOnTouch));
			HX_STACK_LINE(429)
			this->mInnerImage->set_x((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))));
			HX_STACK_LINE(430)
			this->mInnerImage->set_y((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))));
		}
		HX_STACK_LINE(433)
		this->setCenterX(touchPosition->x);
		HX_STACK_LINE(434)
		this->setCenterY(touchPosition->y);
		HX_STACK_LINE(436)
		this->show();
		HX_STACK_LINE(437)
		this->sendEvent(::Joystick_obj::EVENT_TOUCH,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onAbsoluteTouch,(void))

Void Joystick_obj::onRelativeTouch( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onRelativeTouch","Joystick.hx",386);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(387)
		::flash::geom::Point touchPosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(touchPosition,"touchPosition");
		HX_STACK_LINE(388)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(389)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(390)
		Float distance = ::Math_obj::sqrt((::Math_obj::pow(::Math_obj::abs((touchPosition->x - centerX)),(int)2) + ::Math_obj::pow(::Math_obj::abs((touchPosition->y - centerY)),(int)2)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(392)
		if (((distance > this->mTouchRadius))){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(397)
		this->mCurTouch = e->touchPointID;
		HX_STACK_LINE(399)
		this->mRelativeX = touchPosition->x;
		HX_STACK_LINE(400)
		this->mRelativeY = touchPosition->y;
		HX_STACK_LINE(402)
		if (((this->mInnerImage != null()))){
			HX_STACK_LINE(404)
			this->mInnerImage->set_scaleX(this->mInnerImage->set_scaleY(this->mInnerImageScaleOnTouch));
			HX_STACK_LINE(405)
			this->mInnerImage->set_x((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))));
			HX_STACK_LINE(406)
			this->mInnerImage->set_y((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))));
		}
		HX_STACK_LINE(409)
		this->sendEvent(::Joystick_obj::EVENT_TOUCH,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onRelativeTouch,(void))

Void Joystick_obj::onStaticTouch( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onStaticTouch","Joystick.hx",345);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(346)
		::flash::geom::Point touchPosition = ::flash::geom::Point_obj::__new((e->stageX - this->get_x()),(e->stageY - this->get_y()));		HX_STACK_VAR(touchPosition,"touchPosition");
		HX_STACK_LINE(347)
		Float centerX = (Float(this->getWidth()) / Float((int)2));		HX_STACK_VAR(centerX,"centerX");
		HX_STACK_LINE(348)
		Float centerY = (Float(this->getHeight()) / Float((int)2));		HX_STACK_VAR(centerY,"centerY");
		HX_STACK_LINE(349)
		Float distance = ::Math_obj::sqrt((::Math_obj::pow(::Math_obj::abs((touchPosition->x - centerX)),(int)2) + ::Math_obj::pow(::Math_obj::abs((touchPosition->y - centerY)),(int)2)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(351)
		if (((distance > this->mTouchRadius))){
			HX_STACK_LINE(352)
			return null();
		}
		HX_STACK_LINE(356)
		this->mCurTouch = e->touchPointID;
		HX_STACK_LINE(358)
		Float radians = ::Math_obj::atan2((centerX - touchPosition->x),(centerY - touchPosition->y));		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(360)
		if (((distance > (this->mOuterRadius - this->mInnerRadius)))){
			HX_STACK_LINE(362)
			distance = (this->mOuterRadius - this->mInnerRadius);
			HX_STACK_LINE(364)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(366)
				this->mInnerImage->set_scaleX(this->mInnerImage->set_scaleY(this->mInnerImageScaleOnTouch));
				HX_STACK_LINE(367)
				this->mInnerImage->set_x(((centerX - (Float(this->mInnerImage->get_width()) / Float((int)2))) - (::Math_obj::sin(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
				HX_STACK_LINE(368)
				this->mInnerImage->set_y(((centerY - (Float(this->mInnerImage->get_height()) / Float((int)2))) - (::Math_obj::cos(radians) * ((this->mOuterRadius - this->mInnerRadius)))));
			}
		}
		else{
			HX_STACK_LINE(373)
			if (((this->mInnerImage != null()))){
				HX_STACK_LINE(376)
				this->mInnerImage->set_scaleX(this->mInnerImage->set_scaleY(this->mInnerImageScaleOnTouch));
				HX_STACK_LINE(377)
				this->mInnerImage->set_x((touchPosition->x - (Float(this->mInnerImage->get_width()) / Float((int)2))));
				HX_STACK_LINE(378)
				this->mInnerImage->set_y((touchPosition->y - (Float(this->mInnerImage->get_height()) / Float((int)2))));
			}
		}
		HX_STACK_LINE(382)
		this->sendEvent(::Joystick_obj::EVENT_TOUCH,(Float(distance) / Float(((this->mOuterRadius - this->mInnerRadius)))),((Float((int)180) / Float(3.14159)) * -(radians)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onStaticTouch,(void))

Void Joystick_obj::onTouchBegin( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Joystick::onTouchBegin","Joystick.hx",322);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(322)
		if (((this->mType == ::Joystick_obj::JoystickStatic))){
			HX_STACK_LINE(324)
			this->onStaticTouch(e);
		}
		else{
			HX_STACK_LINE(328)
			if (((this->mType == ::Joystick_obj::JoystickRelative))){
				HX_STACK_LINE(329)
				this->onRelativeTouch(e);
			}
			else{
				HX_STACK_LINE(333)
				if (((this->mType == ::Joystick_obj::JoystickAbsolute))){
					HX_STACK_LINE(334)
					this->onAbsoluteTouch(e);
				}
				else{
					HX_STACK_LINE(338)
					if (((this->mType == ::Joystick_obj::JoystickFloat))){
						HX_STACK_LINE(339)
						this->onAbsoluteTouch(e);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,onTouchBegin,(void))

Void Joystick_obj::sendEvent( ::String type,Float distance,Float direction){
{
		HX_STACK_PUSH("Joystick::sendEvent","Joystick.hx",305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(distance,"distance");
		HX_STACK_ARG(direction,"direction");
		HX_STACK_LINE(306)
		if (((direction < (int)0))){
			HX_STACK_LINE(307)
			hx::AddEq(direction,(int)360);
		}
		HX_STACK_LINE(311)
		this->mDistance = distance;
		HX_STACK_LINE(312)
		this->mDirection = direction;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Joystick_obj,sendEvent,(void))

bool Joystick_obj::isWithinBounds( ::flash::geom::Point point){
	HX_STACK_PUSH("Joystick::isWithinBounds","Joystick.hx",292);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(292)
	if (((bool((bool((bool((point->x < this->mBounds->x)) || bool((point->x > (this->mBounds->x + this->mBounds->width))))) || bool((point->y < this->mBounds->y)))) || bool((point->y > (this->mBounds->y + this->mBounds->height)))))){
		HX_STACK_LINE(294)
		return false;
	}
	else{
		HX_STACK_LINE(299)
		return true;
	}
	HX_STACK_LINE(292)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,isWithinBounds,return )

Void Joystick_obj::hide( ){
{
		HX_STACK_PUSH("Joystick::hide","Joystick.hx",273);
		HX_STACK_THIS(this);
		HX_STACK_LINE(274)
		if (((this->mInnerImage != null()))){
			HX_STACK_LINE(275)
			this->mInnerImage->set_visible(false);
		}
		HX_STACK_LINE(279)
		if (((this->mOuterImage != null()))){
			HX_STACK_LINE(280)
			this->mOuterImage->set_visible(false);
		}
		HX_STACK_LINE(284)
		if (((bool((this->mType == ::Joystick_obj::JoystickAbsolute)) || bool((this->mType == ::Joystick_obj::JoystickFloat))))){
			HX_STACK_LINE(286)
			this->set_x((int)0);
			HX_STACK_LINE(287)
			this->set_y((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,hide,(void))

Void Joystick_obj::show( ){
{
		HX_STACK_PUSH("Joystick::show","Joystick.hx",260);
		HX_STACK_THIS(this);
		HX_STACK_LINE(261)
		if (((this->mInnerImage != null()))){
			HX_STACK_LINE(262)
			this->mInnerImage->set_visible(true);
		}
		HX_STACK_LINE(266)
		if (((this->mOuterImage != null()))){
			HX_STACK_LINE(267)
			this->mOuterImage->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,show,(void))

Void Joystick_obj::setCenterY( Float centerY){
{
		HX_STACK_PUSH("Joystick::setCenterY","Joystick.hx",255);
		HX_STACK_THIS(this);
		HX_STACK_ARG(centerY,"centerY");
		HX_STACK_LINE(255)
		this->set_y((centerY - (Float(this->getHeight()) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setCenterY,(void))

Void Joystick_obj::setCenterX( Float centerX){
{
		HX_STACK_PUSH("Joystick::setCenterX","Joystick.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_ARG(centerX,"centerX");
		HX_STACK_LINE(250)
		this->set_x((centerX - (Float(this->getWidth()) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setCenterX,(void))

Float Joystick_obj::getCenterY( ){
	HX_STACK_PUSH("Joystick::getCenterY","Joystick.hx",245);
	HX_STACK_THIS(this);
	HX_STACK_LINE(245)
	return (this->get_y() + (Float(this->getHeight()) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getCenterY,return )

Float Joystick_obj::getCenterX( ){
	HX_STACK_PUSH("Joystick::getCenterX","Joystick.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(240)
	return (this->get_x() + (Float(this->getWidth()) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getCenterX,return )

Float Joystick_obj::getHeight( ){
	HX_STACK_PUSH("Joystick::getHeight","Joystick.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	if ((((this->mOuterRadius * (int)2) > this->mOuterImage->get_height()))){
		HX_STACK_LINE(229)
		return (this->mOuterRadius * (int)2);
	}
	else{
		HX_STACK_LINE(234)
		return this->mOuterImage->get_height();
	}
	HX_STACK_LINE(227)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getHeight,return )

Float Joystick_obj::getWidth( ){
	HX_STACK_PUSH("Joystick::getWidth","Joystick.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_LINE(214)
	if ((((this->mOuterRadius * (int)2) > this->mOuterImage->get_width()))){
		HX_STACK_LINE(216)
		return (this->mOuterRadius * (int)2);
	}
	else{
		HX_STACK_LINE(221)
		return this->mOuterImage->get_width();
	}
	HX_STACK_LINE(214)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,getWidth,return )

Void Joystick_obj::positionContent( ){
{
		HX_STACK_PUSH("Joystick::positionContent","Joystick.hx",197);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Float Block( ::Joystick_obj *__this){
				HX_STACK_PUSH("*::closure","Joystick.hx",198);
				{
					HX_STACK_LINE(198)
					return (  (((__this->mOuterRadius > (Float(__this->mOuterImage->get_height()) / Float((int)2))))) ? Float(__this->mOuterRadius) : Float((Float(__this->mOuterImage->get_height()) / Float((int)2))) );
				}
				return null();
			}
		};
		HX_STACK_LINE(198)
		Float outerRadius = (  (((this->mOuterRadius > (Float(this->mOuterImage->get_width()) / Float((int)2))))) ? Float(_Function_1_1::Block(this)) : Float((Float(this->mOuterImage->get_width()) / Float((int)2))) );		HX_STACK_VAR(outerRadius,"outerRadius");
		HX_STACK_LINE(200)
		if (((this->mOuterImage != null()))){
			HX_STACK_LINE(202)
			this->mOuterImage->set_x((outerRadius - (Float(this->mOuterImage->get_width()) / Float((int)2))));
			HX_STACK_LINE(203)
			this->mOuterImage->set_y((outerRadius - (Float(this->mOuterImage->get_height()) / Float((int)2))));
		}
		HX_STACK_LINE(206)
		if (((this->mInnerImage != null()))){
			HX_STACK_LINE(208)
			this->mInnerImage->set_x((outerRadius - (Float(this->mInnerImage->get_width()) / Float((int)2))));
			HX_STACK_LINE(209)
			this->mInnerImage->set_y((outerRadius - (Float(this->mInnerImage->get_height()) / Float((int)2))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,positionContent,(void))

Void Joystick_obj::setBounds( ::flash::geom::Rectangle bounds){
{
		HX_STACK_PUSH("Joystick::setBounds","Joystick.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_LINE(192)
		this->mBounds = bounds;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setBounds,(void))

Void Joystick_obj::setInnerRadius( Float innerRadius){
{
		HX_STACK_PUSH("Joystick::setInnerRadius","Joystick.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_ARG(innerRadius,"innerRadius");
		HX_STACK_LINE(184)
		if (((innerRadius != this->mInnerRadius))){
			HX_STACK_LINE(186)
			this->mInnerRadius = innerRadius;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setInnerRadius,(void))

Void Joystick_obj::setOuterRadius( Float outerRadius){
{
		HX_STACK_PUSH("Joystick::setOuterRadius","Joystick.hx",176);
		HX_STACK_THIS(this);
		HX_STACK_ARG(outerRadius,"outerRadius");
		HX_STACK_LINE(176)
		if (((outerRadius != this->mOuterRadius))){
			HX_STACK_LINE(178)
			this->mOuterRadius = outerRadius;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setOuterRadius,(void))

Void Joystick_obj::setTouchRadius( Float touchRadius){
{
		HX_STACK_PUSH("Joystick::setTouchRadius","Joystick.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_ARG(touchRadius,"touchRadius");
		HX_STACK_LINE(168)
		if (((touchRadius != this->mTouchRadius))){
			HX_STACK_LINE(170)
			this->mTouchRadius = touchRadius;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setTouchRadius,(void))

Void Joystick_obj::setType( int type){
{
		HX_STACK_PUSH("Joystick::setType","Joystick.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(137)
		if (((type != this->mType))){
			HX_STACK_LINE(140)
			this->mType = type;
			HX_STACK_LINE(142)
			if (((bool((this->mType == ::Joystick_obj::JoystickStatic)) || bool((this->mType == ::Joystick_obj::JoystickRelative))))){
				HX_STACK_LINE(143)
				this->show();
			}
			else{
				HX_STACK_LINE(148)
				if (((bool((this->mType == ::Joystick_obj::JoystickAbsolute)) || bool((this->mType == ::Joystick_obj::JoystickFloat))))){
					HX_STACK_LINE(150)
					this->setBounds(::flash::geom::Rectangle_obj::__new((int)0,(int)0,(::scripts::MyAssets_obj::stageWidth * ::com::stencyl::Engine_obj::SCALE),(::scripts::MyAssets_obj::stageHeight * ::com::stencyl::Engine_obj::SCALE)));
					HX_STACK_LINE(152)
					this->setBounds(::flash::geom::Rectangle_obj::__new(::com::stencyl::Engine_obj::engine->root->get_x(),::com::stencyl::Engine_obj::engine->root->get_y(),(::scripts::MyAssets_obj::stageWidth * ::com::stencyl::Engine_obj::SCALE),(::scripts::MyAssets_obj::stageHeight * ::com::stencyl::Engine_obj::SCALE)));
					HX_STACK_LINE(155)
					this->setBounds(::flash::geom::Rectangle_obj::__new(::com::stencyl::Engine_obj::engine->root->get_x(),::com::stencyl::Engine_obj::engine->root->get_y(),(::scripts::MyAssets_obj::stageWidth * ::com::stencyl::Engine_obj::SCALE),(::scripts::MyAssets_obj::stageHeight * ::com::stencyl::Engine_obj::SCALE)));
					HX_STACK_LINE(162)
					this->hide();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setType,(void))

Void Joystick_obj::setInnerImage( ::flash::display::Bitmap innerImage){
{
		HX_STACK_PUSH("Joystick::setInnerImage","Joystick.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_ARG(innerImage,"innerImage");
		HX_STACK_LINE(124)
		if (((this->mInnerImage != null()))){
			HX_STACK_LINE(125)
			this->removeChild(this->mInnerImage);
		}
		HX_STACK_LINE(129)
		this->mInnerImage = innerImage;
		HX_STACK_LINE(130)
		this->addChild(this->mInnerImage);
		HX_STACK_LINE(132)
		this->mInnerRadius = (  (((this->mInnerImage->get_width() > this->mInnerImage->get_height()))) ? Float((Float(this->mInnerImage->get_width()) / Float((int)2))) : Float((Float(this->mInnerImage->get_height()) / Float((int)2))) );
		HX_STACK_LINE(133)
		this->positionContent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setInnerImage,(void))

Void Joystick_obj::setOuterImage( ::flash::display::Bitmap outerImage){
{
		HX_STACK_PUSH("Joystick::setOuterImage","Joystick.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(outerImage,"outerImage");
		HX_STACK_LINE(109)
		if (((this->mOuterImage != null()))){
			HX_STACK_LINE(110)
			this->removeChild(this->mOuterImage);
		}
		HX_STACK_LINE(114)
		this->mOuterImage = outerImage;
		HX_STACK_LINE(115)
		this->addChild(this->mOuterImage);
		HX_STACK_LINE(116)
		this->setChildIndex(this->mOuterImage,(int)0);
		HX_STACK_LINE(118)
		this->mOuterRadius = (  (((this->mOuterImage->get_width() > this->mOuterImage->get_height()))) ? Float((Float(this->mOuterImage->get_width()) / Float((int)2))) : Float((Float(this->mOuterImage->get_height()) / Float((int)2))) );
		HX_STACK_LINE(119)
		this->positionContent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,setOuterImage,(void))

Void Joystick_obj::stop( ){
{
		HX_STACK_PUSH("Joystick::stop","Joystick.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(90)
		if ((!(this->mRender))){
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(95)
		::com::stencyl::Engine_obj::stage->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBegin_dyn(),null());
		HX_STACK_LINE(96)
		::com::stencyl::Engine_obj::stage->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->onTouchMove_dyn(),null());
		HX_STACK_LINE(97)
		::com::stencyl::Engine_obj::stage->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->onTouchEnd_dyn(),null());
		HX_STACK_LINE(99)
		this->mRender = false;
		HX_STACK_LINE(101)
		this->mDistance = (int)0;
		HX_STACK_LINE(102)
		this->mDirection = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,stop,(void))

Void Joystick_obj::start( ){
{
		HX_STACK_PUSH("Joystick::start","Joystick.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		if ((this->mRender)){
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(78)
		::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBegin_dyn(),null(),null(),null());
		HX_STACK_LINE(79)
		::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->onTouchMove_dyn(),null(),null(),null());
		HX_STACK_LINE(80)
		::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->onTouchEnd_dyn(),null(),null(),null());
		HX_STACK_LINE(82)
		this->mRender = true;
		HX_STACK_LINE(84)
		this->mDistance = (int)0;
		HX_STACK_LINE(85)
		this->mDirection = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,start,(void))

::String Joystick_obj::EVENT_TOUCH;

::String Joystick_obj::EVENT_MOVE;

::String Joystick_obj::EVENT_TOUCHUP;

::String Joystick_obj::EVENT_CHANGED;

Float Joystick_obj::DEFAULT_TOUCHRADIUS;

Float Joystick_obj::DEFAULT_OUTERRADIUS;

Float Joystick_obj::DEFAULT_INNERRADIUS;

int Joystick_obj::JoystickStatic;

int Joystick_obj::JoystickRelative;

int Joystick_obj::JoystickAbsolute;

int Joystick_obj::JoystickFloat;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(mDirection,"mDirection");
	HX_MARK_MEMBER_NAME(mDistance,"mDistance");
	HX_MARK_MEMBER_NAME(mInnerImageScaleOnTouch,"mInnerImageScaleOnTouch");
	HX_MARK_MEMBER_NAME(mRelativeY,"mRelativeY");
	HX_MARK_MEMBER_NAME(mRelativeX,"mRelativeX");
	HX_MARK_MEMBER_NAME(mCurTouch,"mCurTouch");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(mRender,"mRender");
	HX_MARK_MEMBER_NAME(mBounds,"mBounds");
	HX_MARK_MEMBER_NAME(mInnerRadius,"mInnerRadius");
	HX_MARK_MEMBER_NAME(mOuterRadius,"mOuterRadius");
	HX_MARK_MEMBER_NAME(mTouchRadius,"mTouchRadius");
	HX_MARK_MEMBER_NAME(mType,"mType");
	HX_MARK_MEMBER_NAME(mInnerImage,"mInnerImage");
	HX_MARK_MEMBER_NAME(mOuterImage,"mOuterImage");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mDirection,"mDirection");
	HX_VISIT_MEMBER_NAME(mDistance,"mDistance");
	HX_VISIT_MEMBER_NAME(mInnerImageScaleOnTouch,"mInnerImageScaleOnTouch");
	HX_VISIT_MEMBER_NAME(mRelativeY,"mRelativeY");
	HX_VISIT_MEMBER_NAME(mRelativeX,"mRelativeX");
	HX_VISIT_MEMBER_NAME(mCurTouch,"mCurTouch");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(mRender,"mRender");
	HX_VISIT_MEMBER_NAME(mBounds,"mBounds");
	HX_VISIT_MEMBER_NAME(mInnerRadius,"mInnerRadius");
	HX_VISIT_MEMBER_NAME(mOuterRadius,"mOuterRadius");
	HX_VISIT_MEMBER_NAME(mTouchRadius,"mTouchRadius");
	HX_VISIT_MEMBER_NAME(mType,"mType");
	HX_VISIT_MEMBER_NAME(mInnerImage,"mInnerImage");
	HX_VISIT_MEMBER_NAME(mOuterImage,"mOuterImage");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Joystick_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setType") ) { return setType_dyn(); }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"mRender") ) { return mRender; }
		if (HX_FIELD_EQ(inName,"mBounds") ) { return mBounds; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendEvent") ) { return sendEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"mDistance") ) { return mDistance; }
		if (HX_FIELD_EQ(inName,"mCurTouch") ) { return mCurTouch; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EVENT_MOVE") ) { return EVENT_MOVE; }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"setCenterY") ) { return setCenterY_dyn(); }
		if (HX_FIELD_EQ(inName,"setCenterX") ) { return setCenterX_dyn(); }
		if (HX_FIELD_EQ(inName,"getCenterY") ) { return getCenterY_dyn(); }
		if (HX_FIELD_EQ(inName,"getCenterX") ) { return getCenterX_dyn(); }
		if (HX_FIELD_EQ(inName,"mDirection") ) { return mDirection; }
		if (HX_FIELD_EQ(inName,"mRelativeY") ) { return mRelativeY; }
		if (HX_FIELD_EQ(inName,"mRelativeX") ) { return mRelativeX; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"EVENT_TOUCH") ) { return EVENT_TOUCH; }
		if (HX_FIELD_EQ(inName,"onFloatMove") ) { return onFloatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"mInnerImage") ) { return mInnerImage; }
		if (HX_FIELD_EQ(inName,"mOuterImage") ) { return mOuterImage; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onStaticMove") ) { return onStaticMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"mInnerRadius") ) { return mInnerRadius; }
		if (HX_FIELD_EQ(inName,"mOuterRadius") ) { return mOuterRadius; }
		if (HX_FIELD_EQ(inName,"mTouchRadius") ) { return mTouchRadius; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"EVENT_TOUCHUP") ) { return EVENT_TOUCHUP; }
		if (HX_FIELD_EQ(inName,"EVENT_CHANGED") ) { return EVENT_CHANGED; }
		if (HX_FIELD_EQ(inName,"JoystickFloat") ) { return JoystickFloat; }
		if (HX_FIELD_EQ(inName,"onStaticTouch") ) { return onStaticTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"setInnerImage") ) { return setInnerImage_dyn(); }
		if (HX_FIELD_EQ(inName,"setOuterImage") ) { return setOuterImage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"JoystickStatic") ) { return JoystickStatic; }
		if (HX_FIELD_EQ(inName,"onAbsoluteMove") ) { return onAbsoluteMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRelativeMove") ) { return onRelativeMove_dyn(); }
		if (HX_FIELD_EQ(inName,"isWithinBounds") ) { return isWithinBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setInnerRadius") ) { return setInnerRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"setOuterRadius") ) { return setOuterRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"setTouchRadius") ) { return setTouchRadius_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onAbsoluteTouch") ) { return onAbsoluteTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"onRelativeTouch") ) { return onRelativeTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"positionContent") ) { return positionContent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"JoystickRelative") ) { return JoystickRelative; }
		if (HX_FIELD_EQ(inName,"JoystickAbsolute") ) { return JoystickAbsolute; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_TOUCHRADIUS") ) { return DEFAULT_TOUCHRADIUS; }
		if (HX_FIELD_EQ(inName,"DEFAULT_OUTERRADIUS") ) { return DEFAULT_OUTERRADIUS; }
		if (HX_FIELD_EQ(inName,"DEFAULT_INNERRADIUS") ) { return DEFAULT_INNERRADIUS; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"mInnerImageScaleOnTouch") ) { return mInnerImageScaleOnTouch; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { mType=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mRender") ) { mRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mBounds") ) { mBounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mDistance") ) { mDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCurTouch") ) { mCurTouch=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EVENT_MOVE") ) { EVENT_MOVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mDirection") ) { mDirection=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mRelativeY") ) { mRelativeY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mRelativeX") ) { mRelativeX=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"EVENT_TOUCH") ) { EVENT_TOUCH=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mInnerImage") ) { mInnerImage=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mOuterImage") ) { mOuterImage=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mInnerRadius") ) { mInnerRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mOuterRadius") ) { mOuterRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mTouchRadius") ) { mTouchRadius=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"EVENT_TOUCHUP") ) { EVENT_TOUCHUP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EVENT_CHANGED") ) { EVENT_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JoystickFloat") ) { JoystickFloat=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"JoystickStatic") ) { JoystickStatic=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"JoystickRelative") ) { JoystickRelative=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JoystickAbsolute") ) { JoystickAbsolute=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_TOUCHRADIUS") ) { DEFAULT_TOUCHRADIUS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEFAULT_OUTERRADIUS") ) { DEFAULT_OUTERRADIUS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEFAULT_INNERRADIUS") ) { DEFAULT_INNERRADIUS=inValue.Cast< Float >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"mInnerImageScaleOnTouch") ) { mInnerImageScaleOnTouch=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mDirection"));
	outFields->push(HX_CSTRING("mDistance"));
	outFields->push(HX_CSTRING("mInnerImageScaleOnTouch"));
	outFields->push(HX_CSTRING("mRelativeY"));
	outFields->push(HX_CSTRING("mRelativeX"));
	outFields->push(HX_CSTRING("mCurTouch"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("mRender"));
	outFields->push(HX_CSTRING("mBounds"));
	outFields->push(HX_CSTRING("mInnerRadius"));
	outFields->push(HX_CSTRING("mOuterRadius"));
	outFields->push(HX_CSTRING("mTouchRadius"));
	outFields->push(HX_CSTRING("mType"));
	outFields->push(HX_CSTRING("mInnerImage"));
	outFields->push(HX_CSTRING("mOuterImage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EVENT_TOUCH"),
	HX_CSTRING("EVENT_MOVE"),
	HX_CSTRING("EVENT_TOUCHUP"),
	HX_CSTRING("EVENT_CHANGED"),
	HX_CSTRING("DEFAULT_TOUCHRADIUS"),
	HX_CSTRING("DEFAULT_OUTERRADIUS"),
	HX_CSTRING("DEFAULT_INNERRADIUS"),
	HX_CSTRING("JoystickStatic"),
	HX_CSTRING("JoystickRelative"),
	HX_CSTRING("JoystickAbsolute"),
	HX_CSTRING("JoystickFloat"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onFloatMove"),
	HX_CSTRING("onAbsoluteMove"),
	HX_CSTRING("onRelativeMove"),
	HX_CSTRING("onStaticMove"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onAbsoluteTouch"),
	HX_CSTRING("onRelativeTouch"),
	HX_CSTRING("onStaticTouch"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("sendEvent"),
	HX_CSTRING("isWithinBounds"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("setCenterY"),
	HX_CSTRING("setCenterX"),
	HX_CSTRING("getCenterY"),
	HX_CSTRING("getCenterX"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("positionContent"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("setInnerRadius"),
	HX_CSTRING("setOuterRadius"),
	HX_CSTRING("setTouchRadius"),
	HX_CSTRING("setType"),
	HX_CSTRING("setInnerImage"),
	HX_CSTRING("setOuterImage"),
	HX_CSTRING("stop"),
	HX_CSTRING("start"),
	HX_CSTRING("mDirection"),
	HX_CSTRING("mDistance"),
	HX_CSTRING("mInnerImageScaleOnTouch"),
	HX_CSTRING("mRelativeY"),
	HX_CSTRING("mRelativeX"),
	HX_CSTRING("mCurTouch"),
	HX_CSTRING("enabled"),
	HX_CSTRING("mRender"),
	HX_CSTRING("mBounds"),
	HX_CSTRING("mInnerRadius"),
	HX_CSTRING("mOuterRadius"),
	HX_CSTRING("mTouchRadius"),
	HX_CSTRING("mType"),
	HX_CSTRING("mInnerImage"),
	HX_CSTRING("mOuterImage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::EVENT_TOUCH,"EVENT_TOUCH");
	HX_MARK_MEMBER_NAME(Joystick_obj::EVENT_MOVE,"EVENT_MOVE");
	HX_MARK_MEMBER_NAME(Joystick_obj::EVENT_TOUCHUP,"EVENT_TOUCHUP");
	HX_MARK_MEMBER_NAME(Joystick_obj::EVENT_CHANGED,"EVENT_CHANGED");
	HX_MARK_MEMBER_NAME(Joystick_obj::DEFAULT_TOUCHRADIUS,"DEFAULT_TOUCHRADIUS");
	HX_MARK_MEMBER_NAME(Joystick_obj::DEFAULT_OUTERRADIUS,"DEFAULT_OUTERRADIUS");
	HX_MARK_MEMBER_NAME(Joystick_obj::DEFAULT_INNERRADIUS,"DEFAULT_INNERRADIUS");
	HX_MARK_MEMBER_NAME(Joystick_obj::JoystickStatic,"JoystickStatic");
	HX_MARK_MEMBER_NAME(Joystick_obj::JoystickRelative,"JoystickRelative");
	HX_MARK_MEMBER_NAME(Joystick_obj::JoystickAbsolute,"JoystickAbsolute");
	HX_MARK_MEMBER_NAME(Joystick_obj::JoystickFloat,"JoystickFloat");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::EVENT_TOUCH,"EVENT_TOUCH");
	HX_VISIT_MEMBER_NAME(Joystick_obj::EVENT_MOVE,"EVENT_MOVE");
	HX_VISIT_MEMBER_NAME(Joystick_obj::EVENT_TOUCHUP,"EVENT_TOUCHUP");
	HX_VISIT_MEMBER_NAME(Joystick_obj::EVENT_CHANGED,"EVENT_CHANGED");
	HX_VISIT_MEMBER_NAME(Joystick_obj::DEFAULT_TOUCHRADIUS,"DEFAULT_TOUCHRADIUS");
	HX_VISIT_MEMBER_NAME(Joystick_obj::DEFAULT_OUTERRADIUS,"DEFAULT_OUTERRADIUS");
	HX_VISIT_MEMBER_NAME(Joystick_obj::DEFAULT_INNERRADIUS,"DEFAULT_INNERRADIUS");
	HX_VISIT_MEMBER_NAME(Joystick_obj::JoystickStatic,"JoystickStatic");
	HX_VISIT_MEMBER_NAME(Joystick_obj::JoystickRelative,"JoystickRelative");
	HX_VISIT_MEMBER_NAME(Joystick_obj::JoystickAbsolute,"JoystickAbsolute");
	HX_VISIT_MEMBER_NAME(Joystick_obj::JoystickFloat,"JoystickFloat");
};

Class Joystick_obj::__mClass;

void Joystick_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Joystick"), hx::TCanCast< Joystick_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Joystick_obj::__boot()
{
	EVENT_TOUCH= HX_CSTRING("thumbstickTouch");
	EVENT_MOVE= HX_CSTRING("thumbstickMove");
	EVENT_TOUCHUP= HX_CSTRING("thumbstickTouchUp");
	EVENT_CHANGED= HX_CSTRING("thumbstickChanged");
	DEFAULT_TOUCHRADIUS= 50.0;
	DEFAULT_OUTERRADIUS= 50.0;
	DEFAULT_INNERRADIUS= 25.0;
	JoystickStatic= (int)0;
	JoystickRelative= (int)1;
	JoystickAbsolute= (int)2;
	JoystickFloat= (int)3;
}

