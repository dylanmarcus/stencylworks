#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace actuators{

Void SimpleActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_PUSH("SimpleActuator::new","motion/actuators/SimpleActuator.hx",49);
{
	HX_STACK_LINE(51)
	this->active = true;
	HX_STACK_LINE(52)
	this->propertyDetails = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(53)
	this->sendChange = false;
	HX_STACK_LINE(54)
	this->paused = false;
	HX_STACK_LINE(55)
	this->cacheVisible = false;
	HX_STACK_LINE(56)
	this->initialized = false;
	HX_STACK_LINE(57)
	this->setVisible = false;
	HX_STACK_LINE(58)
	this->toggleVisible = false;
	HX_STACK_LINE(61)
	this->startTime = (Float(::flash::Lib_obj::getTimer()) / Float((int)1000));
	HX_STACK_LINE(66)
	super::__construct(target,duration,properties);
	HX_STACK_LINE(68)
	if ((!(::motion::actuators::SimpleActuator_obj::addedEvent))){
		HX_STACK_LINE(70)
		::motion::actuators::SimpleActuator_obj::addedEvent = true;
		HX_STACK_LINE(73)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,::motion::actuators::SimpleActuator_obj::stage_onEnterFrame_dyn(),null(),null(),null());
	}
}
;
	return null();
}

SimpleActuator_obj::~SimpleActuator_obj() { }

Dynamic SimpleActuator_obj::__CreateEmpty() { return  new SimpleActuator_obj; }
hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< SimpleActuator_obj > result = new SimpleActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic SimpleActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleActuator_obj > result = new SimpleActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SimpleActuator_obj::update( Float currentTime){
{
		HX_STACK_PUSH("SimpleActuator::update","motion/actuators/SimpleActuator.hx",357);
		HX_STACK_THIS(this);
		HX_STACK_ARG(currentTime,"currentTime");
		HX_STACK_LINE(357)
		if ((!(this->paused))){
			HX_STACK_LINE(361)
			::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(362)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(363)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(365)
			Float tweenPosition = (Float(((currentTime - this->timeOffset))) / Float(this->duration));		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(367)
			if (((tweenPosition > (int)1))){
				HX_STACK_LINE(367)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(373)
			if ((!(this->initialized))){
				HX_STACK_LINE(373)
				this->initialize();
			}
			HX_STACK_LINE(379)
			if ((!(this->special))){
				HX_STACK_LINE(381)
				easing = this->_ease->calculate(tweenPosition);
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->detailsLength;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(383)
					while(((_g1 < _g))){
						HX_STACK_LINE(383)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(385)
						details = this->propertyDetails->__get(i1).StaticCast< ::motion::actuators::PropertyDetails >();
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							Dynamic value = (details->start + (details->change * easing));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(386)
							if ((details->isField)){
								HX_STACK_LINE(386)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(386)
								if (((o != null()))){
									HX_STACK_LINE(386)
									o->__SetField(details->propertyName,value,false);
								}
							}
							else{
								HX_STACK_LINE(386)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(386)
								if (((o != null()))){
									HX_STACK_LINE(386)
									o->__SetField(details->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(392)
				if ((!(this->_reverse))){
					HX_STACK_LINE(392)
					easing = this->_ease->calculate(tweenPosition);
				}
				else{
					HX_STACK_LINE(396)
					easing = this->_ease->calculate(((int)1 - tweenPosition));
				}
				HX_STACK_LINE(402)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->detailsLength;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(404)
					while(((_g1 < _g))){
						HX_STACK_LINE(404)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(406)
						details = this->propertyDetails->__get(i1).StaticCast< ::motion::actuators::PropertyDetails >();
						HX_STACK_LINE(408)
						if (((bool(this->_smartRotation) && bool(((bool((bool((bool((details->propertyName == HX_CSTRING("rotation"))) || bool((details->propertyName == HX_CSTRING("rotationX"))))) || bool((details->propertyName == HX_CSTRING("rotationY"))))) || bool((details->propertyName == HX_CSTRING("rotationZ"))))))))){
							HX_STACK_LINE(410)
							Float rotation = hx::Mod(details->change,(int)360);		HX_STACK_VAR(rotation,"rotation");
							HX_STACK_LINE(412)
							if (((rotation > (int)180))){
								HX_STACK_LINE(412)
								hx::SubEq(rotation,(int)360);
							}
							else{
								HX_STACK_LINE(416)
								if (((rotation < (int)-180))){
									HX_STACK_LINE(416)
									hx::AddEq(rotation,(int)360);
								}
							}
							HX_STACK_LINE(422)
							endValue = (details->start + (rotation * easing));
						}
						else{
							HX_STACK_LINE(424)
							endValue = (details->start + (details->change * easing));
						}
						HX_STACK_LINE(430)
						if ((!(this->_snapping))){
							HX_STACK_LINE(430)
							if ((details->isField)){
								HX_STACK_LINE(432)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(432)
								if (((o != null()))){
									HX_STACK_LINE(432)
									o->__SetField(details->propertyName,endValue,false);
								}
							}
							else{
								HX_STACK_LINE(432)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(432)
								if (((o != null()))){
									HX_STACK_LINE(432)
									o->__SetField(details->propertyName,endValue,true);
								}
							}
						}
						else{
							HX_STACK_LINE(436)
							Dynamic value = ::Math_obj::round(endValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(436)
							if ((details->isField)){
								HX_STACK_LINE(436)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(436)
								if (((o != null()))){
									HX_STACK_LINE(436)
									o->__SetField(details->propertyName,value,false);
								}
							}
							else{
								HX_STACK_LINE(436)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(436)
								if (((o != null()))){
									HX_STACK_LINE(436)
									o->__SetField(details->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(444)
			if (((tweenPosition == (int)1))){
				HX_STACK_LINE(444)
				if (((this->_repeat == (int)0))){
					HX_STACK_LINE(448)
					this->active = false;
					struct _Function_4_1{
						inline static Dynamic Block( ::motion::actuators::SimpleActuator_obj *__this){
							HX_STACK_PUSH("*::closure","motion/actuators/SimpleActuator.hx",450);
							{
								HX_STACK_LINE(450)
								Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
								HX_STACK_LINE(450)
								Dynamic value = null();		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(450)
								if ((::Reflect_obj::hasField(target,HX_CSTRING("alpha")))){
									HX_STACK_LINE(450)
									value = ::Reflect_obj::field(target,HX_CSTRING("alpha"));
								}
								else{
									HX_STACK_LINE(450)
									value = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("alpha"),true)) );
								}
								HX_STACK_LINE(450)
								return value;
							}
							return null();
						}
					};
					HX_STACK_LINE(450)
					if (((bool(this->toggleVisible) && bool((_Function_4_1::Block(this) == (int)0))))){
						HX_STACK_LINE(452)
						Dynamic target = this->target;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(452)
						if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
							HX_STACK_LINE(452)
							if (((target != null()))){
								HX_STACK_LINE(452)
								target->__SetField(HX_CSTRING("visible"),false,false);
							}
						}
						else{
							HX_STACK_LINE(452)
							if (((target != null()))){
								HX_STACK_LINE(452)
								target->__SetField(HX_CSTRING("visible"),false,true);
							}
						}
					}
					HX_STACK_LINE(456)
					this->complete(true);
					HX_STACK_LINE(457)
					return null();
				}
				else{
					HX_STACK_LINE(461)
					if (((this->_onRepeat != null()))){
						HX_STACK_LINE(461)
						::Reflect_obj::callMethod(this->_onRepeat,this->_onRepeat,this->_onRepeatParams);
					}
					HX_STACK_LINE(476)
					if ((this->_reflect)){
						HX_STACK_LINE(476)
						this->_reverse = !(this->_reverse);
					}
					HX_STACK_LINE(482)
					this->startTime = currentTime;
					HX_STACK_LINE(483)
					this->timeOffset = (this->startTime + this->_delay);
					HX_STACK_LINE(485)
					if (((this->_repeat > (int)0))){
						HX_STACK_LINE(485)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(495)
			if ((this->sendChange)){
				HX_STACK_LINE(495)
				this->change();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,update,(void))

Void SimpleActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_PUSH("SimpleActuator::stop","motion/actuators/SimpleActuator.hx",314);
		HX_STACK_THIS(this);
		HX_STACK_ARG(properties,"properties");
		HX_STACK_ARG(complete,"complete");
		HX_STACK_ARG(sendEvent,"sendEvent");
		HX_STACK_LINE(314)
		if ((this->active)){
			HX_STACK_LINE(318)
			if (((properties == null()))){
				HX_STACK_LINE(320)
				this->active = false;
				HX_STACK_LINE(322)
				if ((complete)){
					HX_STACK_LINE(322)
					this->apply();
				}
				HX_STACK_LINE(328)
				this->complete(sendEvent);
				HX_STACK_LINE(329)
				return null();
			}
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::String > _g1 = ::Reflect_obj::fields(properties);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(333)
				while(((_g < _g1->length))){
					HX_STACK_LINE(333)
					::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(333)
					++(_g);
					HX_STACK_LINE(335)
					if ((::Reflect_obj::hasField(this->properties,i))){
						HX_STACK_LINE(337)
						this->active = false;
						HX_STACK_LINE(339)
						if ((complete)){
							HX_STACK_LINE(339)
							this->apply();
						}
						HX_STACK_LINE(345)
						this->complete(sendEvent);
						HX_STACK_LINE(346)
						return null();
					}
				}
			}
		}
	}
return null();
}


Void SimpleActuator_obj::setProperty( ::motion::actuators::PropertyDetails details,Dynamic value){
{
		HX_STACK_PUSH("SimpleActuator::setProperty","motion/actuators/SimpleActuator.hx",289);
		HX_STACK_THIS(this);
		HX_STACK_ARG(details,"details");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(289)
		if ((details->isField)){
			HX_STACK_LINE(299)
			Dynamic o = details->target;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(299)
			if (((o != null()))){
				HX_STACK_LINE(299)
				o->__SetField(details->propertyName,value,false);
			}
		}
		else{
			HX_STACK_LINE(304)
			Dynamic o = details->target;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(304)
			if (((o != null()))){
				HX_STACK_LINE(304)
				o->__SetField(details->propertyName,value,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,setProperty,(void))

Void SimpleActuator_obj::setField( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_PUSH("SimpleActuator::setField","motion/actuators/SimpleActuator.hx",264);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(propertyName,"propertyName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(264)
		if ((::Reflect_obj::hasField(target,propertyName))){
			HX_STACK_LINE(272)
			if (((target != null()))){
				HX_STACK_LINE(274)
				target->__SetField(propertyName,value,false);
			}
		}
		else{
			HX_STACK_LINE(276)
			if (((target != null()))){
				HX_STACK_LINE(279)
				target->__SetField(propertyName,value,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField,(void))

Void SimpleActuator_obj::resume( ){
{
		HX_STACK_PUSH("SimpleActuator::resume","motion/actuators/SimpleActuator.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_LINE(247)
		if ((this->paused)){
			HX_STACK_LINE(251)
			this->paused = false;
			HX_STACK_LINE(254)
			hx::AddEq(this->timeOffset,(Float(((::flash::Lib_obj::getTimer() - this->pauseTime))) / Float((int)1000)));
		}
	}
return null();
}


Void SimpleActuator_obj::pause( ){
{
		HX_STACK_PUSH("SimpleActuator::pause","motion/actuators/SimpleActuator.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(236)
		this->paused = true;
		HX_STACK_LINE(239)
		this->pauseTime = ::flash::Lib_obj::getTimer();
	}
return null();
}


::motion::actuators::IGenericActuator SimpleActuator_obj::onUpdate( Dynamic handler,Dynamic parameters){
	HX_STACK_PUSH("SimpleActuator::onUpdate","motion/actuators/SimpleActuator.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(handler,"handler");
	HX_STACK_ARG(parameters,"parameters");
	HX_STACK_LINE(225)
	this->_onUpdate = handler;
	HX_STACK_LINE(226)
	this->_onUpdateParams = parameters;
	HX_STACK_LINE(227)
	this->sendChange = true;
	HX_STACK_LINE(229)
	return hx::ObjectPtr<OBJ_>(this);
}


Void SimpleActuator_obj::move( ){
{
		HX_STACK_PUSH("SimpleActuator::move","motion/actuators/SimpleActuator.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_LINE(200)
		this->toggleVisible = (bool(::Reflect_obj::hasField(this->properties,HX_CSTRING("alpha"))) && bool(::Std_obj::is(this->target,hx::ClassOf< ::flash::display::DisplayObject >())));
		struct _Function_1_1{
			inline static Dynamic Block( ::motion::actuators::SimpleActuator_obj *__this){
				HX_STACK_PUSH("*::closure","motion/actuators/SimpleActuator.hx",205);
				{
					HX_STACK_LINE(205)
					Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(205)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(205)
					if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
						HX_STACK_LINE(205)
						value = ::Reflect_obj::field(target,HX_CSTRING("visible"));
					}
					else{
						HX_STACK_LINE(205)
						value = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("visible"),true)) );
					}
					HX_STACK_LINE(205)
					return value;
				}
				return null();
			}
		};
		HX_STACK_LINE(205)
		if (((bool((bool(this->toggleVisible) && bool((this->properties->__Field(HX_CSTRING("alpha"),true) != (int)0)))) && bool(!(_Function_1_1::Block(this)))))){
			HX_STACK_LINE(207)
			this->setVisible = true;
			struct _Function_2_1{
				inline static Dynamic Block( ::motion::actuators::SimpleActuator_obj *__this){
					HX_STACK_PUSH("*::closure","motion/actuators/SimpleActuator.hx",208);
					{
						HX_STACK_LINE(208)
						Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(208)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(208)
						if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
							HX_STACK_LINE(208)
							value = ::Reflect_obj::field(target,HX_CSTRING("visible"));
						}
						else{
							HX_STACK_LINE(208)
							value = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("visible"),true)) );
						}
						HX_STACK_LINE(208)
						return value;
					}
					return null();
				}
			};
			HX_STACK_LINE(208)
			this->cacheVisible = _Function_2_1::Block(this);
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(209)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
					HX_STACK_LINE(209)
					if (((target != null()))){
						HX_STACK_LINE(209)
						target->__SetField(HX_CSTRING("visible"),true,false);
					}
				}
				else{
					HX_STACK_LINE(209)
					if (((target != null()))){
						HX_STACK_LINE(209)
						target->__SetField(HX_CSTRING("visible"),true,true);
					}
				}
			}
		}
		HX_STACK_LINE(213)
		this->timeOffset = this->startTime;
		HX_STACK_LINE(214)
		::motion::actuators::SimpleActuator_obj::actuators->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(215)
		++(::motion::actuators::SimpleActuator_obj::actuatorsLength);
	}
return null();
}


Void SimpleActuator_obj::initialize( ){
{
		HX_STACK_PUSH("SimpleActuator::initialize","motion/actuators/SimpleActuator.hx",158);
		HX_STACK_THIS(this);
		HX_STACK_LINE(160)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(161)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(163)
			while(((_g < _g1->length))){
				HX_STACK_LINE(163)
				::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(163)
				++(_g);
				HX_STACK_LINE(165)
				bool isField = true;		HX_STACK_VAR(isField,"isField");
				HX_STACK_LINE(169)
				if ((::Reflect_obj::hasField(this->target,i))){
					HX_STACK_LINE(169)
					start = ::Reflect_obj::field(this->target,i);
				}
				else{
					HX_STACK_LINE(175)
					isField = false;
					struct _Function_4_1{
						inline static Dynamic Block( ::String &i,::motion::actuators::SimpleActuator_obj *__this){
							HX_STACK_PUSH("*::closure","motion/actuators/SimpleActuator.hx",176);
							{
								HX_STACK_LINE(176)
								Dynamic o = __this->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(176)
								return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(i,true)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(176)
					start = _Function_4_1::Block(i,this);
				}
				HX_STACK_LINE(186)
				details = ::motion::actuators::PropertyDetails_obj::__new(this->target,i,start,(::Reflect_obj::field(this->properties,i) - start),isField);
				HX_STACK_LINE(187)
				this->propertyDetails->push(details);
			}
		}
		HX_STACK_LINE(191)
		this->detailsLength = this->propertyDetails->length;
		HX_STACK_LINE(192)
		this->initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleActuator_obj,initialize,(void))

Dynamic SimpleActuator_obj::getField( Dynamic target,::String propertyName){
	HX_STACK_PUSH("SimpleActuator::getField","motion/actuators/SimpleActuator.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(propertyName,"propertyName");
	HX_STACK_LINE(135)
	Dynamic value = null();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(137)
	if ((::Reflect_obj::hasField(target,propertyName))){
		HX_STACK_LINE(137)
		value = ::Reflect_obj::field(target,propertyName);
	}
	else{
		HX_STACK_LINE(141)
		value = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(propertyName,true)) );
	}
	HX_STACK_LINE(147)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,getField,return )

::motion::actuators::IGenericActuator SimpleActuator_obj::delay( Float duration){
	HX_STACK_PUSH("SimpleActuator::delay","motion/actuators/SimpleActuator.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(119)
	this->_delay = duration;
	HX_STACK_LINE(120)
	this->timeOffset = (this->startTime + duration);
	HX_STACK_LINE(122)
	return hx::ObjectPtr<OBJ_>(this);
}


::motion::actuators::IGenericActuator SimpleActuator_obj::autoVisible( Dynamic value){
	HX_STACK_PUSH("SimpleActuator::autoVisible","motion/actuators/SimpleActuator.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(89)
	if (((value == null()))){
		HX_STACK_LINE(89)
		value = true;
	}
	HX_STACK_LINE(95)
	this->_autoVisible = value;
	HX_STACK_LINE(97)
	if ((!(value))){
		HX_STACK_LINE(99)
		this->toggleVisible = false;
		HX_STACK_LINE(101)
		if ((this->setVisible)){
			HX_STACK_LINE(103)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			Dynamic value1 = this->cacheVisible;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(103)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
				HX_STACK_LINE(103)
				if (((target != null()))){
					HX_STACK_LINE(103)
					target->__SetField(HX_CSTRING("visible"),value1,false);
				}
			}
			else{
				HX_STACK_LINE(103)
				if (((target != null()))){
					HX_STACK_LINE(103)
					target->__SetField(HX_CSTRING("visible"),value1,true);
				}
			}
		}
	}
	HX_STACK_LINE(109)
	return hx::ObjectPtr<OBJ_>(this);
}


Array< ::Dynamic > SimpleActuator_obj::actuators;

int SimpleActuator_obj::actuatorsLength;

bool SimpleActuator_obj::addedEvent;

Void SimpleActuator_obj::stage_onEnterFrame( ::flash::events::Event event){
{
		HX_STACK_PUSH("SimpleActuator::stage_onEnterFrame","motion/actuators/SimpleActuator.hx",513);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(516)
		Float currentTime = (Float(::flash::Lib_obj::getTimer()) / Float((int)1000));		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(521)
		::motion::actuators::SimpleActuator actuator;		HX_STACK_VAR(actuator,"actuator");
		HX_STACK_LINE(523)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(524)
		bool cleanup = false;		HX_STACK_VAR(cleanup,"cleanup");
		HX_STACK_LINE(526)
		{
			HX_STACK_LINE(526)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::motion::actuators::SimpleActuator_obj::actuatorsLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(526)
			while(((_g1 < _g))){
				HX_STACK_LINE(526)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(528)
				actuator = ::motion::actuators::SimpleActuator_obj::actuators->__get(j).StaticCast< ::motion::actuators::SimpleActuator >();
				HX_STACK_LINE(530)
				if ((actuator->active)){
					HX_STACK_LINE(532)
					if (((currentTime > actuator->timeOffset))){
						HX_STACK_LINE(532)
						actuator->update(currentTime);
					}
					HX_STACK_LINE(538)
					(j)++;
				}
				else{
					HX_STACK_LINE(542)
					::motion::actuators::SimpleActuator_obj::actuators->splice(j,(int)1);
					HX_STACK_LINE(543)
					--(::motion::actuators::SimpleActuator_obj::actuatorsLength);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,stage_onEnterFrame,(void))


SimpleActuator_obj::SimpleActuator_obj()
{
}

void SimpleActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleActuator);
	HX_MARK_MEMBER_NAME(toggleVisible,"toggleVisible");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(setVisible,"setVisible");
	HX_MARK_MEMBER_NAME(sendChange,"sendChange");
	HX_MARK_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(detailsLength,"detailsLength");
	HX_MARK_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toggleVisible,"toggleVisible");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(setVisible,"setVisible");
	HX_VISIT_MEMBER_NAME(sendChange,"sendChange");
	HX_VISIT_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(detailsLength,"detailsLength");
	HX_VISIT_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setField") ) { return setField_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"getField") ) { return getField_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { return actuators; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { return addedEvent; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { return sendChange; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return timeOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { return cacheVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible; }
		if (HX_FIELD_EQ(inName,"detailsLength") ) { return detailsLength; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { return actuatorsLength; }
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { return propertyDetails; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stage_onEnterFrame") ) { return stage_onEnterFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { actuators=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { addedEvent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { setVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { sendChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { cacheVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { toggleVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"detailsLength") ) { detailsLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { actuatorsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { propertyDetails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("toggleVisible"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("setVisible"));
	outFields->push(HX_CSTRING("sendChange"));
	outFields->push(HX_CSTRING("propertyDetails"));
	outFields->push(HX_CSTRING("pauseTime"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("detailsLength"));
	outFields->push(HX_CSTRING("cacheVisible"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("timeOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("actuators"),
	HX_CSTRING("actuatorsLength"),
	HX_CSTRING("addedEvent"),
	HX_CSTRING("stage_onEnterFrame"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("stop"),
	HX_CSTRING("setProperty"),
	HX_CSTRING("setField"),
	HX_CSTRING("resume"),
	HX_CSTRING("pause"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("move"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getField"),
	HX_CSTRING("delay"),
	HX_CSTRING("autoVisible"),
	HX_CSTRING("toggleVisible"),
	HX_CSTRING("startTime"),
	HX_CSTRING("setVisible"),
	HX_CSTRING("sendChange"),
	HX_CSTRING("propertyDetails"),
	HX_CSTRING("pauseTime"),
	HX_CSTRING("paused"),
	HX_CSTRING("initialized"),
	HX_CSTRING("detailsLength"),
	HX_CSTRING("cacheVisible"),
	HX_CSTRING("active"),
	HX_CSTRING("timeOffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

Class SimpleActuator_obj::__mClass;

void SimpleActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.actuators.SimpleActuator"), hx::TCanCast< SimpleActuator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SimpleActuator_obj::__boot()
{
	actuators= Array_obj< ::Dynamic >::__new();
	actuatorsLength= (int)0;
	addedEvent= false;
}

} // end namespace motion
} // end namespace actuators
