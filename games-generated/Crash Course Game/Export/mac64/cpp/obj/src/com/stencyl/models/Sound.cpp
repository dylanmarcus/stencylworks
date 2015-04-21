#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
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
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Sound_obj::__construct(int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext)
{
HX_STACK_PUSH("Sound::new","com/stencyl/models/Sound.hx",28);
{
	HX_STACK_LINE(29)
	super::__construct(ID,name,(int)-1);
	HX_STACK_LINE(31)
	this->streaming = streaming;
	HX_STACK_LINE(32)
	this->looping = looping;
	HX_STACK_LINE(33)
	this->panning = panning;
	HX_STACK_LINE(34)
	this->volume = volume;
	HX_STACK_LINE(35)
	this->ext = ext;
	HX_STACK_LINE(38)
	this->ext = HX_CSTRING("ogg");
	HX_STACK_LINE(43)
	this->loadGraphics();
}
;
	return null();
}

Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(ID,name,streaming,looping,panning,volume,ext);
	return result;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Sound_obj::stopInstances( ){
{
		HX_STACK_PUSH("Sound::stopInstances","com/stencyl/models/Sound.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(102)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		while(((_g1 < _g))){
			HX_STACK_LINE(102)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(104)
			::com::stencyl::models::SoundChannel sc = ::com::stencyl::Engine_obj::engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(106)
			if (((sc->currentSource == this->src))){
				HX_STACK_LINE(107)
				sc->stopSound();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,stopInstances,(void))

::flash::media::SoundChannel Sound_obj::loop( hx::Null< int >  __o_channelNum,hx::Null< Float >  __o_position){
int channelNum = __o_channelNum.Default(1);
Float position = __o_position.Default(0);
	HX_STACK_PUSH("Sound::loop","com/stencyl/models/Sound.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(channelNum,"channelNum");
	HX_STACK_ARG(position,"position");
{
		HX_STACK_LINE(86)
		if ((this->streaming)){
			HX_STACK_LINE(87)
			this->src = ::openfl::Assets_obj::getSound((((HX_CSTRING("assets/music/sound-") + this->ID) + HX_CSTRING(".")) + this->ext));
		}
		HX_STACK_LINE(91)
		if (((this->src == null()))){
			HX_STACK_LINE(93)
			::haxe::Log_obj::trace((((HX_CSTRING("Trying to play uninitialized sound: ") + this->name) + HX_CSTRING(" - ")) + this->ID),hx::SourceInfo(HX_CSTRING("Sound.hx"),93,HX_CSTRING("com.stencyl.models.Sound"),HX_CSTRING("loop")));
			HX_STACK_LINE(94)
			return null();
		}
		HX_STACK_LINE(97)
		return this->src->play(position,::com::stencyl::utils::Utils_obj::INTEGER_MAX,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,loop,return )

::flash::media::SoundChannel Sound_obj::play( hx::Null< int >  __o_channelNum,hx::Null< Float >  __o_position){
int channelNum = __o_channelNum.Default(1);
Float position = __o_position.Default(0);
	HX_STACK_PUSH("Sound::play","com/stencyl/models/Sound.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(channelNum,"channelNum");
	HX_STACK_ARG(position,"position");
{
		HX_STACK_LINE(70)
		if ((this->streaming)){
			HX_STACK_LINE(71)
			this->src = ::openfl::Assets_obj::getSound((((HX_CSTRING("assets/music/sound-") + this->ID) + HX_CSTRING(".")) + this->ext));
		}
		HX_STACK_LINE(75)
		if (((this->src == null()))){
			HX_STACK_LINE(77)
			::haxe::Log_obj::trace((((HX_CSTRING("Trying to play uninitialized sound: ") + this->name) + HX_CSTRING(" - ")) + this->ID),hx::SourceInfo(HX_CSTRING("Sound.hx"),77,HX_CSTRING("com.stencyl.models.Sound"),HX_CSTRING("play")));
			HX_STACK_LINE(78)
			return null();
		}
		HX_STACK_LINE(81)
		return this->src->play(position,null(),null());
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,play,return )

Void Sound_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Sound::unloadGraphics","com/stencyl/models/Sound.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		if ((!(this->streaming))){
			HX_STACK_LINE(58)
			if (((this->src != null()))){
				HX_STACK_LINE(60)
				this->stopInstances();
				HX_STACK_LINE(61)
				this->src->close();
			}
			HX_STACK_LINE(64)
			this->src = null();
		}
	}
return null();
}


Void Sound_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Sound::loadGraphics","com/stencyl/models/Sound.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(47)
		if ((!(this->streaming))){
			HX_STACK_LINE(49)
			this->src = ::openfl::Assets_obj::getSound((((HX_CSTRING("assets/sfx/sound-") + this->ID) + HX_CSTRING(".")) + this->ext));
		}
	}
return null();
}



Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(panning,"panning");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(streaming,"streaming");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(panning,"panning");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(streaming,"streaming");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"panning") ) { return panning; }
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"streaming") ) { return streaming; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stopInstances") ) { return stopInstances_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"panning") ) { panning=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"streaming") ) { streaming=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("ext"));
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("panning"));
	outFields->push(HX_CSTRING("looping"));
	outFields->push(HX_CSTRING("streaming"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stopInstances"),
	HX_CSTRING("loop"),
	HX_CSTRING("play"),
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("src"),
	HX_CSTRING("ext"),
	HX_CSTRING("volume"),
	HX_CSTRING("panning"),
	HX_CSTRING("looping"),
	HX_CSTRING("streaming"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sound_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
