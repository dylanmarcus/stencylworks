#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_SoundChannel
#include <com/stencyl/models/SoundChannel.h>
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
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void SoundChannel_obj::__construct(::com::stencyl::Engine engine,int channelNum)
{
HX_STACK_PUSH("SoundChannel::new","com/stencyl/models/SoundChannel.hx",28);
{
	HX_STACK_LINE(29)
	this->currentSound = null();
	HX_STACK_LINE(30)
	this->currentClip = null();
	HX_STACK_LINE(32)
	this->looping = false;
	HX_STACK_LINE(33)
	this->volume = (int)1;
	HX_STACK_LINE(34)
	this->position = (int)0;
	HX_STACK_LINE(36)
	this->channelNum = channelNum;
	HX_STACK_LINE(37)
	this->engine = engine;
	HX_STACK_LINE(39)
	this->transform = ::flash::media::SoundTransform_obj::__new(null(),null());
}
;
	return null();
}

SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(::com::stencyl::Engine engine,int channelNum)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(engine,channelNum);
	return result;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SoundChannel_obj::setVolume( Float volume){
{
		HX_STACK_PUSH("SoundChannel::setVolume","com/stencyl/models/SoundChannel.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_ARG(volume,"volume");
		HX_STACK_LINE(205)
		this->volume = volume;
		HX_STACK_LINE(207)
		if (((this->currentSound != null()))){
			HX_STACK_LINE(209)
			this->transform->volume = (volume * ::com::stencyl::models::SoundChannel_obj::masterVolume);
			HX_STACK_LINE(210)
			this->currentSound->set_soundTransform(this->transform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,setVolume,(void))

Void SoundChannel_obj::onUpdate( ){
{
		HX_STACK_PUSH("SoundChannel::onUpdate","com/stencyl/models/SoundChannel.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(196)
		if (((this->currentSound != null()))){
			HX_STACK_LINE(198)
			this->currentSound->set_soundTransform(this->transform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,onUpdate,(void))

Void SoundChannel_obj::fadeOutSound( Float time){
{
		HX_STACK_PUSH("SoundChannel::fadeOutSound","com/stencyl/models/SoundChannel.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(188)
		if (((this->currentSound != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","com/stencyl/models/SoundChannel.hx",191);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("volume") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(190)
			::motion::Actuate_obj::tween(this->transform,time,_Function_2_1::Block(),null(),null())->onUpdate(this->onUpdate_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,fadeOutSound,(void))

Void SoundChannel_obj::fadeInSound( Float time){
{
		HX_STACK_PUSH("SoundChannel::fadeInSound","com/stencyl/models/SoundChannel.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(180)
		if (((this->currentSound != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","com/stencyl/models/SoundChannel.hx",183);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("volume") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(182)
			::motion::Actuate_obj::tween(this->transform,time,_Function_2_1::Block(),null(),null())->onUpdate(this->onUpdate_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,fadeInSound,(void))

Void SoundChannel_obj::stopSound( ){
{
		HX_STACK_PUSH("SoundChannel::stopSound","com/stencyl/models/SoundChannel.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		if (((this->currentSound != null()))){
			HX_STACK_LINE(170)
			this->currentSound->stop();
			HX_STACK_LINE(174)
			this->position = (int)0;
			HX_STACK_LINE(175)
			this->currentSource = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stopSound,(void))

Void SoundChannel_obj::stopped( ::flash::events::Event event){
{
		HX_STACK_PUSH("SoundChannel::stopped","com/stencyl/models/SoundChannel.hx",153);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(156)
		if (((this->currentSound != null()))){
			HX_STACK_LINE(157)
			this->currentSound->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null());
		}
		HX_STACK_LINE(161)
		::com::stencyl::Engine_obj::engine->soundFinished(this->channelNum);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,stopped,(void))

Void SoundChannel_obj::looped( ::flash::events::Event event){
{
		HX_STACK_PUSH("SoundChannel::looped","com/stencyl/models/SoundChannel.hx",143);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(144)
		if (((this->currentSound != null()))){
			HX_STACK_LINE(145)
			this->currentSound->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->looped_dyn(),null());
		}
		HX_STACK_LINE(149)
		this->loopSound(this->currentClip);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,looped,(void))

Void SoundChannel_obj::setPause( bool pause){
{
		HX_STACK_PUSH("SoundChannel::setPause","com/stencyl/models/SoundChannel.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pause,"pause");
		HX_STACK_LINE(115)
		if (((this->currentSound != null()))){
			HX_STACK_LINE(117)
			if ((pause)){
				HX_STACK_LINE(120)
				this->currentSound->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->looped_dyn(),null());
				HX_STACK_LINE(122)
				this->position = this->currentSound->get_position();
				HX_STACK_LINE(123)
				this->currentSound->stop();
			}
			else{
				HX_STACK_LINE(127)
				if (((this->currentSource != null()))){
					HX_STACK_LINE(130)
					this->currentSound = this->currentClip->play(this->channelNum,this->position);
					HX_STACK_LINE(131)
					this->currentSound->set_soundTransform(this->transform);
					HX_STACK_LINE(133)
					if ((this->looping)){
						HX_STACK_LINE(134)
						this->currentSound->addEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->looped_dyn(),null(),null(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,setPause,(void))

::flash::media::SoundChannel SoundChannel_obj::loopSound( ::com::stencyl::models::Sound clip){
	HX_STACK_PUSH("SoundChannel::loopSound","com/stencyl/models/SoundChannel.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clip,"clip");
	HX_STACK_LINE(80)
	if (((this->currentSound != null()))){
		HX_STACK_LINE(81)
		this->currentSound->stop();
	}
	HX_STACK_LINE(85)
	if (((clip != null()))){
		HX_STACK_LINE(87)
		clip->volume = (this->volume * ::com::stencyl::models::SoundChannel_obj::masterVolume);
		HX_STACK_LINE(88)
		this->currentClip = clip;
		HX_STACK_LINE(89)
		this->currentSound = clip->loop(this->channelNum,null());
		HX_STACK_LINE(91)
		if (((this->currentSound == null()))){
			HX_STACK_LINE(93)
			this->currentClip = null();
			HX_STACK_LINE(94)
			return null();
		}
		HX_STACK_LINE(97)
		this->setVolume(this->volume);
		HX_STACK_LINE(99)
		this->currentSound->addEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(102)
	this->position = (int)0;
	HX_STACK_LINE(104)
	if (((clip != null()))){
		HX_STACK_LINE(105)
		this->currentSource = clip->src;
	}
	HX_STACK_LINE(109)
	this->looping = true;
	HX_STACK_LINE(111)
	return this->currentSound;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,loopSound,return )

::flash::media::SoundChannel SoundChannel_obj::playSound( ::com::stencyl::models::Sound clip){
	HX_STACK_PUSH("SoundChannel::playSound","com/stencyl/models/SoundChannel.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clip,"clip");
	HX_STACK_LINE(44)
	if (((this->currentSound != null()))){
		HX_STACK_LINE(45)
		this->currentSound->stop();
	}
	HX_STACK_LINE(49)
	if (((clip != null()))){
		HX_STACK_LINE(51)
		clip->volume = (this->volume * ::com::stencyl::models::SoundChannel_obj::masterVolume);
		HX_STACK_LINE(52)
		this->currentClip = clip;
		HX_STACK_LINE(53)
		this->currentSound = clip->play(this->channelNum,null());
		HX_STACK_LINE(55)
		if (((this->currentSound == null()))){
			HX_STACK_LINE(57)
			this->currentClip = null();
			HX_STACK_LINE(58)
			return null();
		}
		HX_STACK_LINE(61)
		this->setVolume(this->volume);
		HX_STACK_LINE(63)
		this->currentSound->addEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(66)
	this->position = (int)0;
	HX_STACK_LINE(68)
	if (((clip != null()))){
		HX_STACK_LINE(69)
		this->currentSource = clip->src;
	}
	HX_STACK_LINE(73)
	this->looping = false;
	HX_STACK_LINE(75)
	return this->currentSound;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,playSound,return )

bool SoundChannel_obj::muted;

Float SoundChannel_obj::masterVolume;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(channelNum,"channelNum");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(currentClip,"currentClip");
	HX_MARK_MEMBER_NAME(currentSound,"currentSound");
	HX_MARK_MEMBER_NAME(currentSource,"currentSource");
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(channelNum,"channelNum");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(currentClip,"currentClip");
	HX_VISIT_MEMBER_NAME(currentSound,"currentSound");
	HX_VISIT_MEMBER_NAME(currentSource,"currentSource");
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"looped") ) { return looped_dyn(); }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped_dyn(); }
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"setPause") ) { return setPause_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"stopSound") ) { return stopSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loopSound") ) { return loopSound_dyn(); }
		if (HX_FIELD_EQ(inName,"playSound") ) { return playSound_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"channelNum") ) { return channelNum; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fadeInSound") ) { return fadeInSound_dyn(); }
		if (HX_FIELD_EQ(inName,"currentClip") ) { return currentClip; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"masterVolume") ) { return masterVolume; }
		if (HX_FIELD_EQ(inName,"fadeOutSound") ) { return fadeOutSound_dyn(); }
		if (HX_FIELD_EQ(inName,"currentSound") ) { return currentSound; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSource") ) { return currentSource; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"channelNum") ) { channelNum=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentClip") ) { currentClip=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"masterVolume") ) { masterVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSound") ) { currentSound=inValue.Cast< ::flash::media::SoundChannel >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSource") ) { currentSource=inValue.Cast< ::flash::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("engine"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("looping"));
	outFields->push(HX_CSTRING("channelNum"));
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("currentClip"));
	outFields->push(HX_CSTRING("currentSound"));
	outFields->push(HX_CSTRING("currentSource"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("muted"),
	HX_CSTRING("masterVolume"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setVolume"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("fadeOutSound"),
	HX_CSTRING("fadeInSound"),
	HX_CSTRING("stopSound"),
	HX_CSTRING("stopped"),
	HX_CSTRING("looped"),
	HX_CSTRING("setPause"),
	HX_CSTRING("loopSound"),
	HX_CSTRING("playSound"),
	HX_CSTRING("transform"),
	HX_CSTRING("engine"),
	HX_CSTRING("position"),
	HX_CSTRING("looping"),
	HX_CSTRING("channelNum"),
	HX_CSTRING("volume"),
	HX_CSTRING("currentClip"),
	HX_CSTRING("currentSound"),
	HX_CSTRING("currentSource"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::muted,"muted");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::masterVolume,"masterVolume");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::muted,"muted");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::masterVolume,"masterVolume");
};

Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.SoundChannel"), hx::TCanCast< SoundChannel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundChannel_obj::__boot()
{
	muted= false;
	masterVolume= (int)1;
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
