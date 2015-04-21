#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_RoxGestureAgent
#include <RoxGestureAgent.h>
#endif
#ifndef INCLUDED_RoxGestureEvent
#include <RoxGestureEvent.h>
#endif
#ifndef INCLUDED__RoxGestureAgent_TouchPoint
#include <_RoxGestureAgent/TouchPoint.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
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
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif

Void RoxGestureAgent_obj::__construct(::flash::display::InteractiveObject inOwner,Dynamic __o_inMode)
{
HX_STACK_PUSH("RoxGestureAgent::new","RoxGestureAgent.hx",23);
Dynamic inMode = __o_inMode.Default(2);
{
	HX_STACK_LINE(36)
	this->swipeTimeout = 0.1;
	HX_STACK_LINE(35)
	this->longPressDelay = 1.0;
	HX_STACK_LINE(79)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	if ((!(::RoxGestureAgent_obj::initialized))){
		HX_STACK_LINE(80)
		::RoxGestureAgent_obj::initialized = true;
		HX_STACK_LINE(80)
		::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(80)
		::RoxGestureAgent_obj::moveToleSqr = (::flash::geom::Point_obj::__new(stage->get_stageWidth(),stage->get_stageHeight())->get_length() * 0.008);
		HX_STACK_LINE(80)
		hx::MultEq(::RoxGestureAgent_obj::moveToleSqr,::RoxGestureAgent_obj::moveToleSqr);
		HX_STACK_LINE(80)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(80)
			::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
		}
	}
	HX_STACK_LINE(81)
	this->owner = inOwner;
	HX_STACK_LINE(82)
	this->mode = inMode;
	HX_STACK_LINE(83)
	bool isTouch = ::flash::ui::Multitouch_obj::get_supportsTouchEvents();		HX_STACK_VAR(isTouch,"isTouch");
	HX_STACK_LINE(84)
	this->owner->set_mouseEnabled(true);
	struct _Function_1_1{
		inline static Array< ::String > Block( bool &isTouch){
			HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",85);
			{
				HX_STACK_LINE(85)
				return (  ((isTouch)) ? Array< ::String >(::RoxGestureAgent_obj::touchEvents) : Array< ::String >(::RoxGestureAgent_obj::mouseEvents) );
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	this->listenEvents = (  (((this->mode == (int)1))) ? Array< ::String >(_Function_1_1::Block(isTouch)) : Array< ::String >((  ((isTouch)) ? Array< ::String >(::RoxGestureAgent_obj::geTouchEvents) : Array< ::String >(::RoxGestureAgent_obj::geMouseEvents) )) );
	struct _Function_1_2{
		inline static Dynamic Block( ::RoxGestureAgent_obj *__this,bool &isTouch){
			HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",86);
			{
				HX_STACK_LINE(86)
				return (  ((isTouch)) ? Dynamic(__this->convertTouch_dyn()) : Dynamic(__this->convertMouse_dyn()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(86)
	this->handler = (  (((this->mode == (int)1))) ? Dynamic(_Function_1_2::Block(this,isTouch)) : Dynamic((  ((isTouch)) ? Dynamic(this->onTouch_dyn()) : Dynamic(this->onMouse_dyn()) )) );
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		Array< ::String > _g11 = this->listenEvents;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(87)
		while(((_g1 < _g11->length))){
			HX_STACK_LINE(87)
			::String type = _g11->__get(_g1);		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(87)
			++(_g1);
			HX_STACK_LINE(87)
			this->owner->addEventListener(type,this->handler_dyn(),null(),null(),null());
		}
	}
	HX_STACK_LINE(88)
	if (((this->mode == (int)3))){

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_PUSH("*::_Function_2_1","RoxGestureAgent.hx",88);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(88)
				_g->__get((int)0).StaticCast< ::RoxGestureAgent >()->overlay = null();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(88)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::RESIZE, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(89)
	this->touchList = ::List_obj::__new();
	HX_STACK_LINE(90)
	this->setReady();
}
;
	return null();
}

RoxGestureAgent_obj::~RoxGestureAgent_obj() { }

Dynamic RoxGestureAgent_obj::__CreateEmpty() { return  new RoxGestureAgent_obj; }
hx::ObjectPtr< RoxGestureAgent_obj > RoxGestureAgent_obj::__new(::flash::display::InteractiveObject inOwner,Dynamic __o_inMode)
{  hx::ObjectPtr< RoxGestureAgent_obj > result = new RoxGestureAgent_obj();
	result->__construct(inOwner,__o_inMode);
	return result;}

Dynamic RoxGestureAgent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RoxGestureAgent_obj > result = new RoxGestureAgent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RoxGestureAgent_obj::cancelLongPress( ){
{
		HX_STACK_PUSH("RoxGestureAgent::cancelLongPress","RoxGestureAgent.hx",334);
		HX_STACK_THIS(this);
		HX_STACK_LINE(334)
		if (((this->longPressTimer != null()))){
			HX_STACK_LINE(336)
			this->longPressTimer->stop(null(),false,false);
			HX_STACK_LINE(337)
			this->longPressTimer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,cancelLongPress,(void))

Void RoxGestureAgent_obj::setTwoFingerMove( ::_RoxGestureAgent::TouchPoint pt){
{
		HX_STACK_PUSH("RoxGestureAgent::setTwoFingerMove","RoxGestureAgent.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pt,"pt");
		HX_STACK_LINE(329)
		this->state = (int)2;
		HX_STACK_LINE(330)
		this->touch1 = pt;
		HX_STACK_LINE(331)
		if (((this->longPressTimer != null()))){
			HX_STACK_LINE(331)
			this->longPressTimer->stop(null(),false,false);
			HX_STACK_LINE(331)
			this->longPressTimer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,setTwoFingerMove,(void))

Void RoxGestureAgent_obj::setMove( ::_RoxGestureAgent::TouchPoint pt){
{
		HX_STACK_PUSH("RoxGestureAgent::setMove","RoxGestureAgent.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pt,"pt");
		HX_STACK_LINE(322)
		this->state = (int)4;
		HX_STACK_LINE(323)
		if (((this->touch0 != null()))){
			HX_STACK_LINE(323)
			this->touchList->push(this->touch0);
		}
		HX_STACK_LINE(324)
		this->touch0 = pt;
		HX_STACK_LINE(325)
		if (((this->longPressTimer != null()))){
			HX_STACK_LINE(325)
			this->longPressTimer->stop(null(),false,false);
			HX_STACK_LINE(325)
			this->longPressTimer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,setMove,(void))

Void RoxGestureAgent_obj::setReady( ){
{
		HX_STACK_PUSH("RoxGestureAgent::setReady","RoxGestureAgent.hx",310);
		HX_STACK_THIS(this);
		HX_STACK_LINE(311)
		this->state = (int)0;
		HX_STACK_LINE(312)
		this->touch0 = this->touch1 = null();
		HX_STACK_LINE(313)
		this->touchList->clear();
		HX_STACK_LINE(314)
		if (((this->longPressTimer != null()))){
			HX_STACK_LINE(314)
			this->longPressTimer->stop(null(),false,false);
			HX_STACK_LINE(314)
			this->longPressTimer = null();
		}
		HX_STACK_LINE(315)
		if (((bool((this->overlay != null())) && bool((this->mode == (int)3))))){
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::String > _g1 = this->listenEvents;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(316)
				while(((_g < _g1->length))){
					HX_STACK_LINE(316)
					::String type = _g1->__get(_g);		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(316)
					++(_g);
					HX_STACK_LINE(316)
					this->overlay->removeEventListener(type,this->handler_dyn(),null());
				}
			}
			HX_STACK_LINE(317)
			::flash::Lib_obj::get_current()->get_stage()->removeChild(this->overlay);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,setReady,(void))

Void RoxGestureAgent_obj::sendLongPress( ::_RoxGestureAgent::TouchPoint pt){
{
		HX_STACK_PUSH("RoxGestureAgent::sendLongPress","RoxGestureAgent.hx",305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pt,"pt");
		HX_STACK_LINE(306)
		this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_long_press"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),null()));
		HX_STACK_LINE(307)
		this->setReady();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,sendLongPress,(void))

bool RoxGestureAgent_obj::handleTouch( ::String type,Dynamic e,bool prim,int touchId){
	HX_STACK_PUSH("RoxGestureAgent::handleTouch","RoxGestureAgent.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(prim,"prim");
	HX_STACK_ARG(touchId,"touchId");
	HX_STACK_LINE(218)
	::_RoxGestureAgent::TouchPoint pt = ::_RoxGestureAgent::TouchPoint_obj::__new(this->owner,e,touchId);		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(219)
	::_RoxGestureAgent::TouchPoint tp = (  ((prim)) ? ::_RoxGestureAgent::TouchPoint(this->touch0) : ::_RoxGestureAgent::TouchPoint(this->touch1) );		HX_STACK_VAR(tp,"tp");
	struct _Function_1_1{
		inline static Float Block( ::_RoxGestureAgent::TouchPoint &tp,::_RoxGestureAgent::TouchPoint &pt){
			HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",220);
			{
				HX_STACK_LINE(220)
				Float dx = (tp->sx - pt->sx);		HX_STACK_VAR(dx,"dx");
				Float dy = (tp->sy - pt->sy);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(220)
				return ((dx * dx) + (dy * dy));
			}
			return null();
		}
	};
	HX_STACK_LINE(220)
	if (((bool((bool((type == HX_CSTRING("rox_touch_move"))) && bool((tp != null())))) && bool((_Function_1_1::Block(tp,pt) < ::RoxGestureAgent_obj::moveToleSqr))))){
		HX_STACK_LINE(220)
		return false;
	}
	HX_STACK_LINE(221)
	bool handled = true;		HX_STACK_VAR(handled,"handled");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		::RoxGestureAgent _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		switch( (int)(_g->state)){
			case (int)0: {
				HX_STACK_LINE(223)
				if (((bool(prim) && bool((type == HX_CSTRING("rox_touch_begin")))))){
					HX_STACK_LINE(225)
					this->state = (int)1;
					HX_STACK_LINE(226)
					this->touch0 = pt;
					HX_STACK_LINE(227)
					this->longPressTimer = ::motion::Actuate_obj::timer(this->longPressDelay,null())->onComplete(this->sendLongPress_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(pt)));
					HX_STACK_LINE(228)
					if (((this->tweener != null()))){
						HX_STACK_LINE(228)
						this->tweener->stop(null(),false,false);
						HX_STACK_LINE(228)
						this->tweener = null();
					}
					HX_STACK_LINE(229)
					if (((this->mode == (int)3))){
						HX_STACK_LINE(230)
						::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
						HX_STACK_LINE(231)
						if (((this->overlay == null()))){
							HX_STACK_LINE(232)
							this->overlay = ::flash::display::Sprite_obj::__new();
							HX_STACK_LINE(233)
							this->overlay->set_name(HX_CSTRING("overlay"));
							HX_STACK_LINE(234)
							this->overlay->get_graphics()->beginFill((int)16777215,(Float((int)1) / Float((int)255)));
							HX_STACK_LINE(235)
							this->overlay->get_graphics()->drawRect((int)0,(int)0,stage->get_stageWidth(),stage->get_stageHeight());
						}
						HX_STACK_LINE(237)
						stage->addChild(this->overlay);
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							Array< ::String > _g2 = this->listenEvents;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(238)
							while(((_g1 < _g2->length))){
								HX_STACK_LINE(238)
								::String type1 = _g2->__get(_g1);		HX_STACK_VAR(type1,"type1");
								HX_STACK_LINE(238)
								++(_g1);
								HX_STACK_LINE(238)
								this->overlay->addEventListener(type1,this->handler_dyn(),null(),null(),null());
							}
						}
					}
				}
				else{
					HX_STACK_LINE(240)
					handled = false;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(243)
				if (((bool(prim) && bool((type == HX_CSTRING("rox_touch_end")))))){
					HX_STACK_LINE(245)
					this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_tap"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),null()));
					HX_STACK_LINE(246)
					this->setReady();
				}
				else{
					HX_STACK_LINE(247)
					if (((bool(prim) && bool((type == HX_CSTRING("rox_touch_move")))))){
						HX_STACK_LINE(248)
						::flash::geom::Point pan = ::flash::geom::Point_obj::__new((pt->sx - this->touch0->sx),(pt->sy - this->touch0->sy));		HX_STACK_VAR(pan,"pan");
						HX_STACK_LINE(249)
						this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_pan"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),pan));
						HX_STACK_LINE(250)
						{
							HX_STACK_LINE(250)
							this->state = (int)4;
							HX_STACK_LINE(250)
							if (((this->touch0 != null()))){
								HX_STACK_LINE(250)
								this->touchList->push(this->touch0);
							}
							HX_STACK_LINE(250)
							this->touch0 = pt;
							HX_STACK_LINE(250)
							if (((this->longPressTimer != null()))){
								HX_STACK_LINE(250)
								this->longPressTimer->stop(null(),false,false);
								HX_STACK_LINE(250)
								this->longPressTimer = null();
							}
						}
					}
					else{
						HX_STACK_LINE(251)
						if (((bool(!(prim)) && bool((type == HX_CSTRING("rox_touch_begin")))))){
							HX_STACK_LINE(252)
							this->state = (int)2;
							HX_STACK_LINE(252)
							this->touch1 = pt;
							HX_STACK_LINE(252)
							if (((this->longPressTimer != null()))){
								HX_STACK_LINE(252)
								this->longPressTimer->stop(null(),false,false);
								HX_STACK_LINE(252)
								this->longPressTimer = null();
							}
						}
						else{
							HX_STACK_LINE(253)
							handled = false;
						}
					}
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(256)
				if (((bool(prim) && bool((type == HX_CSTRING("rox_touch_move")))))){
					HX_STACK_LINE(258)
					::flash::geom::Point pan = ::flash::geom::Point_obj::__new((pt->sx - this->touch0->sx),(pt->sy - this->touch0->sy));		HX_STACK_VAR(pan,"pan");
					HX_STACK_LINE(259)
					this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_pan"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),pan));
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						this->state = (int)4;
						HX_STACK_LINE(260)
						if (((this->touch0 != null()))){
							HX_STACK_LINE(260)
							this->touchList->push(this->touch0);
						}
						HX_STACK_LINE(260)
						this->touch0 = pt;
						HX_STACK_LINE(260)
						if (((this->longPressTimer != null()))){
							HX_STACK_LINE(260)
							this->longPressTimer->stop(null(),false,false);
							HX_STACK_LINE(260)
							this->longPressTimer = null();
						}
					}
				}
				else{
					HX_STACK_LINE(261)
					if (((bool(prim) && bool(((bool((type == HX_CSTRING("rox_touch_end"))) || bool((bool((bool((this->mode != (int)3)) && bool((type == HX_CSTRING("rox_touch_out"))))) && bool((e->__Field(HX_CSTRING("target"),true) == this->owner)))))))))){
						HX_STACK_LINE(263)
						if (((bool((this->swipeTimeout <= (int)0)) || bool(((pt->time - this->touch0->time) < this->swipeTimeout))))){
							HX_STACK_LINE(264)
							::_RoxGestureAgent::TouchPoint beginpt = this->touchList->pop();		HX_STACK_VAR(beginpt,"beginpt");
							::_RoxGestureAgent::TouchPoint endpt = null();		HX_STACK_VAR(endpt,"endpt");
							HX_STACK_LINE(265)
							for(::cpp::FastIterator_obj< ::_RoxGestureAgent::TouchPoint > *__it = ::cpp::CreateFastIterator< ::_RoxGestureAgent::TouchPoint >(this->touchList->iterator());  __it->hasNext(); ){
								::_RoxGestureAgent::TouchPoint i = __it->next();
								{
									HX_STACK_LINE(266)
									if ((((beginpt->time - i->time) > 0.2))){
										HX_STACK_LINE(266)
										break;
									}
									HX_STACK_LINE(267)
									endpt = i;
								}
;
							}
							HX_STACK_LINE(269)
							if (((endpt != null()))){
								HX_STACK_LINE(270)
								Float dx;		HX_STACK_VAR(dx,"dx");
								Float dy;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(271)
								Float angle = ::Math_obj::atan2(dy = (beginpt->sy - endpt->sy),dx = (beginpt->sx - endpt->sx));		HX_STACK_VAR(angle,"angle");
								HX_STACK_LINE(272)
								::flash::geom::Point velocity = ::flash::geom::Point_obj::polar(((Float(::flash::geom::Point_obj::__new(dx,dy)->get_length()) / Float(((beginpt->time - endpt->time)))) * 0.25),angle);		HX_STACK_VAR(velocity,"velocity");
								HX_STACK_LINE(273)
								this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_swipe"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),velocity));
							}
						}
						HX_STACK_LINE(276)
						this->setReady();
					}
					else{
						HX_STACK_LINE(277)
						if (((bool(!(prim)) && bool((type == HX_CSTRING("rox_touch_begin")))))){
							HX_STACK_LINE(278)
							this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_begin"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),null()));
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								this->state = (int)2;
								HX_STACK_LINE(279)
								this->touch1 = pt;
								HX_STACK_LINE(279)
								if (((this->longPressTimer != null()))){
									HX_STACK_LINE(279)
									this->longPressTimer->stop(null(),false,false);
									HX_STACK_LINE(279)
									this->longPressTimer = null();
								}
							}
						}
						else{
							HX_STACK_LINE(280)
							handled = false;
						}
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(283)
				if (((type == HX_CSTRING("rox_touch_end")))){
					HX_STACK_LINE(285)
					this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_end"),null(),null(),pt->lx,pt->ly,pt->sx,pt->sy,null(),hx::ObjectPtr<OBJ_>(this),null()));
					HX_STACK_LINE(286)
					this->setReady();
				}
				else{
					HX_STACK_LINE(287)
					if (((type == HX_CSTRING("rox_touch_move")))){
						HX_STACK_LINE(288)
						::_RoxGestureAgent::TouchPoint pt1 = (  ((prim)) ? ::_RoxGestureAgent::TouchPoint(this->touch1) : ::_RoxGestureAgent::TouchPoint(this->touch0) );		HX_STACK_VAR(pt1,"pt1");
						::_RoxGestureAgent::TouchPoint pt2 = (  ((prim)) ? ::_RoxGestureAgent::TouchPoint(this->touch0) : ::_RoxGestureAgent::TouchPoint(this->touch1) );		HX_STACK_VAR(pt2,"pt2");
						HX_STACK_LINE(289)
						Float scale = (Float(::flash::geom::Point_obj::distance(pt->spt,pt1->spt)) / Float(::flash::geom::Point_obj::distance(pt2->spt,pt1->spt)));		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(290)
						Float angle = (::Math_obj::atan2((pt->sy - pt1->sy),(pt->sx - pt1->sx)) - ::Math_obj::atan2((pt2->sy - pt1->sy),(pt2->sx - pt1->sx)));		HX_STACK_VAR(angle,"angle");
						HX_STACK_LINE(291)
						::flash::geom::Point mid = ::flash::geom::Point_obj::interpolate(pt1->lpt,pt2->lpt,0.5);		HX_STACK_VAR(mid,"mid");
						HX_STACK_LINE(292)
						::flash::geom::Point gmid = this->owner->localToGlobal(mid);		HX_STACK_VAR(gmid,"gmid");
						HX_STACK_LINE(293)
						if (((scale != (int)1))){
							HX_STACK_LINE(294)
							this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_pinch"),null(),null(),mid->x,mid->y,gmid->x,gmid->y,null(),hx::ObjectPtr<OBJ_>(this),scale));
						}
						HX_STACK_LINE(295)
						if (((angle != (int)0))){
							HX_STACK_LINE(296)
							this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(HX_CSTRING("rox_gesture_rotation"),null(),null(),mid->x,mid->y,gmid->x,gmid->y,null(),hx::ObjectPtr<OBJ_>(this),angle));
						}
						HX_STACK_LINE(297)
						if ((prim)){
							HX_STACK_LINE(297)
							this->touch0 = pt;
						}
						else{
							HX_STACK_LINE(297)
							this->touch1 = pt;
						}
					}
					else{
						HX_STACK_LINE(298)
						handled = false;
					}
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(302)
	return handled;
}


HX_DEFINE_DYNAMIC_FUNC4(RoxGestureAgent_obj,handleTouch,return )

Void RoxGestureAgent_obj::onMouse( Dynamic e){
{
		HX_STACK_PUSH("RoxGestureAgent::onMouse","RoxGestureAgent.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(209)
		::String t = e->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(210)
		if (((bool((bool((t == ::flash::events::MouseEvent_obj::MOUSE_DOWN)) || bool((t == ::flash::events::MouseEvent_obj::MOUSE_UP)))) || bool(e->__Field(HX_CSTRING("buttonDown"),true))))){
			HX_STACK_LINE(210)
			this->handleTouch(::RoxGestureAgent_obj::typeMap->get(t),e,true,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,onMouse,(void))

Void RoxGestureAgent_obj::onTouch( Dynamic e){
{
		HX_STACK_PUSH("RoxGestureAgent::onTouch","RoxGestureAgent.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(195)
		int id = e->__Field(HX_CSTRING("touchPointID"),true);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(197)
		bool prim = (bool((this->touch0 == null())) || bool((this->touch0->tid == id)));		HX_STACK_VAR(prim,"prim");
		HX_STACK_LINE(198)
		if (((bool((bool(prim) || bool((bool((this->touch1 != null())) && bool((this->touch1->tid == id)))))) || bool((bool((bool((this->touch0 != null())) && bool((this->touch1 == null())))) && bool((this->touch0->tid != id))))))){
			struct _Function_2_1{
				inline static ::String Block( Dynamic &e){
					HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",200);
					{
						HX_STACK_LINE(200)
						::String key = e->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(200)
						return ::RoxGestureAgent_obj::typeMap->get(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(198)
			this->handleTouch(_Function_2_1::Block(e),e,prim,id);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,onTouch,(void))

Void RoxGestureAgent_obj::convertMouse( Dynamic e){
{
		HX_STACK_PUSH("RoxGestureAgent::convertMouse","RoxGestureAgent.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(187)
		::String t = e->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(188)
		if (((bool((bool((bool((t == ::flash::events::MouseEvent_obj::MOUSE_DOWN)) || bool((t == ::flash::events::MouseEvent_obj::MOUSE_UP)))) || bool((t == ::flash::events::MouseEvent_obj::CLICK)))) || bool(e->__Field(HX_CSTRING("buttonDown"),true))))){
			HX_STACK_LINE(188)
			this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(::RoxGestureAgent_obj::typeMap->get(t),e->__Field(HX_CSTRING("bubbles"),true),e->__Field(HX_CSTRING("cancelable"),true),e->__Field(HX_CSTRING("localX"),true),e->__Field(HX_CSTRING("localY"),true),e->__Field(HX_CSTRING("stageX"),true),e->__Field(HX_CSTRING("stageY"),true),(int)0,hx::ObjectPtr<OBJ_>(this),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,convertMouse,(void))

Void RoxGestureAgent_obj::convertTouch( Dynamic e){
{
		HX_STACK_PUSH("RoxGestureAgent::convertTouch","RoxGestureAgent.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		struct _Function_1_1{
			inline static ::String Block( Dynamic &e){
				HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",182);
				{
					HX_STACK_LINE(182)
					::String key = e->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(182)
					return ::RoxGestureAgent_obj::typeMap->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		this->owner->dispatchEvent(::RoxGestureEvent_obj::__new(_Function_1_1::Block(e),e->__Field(HX_CSTRING("bubbles"),true),e->__Field(HX_CSTRING("cancelable"),true),e->__Field(HX_CSTRING("localX"),true),e->__Field(HX_CSTRING("localY"),true),e->__Field(HX_CSTRING("stageX"),true),e->__Field(HX_CSTRING("stageY"),true),e->__Field(HX_CSTRING("touchPointID"),true),hx::ObjectPtr<OBJ_>(this),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,convertTouch,(void))

Void RoxGestureAgent_obj::handleEvent( int flags,::RoxGestureEvent e){
{
		HX_STACK_PUSH("RoxGestureAgent::handleEvent","RoxGestureAgent.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flags,"flags");
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(136)
		::flash::display::InteractiveObject sp = e->get_target();		HX_STACK_VAR(sp,"sp");
		HX_STACK_LINE(137)
		if (((sp != this->owner))){
			HX_STACK_LINE(137)
			return null();
		}
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::String _g = e->get_type();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("rox_gesture_pan"))){
				struct _Function_3_1{
					inline static ::flash::geom::Point Block( ::flash::display::InteractiveObject &sp,::RoxGestureEvent &e){
						HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",140);
						{
							HX_STACK_LINE(140)
							::flash::geom::Point globalOffset = e->extra;		HX_STACK_VAR(globalOffset,"globalOffset");
							HX_STACK_LINE(140)
							::flash::geom::Point pt = sp->get_parent()->localToGlobal(::flash::geom::Point_obj::__new(sp->get_x(),sp->get_y()));		HX_STACK_VAR(pt,"pt");
							HX_STACK_LINE(140)
							pt->offset(globalOffset->x,globalOffset->y);
							HX_STACK_LINE(140)
							pt = sp->get_parent()->globalToLocal(pt);
							HX_STACK_LINE(140)
							pt->offset(-(sp->get_x()),-(sp->get_y()));
							HX_STACK_LINE(140)
							return pt;
						}
						return null();
					}
				};
				HX_STACK_LINE(140)
				::flash::geom::Point pt = _Function_3_1::Block(sp,e);		HX_STACK_VAR(pt,"pt");
				HX_STACK_LINE(141)
				if (((((int(flags) & int((int)1))) != (int)0))){
					HX_STACK_LINE(141)
					::flash::display::InteractiveObject _g1 = sp;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(141)
					_g1->set_x((_g1->get_x() + pt->x));
				}
				HX_STACK_LINE(142)
				if (((((int(flags) & int((int)2))) != (int)0))){
					HX_STACK_LINE(142)
					::flash::display::InteractiveObject _g1 = sp;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(142)
					_g1->set_y((_g1->get_y() + pt->y));
				}
			}
			else if (  ( _switch_1==HX_CSTRING("rox_gesture_swipe"))){
				struct _Function_3_1{
					inline static ::flash::geom::Point Block( ::flash::display::InteractiveObject &sp,::RoxGestureEvent &e){
						HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",144);
						{
							HX_STACK_LINE(144)
							::flash::geom::Point globalOffset = ::flash::geom::Point_obj::__new((e->extra->__Field(HX_CSTRING("x"),true) * 2.0),(e->extra->__Field(HX_CSTRING("y"),true) * 2.0));		HX_STACK_VAR(globalOffset,"globalOffset");
							HX_STACK_LINE(144)
							::flash::geom::Point pt = sp->get_parent()->localToGlobal(::flash::geom::Point_obj::__new(sp->get_x(),sp->get_y()));		HX_STACK_VAR(pt,"pt");
							HX_STACK_LINE(144)
							pt->offset(globalOffset->x,globalOffset->y);
							HX_STACK_LINE(144)
							pt = sp->get_parent()->globalToLocal(pt);
							HX_STACK_LINE(144)
							pt->offset(-(sp->get_x()),-(sp->get_y()));
							HX_STACK_LINE(144)
							return pt;
						}
						return null();
					}
				};
				HX_STACK_LINE(144)
				::flash::geom::Point pt = _Function_3_1::Block(sp,e);		HX_STACK_VAR(pt,"pt");
				struct _Function_3_2{
					inline static Dynamic Block( ::flash::display::InteractiveObject &sp,::flash::geom::Point &pt){
						HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",145);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , (sp->get_x() + pt->x),false);
							__result->Add(HX_CSTRING("y") , (sp->get_y() + pt->y),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(145)
				this->tweener = ::motion::Actuate_obj::tween(sp,2.0,_Function_3_2::Block(sp,pt),false,null());
			}
			else if (  ( _switch_1==HX_CSTRING("rox_gesture_pinch"))){
				HX_STACK_LINE(147)
				Float scale = e->extra;		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(148)
				::flash::geom::Point spt = sp->get_parent()->localToGlobal(::flash::geom::Point_obj::__new(sp->get_x(),sp->get_y()));		HX_STACK_VAR(spt,"spt");
				HX_STACK_LINE(149)
				Float dx = (spt->x - e->stageX);		HX_STACK_VAR(dx,"dx");
				Float dy = (spt->y - e->stageY);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(150)
				Float angle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(151)
				Float nowlen = ::flash::geom::Point_obj::__new(dx,dy)->get_length();		HX_STACK_VAR(nowlen,"nowlen");
				HX_STACK_LINE(152)
				Float newlen = (nowlen * scale);		HX_STACK_VAR(newlen,"newlen");
				HX_STACK_LINE(153)
				::flash::geom::Point newpos = ::flash::geom::Point_obj::polar(newlen,angle);		HX_STACK_VAR(newpos,"newpos");
				HX_STACK_LINE(154)
				newpos->offset(e->stageX,e->stageY);
				HX_STACK_LINE(155)
				newpos = sp->get_parent()->globalToLocal(newpos);
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::flash::display::InteractiveObject _g1 = sp;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(156)
					_g1->set_scaleX((_g1->get_scaleX() * scale));
				}
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::flash::display::InteractiveObject _g1 = sp;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(157)
					_g1->set_scaleY((_g1->get_scaleY() * scale));
				}
				HX_STACK_LINE(158)
				sp->set_x(newpos->x);
				HX_STACK_LINE(159)
				sp->set_y(newpos->y);
			}
			else if (  ( _switch_1==HX_CSTRING("rox_gesture_rotation"))){
				HX_STACK_LINE(161)
				Float angle = e->extra;		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(162)
				::flash::geom::Point spt = sp->get_parent()->localToGlobal(::flash::geom::Point_obj::__new(sp->get_x(),sp->get_y()));		HX_STACK_VAR(spt,"spt");
				HX_STACK_LINE(163)
				Float dx = (spt->x - e->stageX);		HX_STACK_VAR(dx,"dx");
				Float dy = (spt->y - e->stageY);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(164)
				Float nowang = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(nowang,"nowang");
				HX_STACK_LINE(165)
				Float length = ::flash::geom::Point_obj::__new(dx,dy)->get_length();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(166)
				Float newang = (nowang + angle);		HX_STACK_VAR(newang,"newang");
				HX_STACK_LINE(167)
				::flash::geom::Point newpos = ::flash::geom::Point_obj::polar(length,newang);		HX_STACK_VAR(newpos,"newpos");
				HX_STACK_LINE(168)
				newpos->offset(e->stageX,e->stageY);
				HX_STACK_LINE(169)
				newpos = sp->get_parent()->globalToLocal(newpos);
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::flash::display::InteractiveObject _g1 = sp;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(170)
					_g1->set_rotation((_g1->get_rotation() + (::RoxGestureAgent_obj::R2D * angle)));
				}
				HX_STACK_LINE(171)
				sp->set_x(newpos->x);
				HX_STACK_LINE(172)
				sp->set_y(newpos->y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RoxGestureAgent_obj,handleEvent,(void))

Void RoxGestureAgent_obj::stopTween( ){
{
		HX_STACK_PUSH("RoxGestureAgent::stopTween","RoxGestureAgent.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_LINE(119)
		if (((this->tweener != null()))){
			HX_STACK_LINE(121)
			this->tweener->stop(null(),false,false);
			HX_STACK_LINE(122)
			this->tweener = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,stopTween,(void))

Void RoxGestureAgent_obj::startTween( Dynamic target,Float interval,Dynamic properties){
{
		HX_STACK_PUSH("RoxGestureAgent::startTween","RoxGestureAgent.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(interval,"interval");
		HX_STACK_ARG(properties,"properties");
		HX_STACK_LINE(115)
		this->tweener = ::motion::Actuate_obj::tween(target,interval,properties,false,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RoxGestureAgent_obj,startTween,(void))

Dynamic RoxGestureAgent_obj::getHandler( Dynamic __o_flags){
Dynamic flags = __o_flags.Default(3);
	HX_STACK_PUSH("RoxGestureAgent::getHandler","RoxGestureAgent.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(flags,"flags");
{
		struct _Function_1_1{
			inline static Dynamic Block( ::RoxGestureAgent_obj *__this,Dynamic &flags){
				HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",112);
				{
					HX_STACK_LINE(112)
					Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(__this->handleEvent_dyn()));		HX_STACK_VAR(f,"f");
					Array< int > a1 = Array_obj< int >::__new().Add(flags);		HX_STACK_VAR(a1,"a1");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,a1,Dynamic,f)
					Void run(::RoxGestureEvent e){
						HX_STACK_PUSH("*::_Function_2_1","RoxGestureAgent.hx",112);
						HX_STACK_ARG(e,"e");
						{
							HX_STACK_LINE(112)
							return null(f->__GetItem((int)0)(a1->__get((int)0),e).Cast< Void >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(112)
					return  Dynamic(new _Function_2_1(a1,f));
				}
				return null();
			}
		};
		HX_STACK_LINE(111)
		return _Function_1_1::Block(this,flags);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(RoxGestureAgent_obj,getHandler,return )

Void RoxGestureAgent_obj::detach( ){
{
		HX_STACK_PUSH("RoxGestureAgent::detach","RoxGestureAgent.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_LINE(104)
		if (((this->tweener != null()))){
			HX_STACK_LINE(104)
			this->tweener->stop(null(),false,false);
			HX_STACK_LINE(104)
			this->tweener = null();
		}
		HX_STACK_LINE(105)
		this->setReady();
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = this->listenEvents;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(106)
			while(((_g < _g1->length))){
				HX_STACK_LINE(106)
				::String type = _g1->__get(_g);		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(106)
				++(_g);
				HX_STACK_LINE(106)
				this->owner->removeEventListener(type,this->handler_dyn(),null());
			}
		}
		HX_STACK_LINE(107)
		this->owner = null();
		HX_STACK_LINE(108)
		this->overlay = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,detach,(void))

int RoxGestureAgent_obj::TOUCH_POINT;

int RoxGestureAgent_obj::GESTURE;

int RoxGestureAgent_obj::GESTURE_CAPTURE;

int RoxGestureAgent_obj::PAN_X;

int RoxGestureAgent_obj::PAN_Y;

int RoxGestureAgent_obj::PAN_XY;

bool RoxGestureAgent_obj::multitouchSupported;

int RoxGestureAgent_obj::READY;

int RoxGestureAgent_obj::BEGIN;

int RoxGestureAgent_obj::TWO_FINGER_MOVE;

int RoxGestureAgent_obj::MOVE;

Float RoxGestureAgent_obj::R2D;

Float RoxGestureAgent_obj::SWIPE_SCROLL_TIME;

Float RoxGestureAgent_obj::SWIPE_SAMPLE_TIME;

Float RoxGestureAgent_obj::VELOCITY_RATIO;

Array< ::String > RoxGestureAgent_obj::touchEvents;

Array< ::String > RoxGestureAgent_obj::mouseEvents;

Array< ::String > RoxGestureAgent_obj::geTouchEvents;

Array< ::String > RoxGestureAgent_obj::geMouseEvents;

bool RoxGestureAgent_obj::initialized;

Float RoxGestureAgent_obj::moveToleSqr;

Void RoxGestureAgent_obj::init( ){
{
		HX_STACK_PUSH("RoxGestureAgent::init","RoxGestureAgent.hx",93);
		HX_STACK_LINE(93)
		if ((!(::RoxGestureAgent_obj::initialized))){
			HX_STACK_LINE(95)
			::RoxGestureAgent_obj::initialized = true;
			HX_STACK_LINE(96)
			::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
			HX_STACK_LINE(97)
			::RoxGestureAgent_obj::moveToleSqr = (::flash::geom::Point_obj::__new(stage->get_stageWidth(),stage->get_stageHeight())->get_length() * 0.008);
			HX_STACK_LINE(98)
			hx::MultEq(::RoxGestureAgent_obj::moveToleSqr,::RoxGestureAgent_obj::moveToleSqr);
			HX_STACK_LINE(99)
			if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
				HX_STACK_LINE(99)
				::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,init,(void))

::flash::geom::Point RoxGestureAgent_obj::localOffset( ::flash::display::InteractiveObject obj,::flash::geom::Point globalOffset){
	HX_STACK_PUSH("RoxGestureAgent::localOffset","RoxGestureAgent.hx",126);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_ARG(globalOffset,"globalOffset");
	HX_STACK_LINE(127)
	::flash::geom::Point pt = obj->get_parent()->localToGlobal(::flash::geom::Point_obj::__new(obj->get_x(),obj->get_y()));		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(128)
	pt->offset(globalOffset->x,globalOffset->y);
	HX_STACK_LINE(129)
	pt = obj->get_parent()->globalToLocal(pt);
	HX_STACK_LINE(130)
	pt->offset(-(obj->get_x()),-(obj->get_y()));
	HX_STACK_LINE(131)
	return pt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RoxGestureAgent_obj,localOffset,return )

bool RoxGestureAgent_obj::get_multitouchSupported( ){
	HX_STACK_PUSH("RoxGestureAgent::get_multitouchSupported","RoxGestureAgent.hx",176);
	HX_STACK_LINE(176)
	return (bool(::flash::ui::Multitouch_obj::get_supportsTouchEvents()) && bool((::flash::ui::Multitouch_obj::maxTouchPoints > (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,get_multitouchSupported,return )

Array< ::String > RoxGestureAgent_obj::MAP;

::haxe::ds::StringMap RoxGestureAgent_obj::typeMap;

::haxe::ds::StringMap RoxGestureAgent_obj::initTypeMap( ){
	HX_STACK_PUSH("RoxGestureAgent::initTypeMap","RoxGestureAgent.hx",361);
	HX_STACK_LINE(362)
	::haxe::ds::StringMap map = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (int(::RoxGestureAgent_obj::MAP->length) >> int((int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(363)
		while(((_g1 < _g))){
			HX_STACK_LINE(363)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(364)
			map->set(::RoxGestureAgent_obj::MAP->__get((int(i) << int((int)1))),::RoxGestureAgent_obj::MAP->__get((((int(i) << int((int)1))) + (int)1)));
		}
	}
	HX_STACK_LINE(366)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RoxGestureAgent_obj,initTypeMap,return )


RoxGestureAgent_obj::RoxGestureAgent_obj()
{
}

void RoxGestureAgent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RoxGestureAgent);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(tweener,"tweener");
	HX_MARK_MEMBER_NAME(longPressTimer,"longPressTimer");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(listenEvents,"listenEvents");
	HX_MARK_MEMBER_NAME(touchList,"touchList");
	HX_MARK_MEMBER_NAME(touch1,"touch1");
	HX_MARK_MEMBER_NAME(touch0,"touch0");
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(swipeTimeout,"swipeTimeout");
	HX_MARK_MEMBER_NAME(longPressDelay,"longPressDelay");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_END_CLASS();
}

void RoxGestureAgent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(tweener,"tweener");
	HX_VISIT_MEMBER_NAME(longPressTimer,"longPressTimer");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(listenEvents,"listenEvents");
	HX_VISIT_MEMBER_NAME(touchList,"touchList");
	HX_VISIT_MEMBER_NAME(touch1,"touch1");
	HX_VISIT_MEMBER_NAME(touch0,"touch0");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(swipeTimeout,"swipeTimeout");
	HX_VISIT_MEMBER_NAME(longPressDelay,"longPressDelay");
	HX_VISIT_MEMBER_NAME(mode,"mode");
}

Dynamic RoxGestureAgent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"R2D") ) { return R2D; }
		if (HX_FIELD_EQ(inName,"MAP") ) { return MAP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"owner") ) { return owner; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"detach") ) { return detach_dyn(); }
		if (HX_FIELD_EQ(inName,"touch1") ) { return touch1; }
		if (HX_FIELD_EQ(inName,"touch0") ) { return touch0; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"typeMap") ) { return typeMap; }
		if (HX_FIELD_EQ(inName,"setMove") ) { return setMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouse") ) { return onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouch") ) { return onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"tweener") ) { return tweener; }
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setReady") ) { return setReady_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopTween") ) { return stopTween_dyn(); }
		if (HX_FIELD_EQ(inName,"touchList") ) { return touchList; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTween") ) { return startTween_dyn(); }
		if (HX_FIELD_EQ(inName,"getHandler") ) { return getHandler_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchEvents") ) { return touchEvents; }
		if (HX_FIELD_EQ(inName,"mouseEvents") ) { return mouseEvents; }
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"moveToleSqr") ) { return moveToleSqr; }
		if (HX_FIELD_EQ(inName,"localOffset") ) { return localOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"initTypeMap") ) { return initTypeMap_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouch") ) { return handleTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return handleEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"convertMouse") ) { return convertMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"convertTouch") ) { return convertTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"listenEvents") ) { return listenEvents; }
		if (HX_FIELD_EQ(inName,"swipeTimeout") ) { return swipeTimeout; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"geTouchEvents") ) { return geTouchEvents; }
		if (HX_FIELD_EQ(inName,"geMouseEvents") ) { return geMouseEvents; }
		if (HX_FIELD_EQ(inName,"sendLongPress") ) { return sendLongPress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"longPressTimer") ) { return longPressTimer; }
		if (HX_FIELD_EQ(inName,"longPressDelay") ) { return longPressDelay; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cancelLongPress") ) { return cancelLongPress_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setTwoFingerMove") ) { return setTwoFingerMove_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"multitouchSupported") ) { return inCallProp ? get_multitouchSupported() : multitouchSupported; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_multitouchSupported") ) { return get_multitouchSupported_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RoxGestureAgent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"R2D") ) { R2D=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAP") ) { MAP=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast< ::flash::display::InteractiveObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"touch1") ) { touch1=inValue.Cast< ::_RoxGestureAgent::TouchPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch0") ) { touch0=inValue.Cast< ::_RoxGestureAgent::TouchPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"typeMap") ) { typeMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweener") ) { tweener=inValue.Cast< ::motion::actuators::GenericActuator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"touchList") ) { touchList=inValue.Cast< ::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchEvents") ) { touchEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseEvents") ) { mouseEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveToleSqr") ) { moveToleSqr=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listenEvents") ) { listenEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swipeTimeout") ) { swipeTimeout=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"geTouchEvents") ) { geTouchEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"geMouseEvents") ) { geMouseEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"longPressTimer") ) { longPressTimer=inValue.Cast< ::motion::actuators::GenericActuator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"longPressDelay") ) { longPressDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"multitouchSupported") ) { multitouchSupported=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RoxGestureAgent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("overlay"));
	outFields->push(HX_CSTRING("tweener"));
	outFields->push(HX_CSTRING("longPressTimer"));
	outFields->push(HX_CSTRING("listenEvents"));
	outFields->push(HX_CSTRING("touchList"));
	outFields->push(HX_CSTRING("touch1"));
	outFields->push(HX_CSTRING("touch0"));
	outFields->push(HX_CSTRING("owner"));
	outFields->push(HX_CSTRING("swipeTimeout"));
	outFields->push(HX_CSTRING("longPressDelay"));
	outFields->push(HX_CSTRING("mode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOUCH_POINT"),
	HX_CSTRING("GESTURE"),
	HX_CSTRING("GESTURE_CAPTURE"),
	HX_CSTRING("PAN_X"),
	HX_CSTRING("PAN_Y"),
	HX_CSTRING("PAN_XY"),
	HX_CSTRING("multitouchSupported"),
	HX_CSTRING("READY"),
	HX_CSTRING("BEGIN"),
	HX_CSTRING("TWO_FINGER_MOVE"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("R2D"),
	HX_CSTRING("SWIPE_SCROLL_TIME"),
	HX_CSTRING("SWIPE_SAMPLE_TIME"),
	HX_CSTRING("VELOCITY_RATIO"),
	HX_CSTRING("touchEvents"),
	HX_CSTRING("mouseEvents"),
	HX_CSTRING("geTouchEvents"),
	HX_CSTRING("geMouseEvents"),
	HX_CSTRING("initialized"),
	HX_CSTRING("moveToleSqr"),
	HX_CSTRING("init"),
	HX_CSTRING("localOffset"),
	HX_CSTRING("get_multitouchSupported"),
	HX_CSTRING("MAP"),
	HX_CSTRING("typeMap"),
	HX_CSTRING("initTypeMap"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cancelLongPress"),
	HX_CSTRING("setTwoFingerMove"),
	HX_CSTRING("setMove"),
	HX_CSTRING("setReady"),
	HX_CSTRING("sendLongPress"),
	HX_CSTRING("handleTouch"),
	HX_CSTRING("onMouse"),
	HX_CSTRING("onTouch"),
	HX_CSTRING("convertMouse"),
	HX_CSTRING("convertTouch"),
	HX_CSTRING("handleEvent"),
	HX_CSTRING("stopTween"),
	HX_CSTRING("startTween"),
	HX_CSTRING("getHandler"),
	HX_CSTRING("detach"),
	HX_CSTRING("state"),
	HX_CSTRING("overlay"),
	HX_CSTRING("tweener"),
	HX_CSTRING("longPressTimer"),
	HX_CSTRING("handler"),
	HX_CSTRING("listenEvents"),
	HX_CSTRING("touchList"),
	HX_CSTRING("touch1"),
	HX_CSTRING("touch0"),
	HX_CSTRING("owner"),
	HX_CSTRING("swipeTimeout"),
	HX_CSTRING("longPressDelay"),
	HX_CSTRING("mode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::TOUCH_POINT,"TOUCH_POINT");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::GESTURE,"GESTURE");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::GESTURE_CAPTURE,"GESTURE_CAPTURE");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::PAN_X,"PAN_X");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::PAN_Y,"PAN_Y");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::PAN_XY,"PAN_XY");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::multitouchSupported,"multitouchSupported");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::BEGIN,"BEGIN");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::TWO_FINGER_MOVE,"TWO_FINGER_MOVE");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::R2D,"R2D");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::SWIPE_SCROLL_TIME,"SWIPE_SCROLL_TIME");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::SWIPE_SAMPLE_TIME,"SWIPE_SAMPLE_TIME");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::VELOCITY_RATIO,"VELOCITY_RATIO");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::touchEvents,"touchEvents");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::mouseEvents,"mouseEvents");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::geTouchEvents,"geTouchEvents");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::geMouseEvents,"geMouseEvents");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::moveToleSqr,"moveToleSqr");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::MAP,"MAP");
	HX_MARK_MEMBER_NAME(RoxGestureAgent_obj::typeMap,"typeMap");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::TOUCH_POINT,"TOUCH_POINT");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::GESTURE,"GESTURE");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::GESTURE_CAPTURE,"GESTURE_CAPTURE");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::PAN_X,"PAN_X");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::PAN_Y,"PAN_Y");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::PAN_XY,"PAN_XY");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::multitouchSupported,"multitouchSupported");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::BEGIN,"BEGIN");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::TWO_FINGER_MOVE,"TWO_FINGER_MOVE");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::R2D,"R2D");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::SWIPE_SCROLL_TIME,"SWIPE_SCROLL_TIME");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::SWIPE_SAMPLE_TIME,"SWIPE_SAMPLE_TIME");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::VELOCITY_RATIO,"VELOCITY_RATIO");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::touchEvents,"touchEvents");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::mouseEvents,"mouseEvents");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::geTouchEvents,"geTouchEvents");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::geMouseEvents,"geMouseEvents");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::moveToleSqr,"moveToleSqr");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::MAP,"MAP");
	HX_VISIT_MEMBER_NAME(RoxGestureAgent_obj::typeMap,"typeMap");
};

Class RoxGestureAgent_obj::__mClass;

void RoxGestureAgent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("RoxGestureAgent"), hx::TCanCast< RoxGestureAgent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RoxGestureAgent_obj::__boot()
{
	TOUCH_POINT= (int)1;
	GESTURE= (int)2;
	GESTURE_CAPTURE= (int)3;
	PAN_X= (int)1;
	PAN_Y= (int)2;
	PAN_XY= (int)3;
	READY= (int)0;
	BEGIN= (int)1;
	TWO_FINGER_MOVE= (int)2;
	MOVE= (int)4;
	R2D= (Float((int)180) / Float(::Math_obj::PI));
	SWIPE_SCROLL_TIME= 2.0;
	SWIPE_SAMPLE_TIME= 0.2;
	VELOCITY_RATIO= 0.25;
	touchEvents= Array_obj< ::String >::__new().Add(::flash::events::TouchEvent_obj::TOUCH_BEGIN).Add(::flash::events::TouchEvent_obj::TOUCH_END).Add(::flash::events::TouchEvent_obj::TOUCH_MOVE).Add(::flash::events::TouchEvent_obj::TOUCH_OVER).Add(::flash::events::TouchEvent_obj::TOUCH_OUT).Add(::flash::events::TouchEvent_obj::TOUCH_ROLL_OVER).Add(::flash::events::TouchEvent_obj::TOUCH_ROLL_OUT).Add(::flash::events::TouchEvent_obj::TOUCH_TAP);
	mouseEvents= Array_obj< ::String >::__new().Add(::flash::events::MouseEvent_obj::MOUSE_DOWN).Add(::flash::events::MouseEvent_obj::MOUSE_UP).Add(::flash::events::MouseEvent_obj::MOUSE_MOVE).Add(::flash::events::MouseEvent_obj::MOUSE_OVER).Add(::flash::events::MouseEvent_obj::MOUSE_OUT).Add(::flash::events::MouseEvent_obj::ROLL_OVER).Add(::flash::events::MouseEvent_obj::ROLL_OUT).Add(::flash::events::MouseEvent_obj::CLICK);
	geTouchEvents= Array_obj< ::String >::__new().Add(::flash::events::TouchEvent_obj::TOUCH_BEGIN).Add(::flash::events::TouchEvent_obj::TOUCH_END).Add(::flash::events::TouchEvent_obj::TOUCH_MOVE).Add(::flash::events::TouchEvent_obj::TOUCH_OUT);
	geMouseEvents= Array_obj< ::String >::__new().Add(::flash::events::MouseEvent_obj::MOUSE_DOWN).Add(::flash::events::MouseEvent_obj::MOUSE_UP).Add(::flash::events::MouseEvent_obj::MOUSE_MOVE).Add(::flash::events::MouseEvent_obj::MOUSE_OUT);
	initialized= false;
	moveToleSqr= 1.0;
	MAP= Array_obj< ::String >::__new().Add(::flash::events::MouseEvent_obj::MOUSE_DOWN).Add(HX_CSTRING("rox_touch_begin")).Add(::flash::events::MouseEvent_obj::MOUSE_UP).Add(HX_CSTRING("rox_touch_end")).Add(::flash::events::MouseEvent_obj::MOUSE_MOVE).Add(HX_CSTRING("rox_touch_move")).Add(::flash::events::MouseEvent_obj::MOUSE_OVER).Add(HX_CSTRING("rox_touch_over")).Add(::flash::events::MouseEvent_obj::MOUSE_OUT).Add(HX_CSTRING("rox_touch_out")).Add(::flash::events::MouseEvent_obj::ROLL_OVER).Add(HX_CSTRING("rox_touch_roll_over")).Add(::flash::events::MouseEvent_obj::ROLL_OUT).Add(HX_CSTRING("rox_touch_roll_in")).Add(::flash::events::MouseEvent_obj::CLICK).Add(HX_CSTRING("rox_touch_tap")).Add(::flash::events::TouchEvent_obj::TOUCH_BEGIN).Add(HX_CSTRING("rox_touch_begin")).Add(::flash::events::TouchEvent_obj::TOUCH_END).Add(HX_CSTRING("rox_touch_end")).Add(::flash::events::TouchEvent_obj::TOUCH_MOVE).Add(HX_CSTRING("rox_touch_move")).Add(::flash::events::TouchEvent_obj::TOUCH_OVER).Add(HX_CSTRING("rox_touch_over")).Add(::flash::events::TouchEvent_obj::TOUCH_OUT).Add(HX_CSTRING("rox_touch_out")).Add(::flash::events::TouchEvent_obj::TOUCH_ROLL_OVER).Add(HX_CSTRING("rox_touch_roll_over")).Add(::flash::events::TouchEvent_obj::TOUCH_ROLL_OUT).Add(HX_CSTRING("rox_touch_roll_in")).Add(::flash::events::TouchEvent_obj::TOUCH_TAP).Add(HX_CSTRING("rox_touch_tap"));
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_PUSH("*::closure","RoxGestureAgent.hx",359);
		{
			HX_STACK_LINE(359)
			::haxe::ds::StringMap map = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(map,"map");
			HX_STACK_LINE(359)
			{
				HX_STACK_LINE(359)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = (int(::RoxGestureAgent_obj::MAP->length) >> int((int)1));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(359)
				while(((_g1 < _g))){
					HX_STACK_LINE(359)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(359)
					map->set(::RoxGestureAgent_obj::MAP->__get((int(i) << int((int)1))),::RoxGestureAgent_obj::MAP->__get((((int(i) << int((int)1))) + (int)1)));
				}
			}
			HX_STACK_LINE(359)
			return map;
		}
		return null();
	}
};
	typeMap= _Function_0_1::Block();
}

