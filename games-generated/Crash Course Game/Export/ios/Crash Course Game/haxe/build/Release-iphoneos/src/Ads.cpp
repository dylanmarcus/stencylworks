#include <hxcpp.h>

#ifndef INCLUDED_Ads
#include <Ads.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_StencylEvent
#include <com/stencyl/event/StencylEvent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif

Void Ads_obj::__construct()
{
	return null();
}

Ads_obj::~Ads_obj() { }

Dynamic Ads_obj::__CreateEmpty() { return  new Ads_obj; }
hx::ObjectPtr< Ads_obj > Ads_obj::__new()
{  hx::ObjectPtr< Ads_obj > result = new Ads_obj();
	result->__construct();
	return result;}

Dynamic Ads_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ads_obj > result = new Ads_obj();
	result->__construct();
	return result;}

bool Ads_obj::initialized;

::String Ads_obj::adwhirlCode;

::String Ads_obj::ANDROID_CLASS;

Dynamic Ads_obj::_init_func;

Dynamic Ads_obj::_show_func;

Dynamic Ads_obj::_hide_func;

Void Ads_obj::notifyListeners( Dynamic inEvent){
{
		HX_STACK_PUSH("Ads::notifyListeners","Ads.hx",38);
		HX_STACK_ARG(inEvent,"inEvent");
		HX_STACK_LINE(40)
		::String data = ::Std_obj::string(::Reflect_obj::field(inEvent,HX_CSTRING("type")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(42)
		if (((data == HX_CSTRING("open")))){
			HX_STACK_LINE(44)
			::haxe::Log_obj::trace(HX_CSTRING("USER OPENED IT"),hx::SourceInfo(HX_CSTRING("Ads.hx"),44,HX_CSTRING("Ads"),HX_CSTRING("notifyListeners")));
			HX_STACK_LINE(45)
			::com::stencyl::Engine_obj::events->addAdEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::AD_USER_OPEN,null()));
		}
		HX_STACK_LINE(48)
		if (((data == HX_CSTRING("close")))){
			HX_STACK_LINE(50)
			::haxe::Log_obj::trace(HX_CSTRING("USER CLOSED IT"),hx::SourceInfo(HX_CSTRING("Ads.hx"),50,HX_CSTRING("Ads"),HX_CSTRING("notifyListeners")));
			HX_STACK_LINE(51)
			::com::stencyl::Engine_obj::events->addAdEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::AD_USER_CLOSE,null()));
		}
		HX_STACK_LINE(54)
		if (((data == HX_CSTRING("load")))){
			HX_STACK_LINE(56)
			::haxe::Log_obj::trace(HX_CSTRING("IT SHOWED UP"),hx::SourceInfo(HX_CSTRING("Ads.hx"),56,HX_CSTRING("Ads"),HX_CSTRING("notifyListeners")));
			HX_STACK_LINE(57)
			::com::stencyl::Engine_obj::events->addAdEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::AD_LOADED,null()));
		}
		HX_STACK_LINE(60)
		if (((data == HX_CSTRING("fail")))){
			HX_STACK_LINE(62)
			::haxe::Log_obj::trace(HX_CSTRING("IT FAILED TO LOAD"),hx::SourceInfo(HX_CSTRING("Ads.hx"),62,HX_CSTRING("Ads"),HX_CSTRING("notifyListeners")));
			HX_STACK_LINE(63)
			::com::stencyl::Engine_obj::events->addAdEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::AD_FAILED,null()));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ads_obj,notifyListeners,(void))

Void Ads_obj::initialize( ::String __o_apiCode,hx::Null< int >  __o_position){
::String apiCode = __o_apiCode.Default(HX_CSTRING("none"));
int position = __o_position.Default(0);
	HX_STACK_PUSH("Ads::initialize","Ads.hx",69);
	HX_STACK_ARG(apiCode,"apiCode");
	HX_STACK_ARG(position,"position");
{
		HX_STACK_LINE(70)
		if (((bool((apiCode == HX_CSTRING("none"))) || bool((apiCode == HX_CSTRING("")))))){
			HX_STACK_LINE(71)
			return null();
		}
		HX_STACK_LINE(76)
		if ((!(::Ads_obj::initialized))){
			HX_STACK_LINE(78)
			::Ads_obj::set_event_handle(::Ads_obj::notifyListeners_dyn());
			HX_STACK_LINE(79)
			::Ads_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ads_obj,initialize,(void))

Void Ads_obj::showAd( hx::Null< bool >  __o_onBottom){
bool onBottom = __o_onBottom.Default(true);
	HX_STACK_PUSH("Ads::showAd","Ads.hx",104);
	HX_STACK_ARG(onBottom,"onBottom");
{
		HX_STACK_LINE(104)
		::Ads_obj::ads_showad((  ((onBottom)) ? int((int)0) : int((int)1) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ads_obj,showAd,(void))

Void Ads_obj::hideAd( ){
{
		HX_STACK_PUSH("Ads::hideAd","Ads.hx",126);
		HX_STACK_LINE(126)
		::Ads_obj::ads_hidead();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ads_obj,hideAd,(void))

Dynamic Ads_obj::set_event_handle;

Dynamic Ads_obj::ads_showad;

Dynamic Ads_obj::ads_hidead;


Ads_obj::Ads_obj()
{
}

void Ads_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ads);
	HX_MARK_END_CLASS();
}

void Ads_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Ads_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"showAd") ) { return showAd_dyn(); }
		if (HX_FIELD_EQ(inName,"hideAd") ) { return hideAd_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_init_func") ) { return _init_func; }
		if (HX_FIELD_EQ(inName,"_show_func") ) { return _show_func; }
		if (HX_FIELD_EQ(inName,"_hide_func") ) { return _hide_func; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"ads_showad") ) { return ads_showad; }
		if (HX_FIELD_EQ(inName,"ads_hidead") ) { return ads_hidead; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"adwhirlCode") ) { return adwhirlCode; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyListeners") ) { return notifyListeners_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_event_handle") ) { return set_event_handle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ads_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_init_func") ) { _init_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_show_func") ) { _show_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hide_func") ) { _hide_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ads_showad") ) { ads_showad=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ads_hidead") ) { ads_hidead=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adwhirlCode") ) { adwhirlCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_event_handle") ) { set_event_handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ads_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("initialized"),
	HX_CSTRING("adwhirlCode"),
	HX_CSTRING("ANDROID_CLASS"),
	HX_CSTRING("_init_func"),
	HX_CSTRING("_show_func"),
	HX_CSTRING("_hide_func"),
	HX_CSTRING("notifyListeners"),
	HX_CSTRING("initialize"),
	HX_CSTRING("showAd"),
	HX_CSTRING("hideAd"),
	HX_CSTRING("set_event_handle"),
	HX_CSTRING("ads_showad"),
	HX_CSTRING("ads_hidead"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ads_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ads_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Ads_obj::adwhirlCode,"adwhirlCode");
	HX_MARK_MEMBER_NAME(Ads_obj::ANDROID_CLASS,"ANDROID_CLASS");
	HX_MARK_MEMBER_NAME(Ads_obj::_init_func,"_init_func");
	HX_MARK_MEMBER_NAME(Ads_obj::_show_func,"_show_func");
	HX_MARK_MEMBER_NAME(Ads_obj::_hide_func,"_hide_func");
	HX_MARK_MEMBER_NAME(Ads_obj::set_event_handle,"set_event_handle");
	HX_MARK_MEMBER_NAME(Ads_obj::ads_showad,"ads_showad");
	HX_MARK_MEMBER_NAME(Ads_obj::ads_hidead,"ads_hidead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ads_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ads_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Ads_obj::adwhirlCode,"adwhirlCode");
	HX_VISIT_MEMBER_NAME(Ads_obj::ANDROID_CLASS,"ANDROID_CLASS");
	HX_VISIT_MEMBER_NAME(Ads_obj::_init_func,"_init_func");
	HX_VISIT_MEMBER_NAME(Ads_obj::_show_func,"_show_func");
	HX_VISIT_MEMBER_NAME(Ads_obj::_hide_func,"_hide_func");
	HX_VISIT_MEMBER_NAME(Ads_obj::set_event_handle,"set_event_handle");
	HX_VISIT_MEMBER_NAME(Ads_obj::ads_showad,"ads_showad");
	HX_VISIT_MEMBER_NAME(Ads_obj::ads_hidead,"ads_hidead");
};

Class Ads_obj::__mClass;

void Ads_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ads"), hx::TCanCast< Ads_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ads_obj::__boot()
{
	initialized= false;
	adwhirlCode= HX_CSTRING("none");
	ANDROID_CLASS= HX_CSTRING("AdWhirl");
	set_event_handle= ::nme::Loader_obj::load(HX_CSTRING("ads_set_event_handle"),(int)1);
	ads_showad= ::nme::Loader_obj::load(HX_CSTRING("ads_showad"),(int)1);
	ads_hidead= ::nme::Loader_obj::load(HX_CSTRING("ads_hidead"),(int)0);
}

