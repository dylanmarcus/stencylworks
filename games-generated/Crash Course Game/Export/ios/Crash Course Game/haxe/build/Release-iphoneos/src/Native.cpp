#include <hxcpp.h>

#ifndef INCLUDED_Native
#include <Native.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif

Void Native_obj::__construct()
{
	return null();
}

Native_obj::~Native_obj() { }

Dynamic Native_obj::__CreateEmpty() { return  new Native_obj; }
hx::ObjectPtr< Native_obj > Native_obj::__new()
{  hx::ObjectPtr< Native_obj > result = new Native_obj();
	result->__construct();
	return result;}

Dynamic Native_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Native_obj > result = new Native_obj();
	result->__construct();
	return result;}

::String Native_obj::osName( ){
	HX_STACK_PUSH("Native::osName","Native.hx",29);
	HX_STACK_LINE(29)
	return ::Native_obj::native_device_os();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,osName,return )

::String Native_obj::osVersion( ){
	HX_STACK_PUSH("Native::osVersion","Native.hx",40);
	HX_STACK_LINE(40)
	return ::Native_obj::native_device_vervion();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,osVersion,return )

::String Native_obj::deviceName( ){
	HX_STACK_PUSH("Native::deviceName","Native.hx",51);
	HX_STACK_LINE(51)
	return ::Native_obj::native_device_name();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,deviceName,return )

::String Native_obj::model( ){
	HX_STACK_PUSH("Native::model","Native.hx",62);
	HX_STACK_LINE(62)
	return ::Native_obj::native_device_model();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,model,return )

bool Native_obj::networkAvailable( ){
	HX_STACK_PUSH("Native::networkAvailable","Native.hx",73);
	HX_STACK_LINE(73)
	return ::Native_obj::native_device_network_available();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,networkAvailable,return )

Void Native_obj::vibrate( Float time){
{
		HX_STACK_PUSH("Native::vibrate","Native.hx",84);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(84)
		::Native_obj::native_device_vibrate(time);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Native_obj,vibrate,(void))

Void Native_obj::showKeyboard( ){
{
		HX_STACK_PUSH("Native::showKeyboard","Native.hx",101);
		HX_STACK_LINE(103)
		::Native_obj::initKeyboard();
		HX_STACK_LINE(104)
		::Native_obj::native_device_show_keyboard();
		HX_STACK_LINE(105)
		::com::stencyl::Engine_obj::events->addKeyboardEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::KEYBOARD_SHOW,HX_CSTRING("")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,showKeyboard,(void))

Void Native_obj::hideKeyboard( ){
{
		HX_STACK_PUSH("Native::hideKeyboard","Native.hx",120);
		HX_STACK_LINE(122)
		::Native_obj::initKeyboard();
		HX_STACK_LINE(123)
		::Native_obj::native_device_hide_keyboard();
		HX_STACK_LINE(124)
		::com::stencyl::Engine_obj::events->addKeyboardEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::KEYBOARD_HIDE,HX_CSTRING("")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,hideKeyboard,(void))

Void Native_obj::setKeyboardText( ::String text){
{
		HX_STACK_PUSH("Native::setKeyboardText","Native.hx",139);
		HX_STACK_ARG(text,"text");
		HX_STACK_LINE(139)
		::Native_obj::native_setKeyboardText(text);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Native_obj,setKeyboardText,(void))

Void Native_obj::initKeyboard( ){
{
		HX_STACK_PUSH("Native::initKeyboard","Native.hx",150);
		HX_STACK_LINE(150)
		if ((!(::Native_obj::keyboardInitialized))){
			HX_STACK_LINE(154)
			::Native_obj::keyboard_set_event_handle(::Native_obj::notifyListeners_dyn());
			HX_STACK_LINE(155)
			::Native_obj::keyboardInitialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,initKeyboard,(void))

Void Native_obj::notifyListeners( Dynamic inEvent){
{
		HX_STACK_PUSH("Native::notifyListeners","Native.hx",161);
		HX_STACK_ARG(inEvent,"inEvent");
		HX_STACK_LINE(170)
		::String data = ::Reflect_obj::field(inEvent,HX_CSTRING("data"));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(171)
		::haxe::Log_obj::trace((HX_CSTRING("Text: ") + data),hx::SourceInfo(HX_CSTRING("Native.hx"),171,HX_CSTRING("Native"),HX_CSTRING("notifyListeners")));
		HX_STACK_LINE(173)
		if (((data == HX_CSTRING("@SUBMIT@")))){
			HX_STACK_LINE(175)
			data = ::Reflect_obj::field(inEvent,HX_CSTRING("data2"));
			HX_STACK_LINE(176)
			::com::stencyl::Engine_obj::events->addKeyboardEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::KEYBOARD_DONE,data));
		}
		else{
			HX_STACK_LINE(180)
			::com::stencyl::Engine_obj::events->addKeyboardEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::KEYBOARD_EVENT,data));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Native_obj,notifyListeners,(void))

Void Native_obj::setIconBadgeNumber( int n){
{
		HX_STACK_PUSH("Native::setIconBadgeNumber","Native.hx",189);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(189)
		::Native_obj::native_device_badge(n);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Native_obj,setIconBadgeNumber,(void))

::String Native_obj::alertTitle;

::String Native_obj::alertMSG;

Void Native_obj::showAlert( ::String title,::String message){
{
		HX_STACK_PUSH("Native::showAlert","Native.hx",201);
		HX_STACK_ARG(title,"title");
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(202)
		::Native_obj::alertTitle = title;
		HX_STACK_LINE(203)
		::Native_obj::alertMSG = message;
		HX_STACK_LINE(204)
		::haxe::Timer_obj::delay(::Native_obj::delayAlert_dyn(),(int)30);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Native_obj,showAlert,(void))

Void Native_obj::delayAlert( ){
{
		HX_STACK_PUSH("Native::delayAlert","Native.hx",208);
		HX_STACK_LINE(208)
		::Native_obj::native_system_ui_show_alert(::Native_obj::alertTitle,::Native_obj::alertMSG);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,delayAlert,(void))

Void Native_obj::showLoadingScreen( ){
{
		HX_STACK_PUSH("Native::showLoadingScreen","Native.hx",226);
		HX_STACK_LINE(226)
		::Native_obj::native_system_ui_show_system_loading_view();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,showLoadingScreen,(void))

Void Native_obj::hideLoadingScreen( ){
{
		HX_STACK_PUSH("Native::hideLoadingScreen","Native.hx",233);
		HX_STACK_LINE(233)
		::Native_obj::native_system_ui_hide_system_loading_view();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Native_obj,hideLoadingScreen,(void))

bool Native_obj::keyboardInitialized;

Dynamic Native_obj::keyboard_set_event_handle;

Dynamic Native_obj::native_device_os;

Dynamic Native_obj::native_device_vervion;

Dynamic Native_obj::native_device_name;

Dynamic Native_obj::native_device_model;

Dynamic Native_obj::native_device_network_available;

Dynamic Native_obj::native_device_vibrate;

Dynamic Native_obj::native_device_badge;

Dynamic Native_obj::native_device_show_keyboard;

Dynamic Native_obj::native_device_hide_keyboard;

Dynamic Native_obj::native_setKeyboardText;

Dynamic Native_obj::native_system_ui_show_alert;

Dynamic Native_obj::native_system_ui_show_system_loading_view;

Dynamic Native_obj::native_system_ui_hide_system_loading_view;


Native_obj::Native_obj()
{
}

void Native_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Native);
	HX_MARK_END_CLASS();
}

void Native_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Native_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"osName") ) { return osName_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vibrate") ) { return vibrate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alertMSG") ) { return alertMSG; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"osVersion") ) { return osVersion_dyn(); }
		if (HX_FIELD_EQ(inName,"showAlert") ) { return showAlert_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceName") ) { return deviceName_dyn(); }
		if (HX_FIELD_EQ(inName,"alertTitle") ) { return alertTitle; }
		if (HX_FIELD_EQ(inName,"delayAlert") ) { return delayAlert_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showKeyboard") ) { return showKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"hideKeyboard") ) { return hideKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"initKeyboard") ) { return initKeyboard_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setKeyboardText") ) { return setKeyboardText_dyn(); }
		if (HX_FIELD_EQ(inName,"notifyListeners") ) { return notifyListeners_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"networkAvailable") ) { return networkAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"native_device_os") ) { return native_device_os; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"showLoadingScreen") ) { return showLoadingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"hideLoadingScreen") ) { return hideLoadingScreen_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setIconBadgeNumber") ) { return setIconBadgeNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"native_device_name") ) { return native_device_name; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"keyboardInitialized") ) { return keyboardInitialized; }
		if (HX_FIELD_EQ(inName,"native_device_model") ) { return native_device_model; }
		if (HX_FIELD_EQ(inName,"native_device_badge") ) { return native_device_badge; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"native_device_vervion") ) { return native_device_vervion; }
		if (HX_FIELD_EQ(inName,"native_device_vibrate") ) { return native_device_vibrate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"native_setKeyboardText") ) { return native_setKeyboardText; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"keyboard_set_event_handle") ) { return keyboard_set_event_handle; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"native_device_show_keyboard") ) { return native_device_show_keyboard; }
		if (HX_FIELD_EQ(inName,"native_device_hide_keyboard") ) { return native_device_hide_keyboard; }
		if (HX_FIELD_EQ(inName,"native_system_ui_show_alert") ) { return native_system_ui_show_alert; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"native_device_network_available") ) { return native_device_network_available; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"native_system_ui_show_system_loading_view") ) { return native_system_ui_show_system_loading_view; }
		if (HX_FIELD_EQ(inName,"native_system_ui_hide_system_loading_view") ) { return native_system_ui_hide_system_loading_view; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Native_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"alertMSG") ) { alertMSG=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alertTitle") ) { alertTitle=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"native_device_os") ) { native_device_os=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"native_device_name") ) { native_device_name=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"keyboardInitialized") ) { keyboardInitialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native_device_model") ) { native_device_model=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native_device_badge") ) { native_device_badge=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"native_device_vervion") ) { native_device_vervion=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native_device_vibrate") ) { native_device_vibrate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"native_setKeyboardText") ) { native_setKeyboardText=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"keyboard_set_event_handle") ) { keyboard_set_event_handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"native_device_show_keyboard") ) { native_device_show_keyboard=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native_device_hide_keyboard") ) { native_device_hide_keyboard=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native_system_ui_show_alert") ) { native_system_ui_show_alert=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"native_device_network_available") ) { native_device_network_available=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"native_system_ui_show_system_loading_view") ) { native_system_ui_show_system_loading_view=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native_system_ui_hide_system_loading_view") ) { native_system_ui_hide_system_loading_view=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Native_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("osName"),
	HX_CSTRING("osVersion"),
	HX_CSTRING("deviceName"),
	HX_CSTRING("model"),
	HX_CSTRING("networkAvailable"),
	HX_CSTRING("vibrate"),
	HX_CSTRING("showKeyboard"),
	HX_CSTRING("hideKeyboard"),
	HX_CSTRING("setKeyboardText"),
	HX_CSTRING("initKeyboard"),
	HX_CSTRING("notifyListeners"),
	HX_CSTRING("setIconBadgeNumber"),
	HX_CSTRING("alertTitle"),
	HX_CSTRING("alertMSG"),
	HX_CSTRING("showAlert"),
	HX_CSTRING("delayAlert"),
	HX_CSTRING("showLoadingScreen"),
	HX_CSTRING("hideLoadingScreen"),
	HX_CSTRING("keyboardInitialized"),
	HX_CSTRING("keyboard_set_event_handle"),
	HX_CSTRING("native_device_os"),
	HX_CSTRING("native_device_vervion"),
	HX_CSTRING("native_device_name"),
	HX_CSTRING("native_device_model"),
	HX_CSTRING("native_device_network_available"),
	HX_CSTRING("native_device_vibrate"),
	HX_CSTRING("native_device_badge"),
	HX_CSTRING("native_device_show_keyboard"),
	HX_CSTRING("native_device_hide_keyboard"),
	HX_CSTRING("native_setKeyboardText"),
	HX_CSTRING("native_system_ui_show_alert"),
	HX_CSTRING("native_system_ui_show_system_loading_view"),
	HX_CSTRING("native_system_ui_hide_system_loading_view"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Native_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Native_obj::alertTitle,"alertTitle");
	HX_MARK_MEMBER_NAME(Native_obj::alertMSG,"alertMSG");
	HX_MARK_MEMBER_NAME(Native_obj::keyboardInitialized,"keyboardInitialized");
	HX_MARK_MEMBER_NAME(Native_obj::keyboard_set_event_handle,"keyboard_set_event_handle");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_os,"native_device_os");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_vervion,"native_device_vervion");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_name,"native_device_name");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_model,"native_device_model");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_network_available,"native_device_network_available");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_vibrate,"native_device_vibrate");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_badge,"native_device_badge");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_show_keyboard,"native_device_show_keyboard");
	HX_MARK_MEMBER_NAME(Native_obj::native_device_hide_keyboard,"native_device_hide_keyboard");
	HX_MARK_MEMBER_NAME(Native_obj::native_setKeyboardText,"native_setKeyboardText");
	HX_MARK_MEMBER_NAME(Native_obj::native_system_ui_show_alert,"native_system_ui_show_alert");
	HX_MARK_MEMBER_NAME(Native_obj::native_system_ui_show_system_loading_view,"native_system_ui_show_system_loading_view");
	HX_MARK_MEMBER_NAME(Native_obj::native_system_ui_hide_system_loading_view,"native_system_ui_hide_system_loading_view");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Native_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Native_obj::alertTitle,"alertTitle");
	HX_VISIT_MEMBER_NAME(Native_obj::alertMSG,"alertMSG");
	HX_VISIT_MEMBER_NAME(Native_obj::keyboardInitialized,"keyboardInitialized");
	HX_VISIT_MEMBER_NAME(Native_obj::keyboard_set_event_handle,"keyboard_set_event_handle");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_os,"native_device_os");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_vervion,"native_device_vervion");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_name,"native_device_name");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_model,"native_device_model");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_network_available,"native_device_network_available");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_vibrate,"native_device_vibrate");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_badge,"native_device_badge");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_show_keyboard,"native_device_show_keyboard");
	HX_VISIT_MEMBER_NAME(Native_obj::native_device_hide_keyboard,"native_device_hide_keyboard");
	HX_VISIT_MEMBER_NAME(Native_obj::native_setKeyboardText,"native_setKeyboardText");
	HX_VISIT_MEMBER_NAME(Native_obj::native_system_ui_show_alert,"native_system_ui_show_alert");
	HX_VISIT_MEMBER_NAME(Native_obj::native_system_ui_show_system_loading_view,"native_system_ui_show_system_loading_view");
	HX_VISIT_MEMBER_NAME(Native_obj::native_system_ui_hide_system_loading_view,"native_system_ui_hide_system_loading_view");
};

Class Native_obj::__mClass;

void Native_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Native"), hx::TCanCast< Native_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Native_obj::__boot()
{
	keyboardInitialized= false;
	keyboard_set_event_handle= ::nme::Loader_obj::load(HX_CSTRING("keyboard_set_event_handle"),(int)1);
	native_device_os= ::nme::Loader_obj::load(HX_CSTRING("native_device_os"),(int)0);
	native_device_vervion= ::nme::Loader_obj::load(HX_CSTRING("native_device_vervion"),(int)0);
	native_device_name= ::nme::Loader_obj::load(HX_CSTRING("native_device_name"),(int)0);
	native_device_model= ::nme::Loader_obj::load(HX_CSTRING("native_device_model"),(int)0);
	native_device_network_available= ::nme::Loader_obj::load(HX_CSTRING("native_device_network_available"),(int)0);
	native_device_vibrate= ::nme::Loader_obj::load(HX_CSTRING("native_device_vibrate"),(int)1);
	native_device_badge= ::nme::Loader_obj::load(HX_CSTRING("native_device_badge"),(int)1);
	native_device_show_keyboard= ::nme::Loader_obj::load(HX_CSTRING("native_device_show_keyboard"),(int)0);
	native_device_hide_keyboard= ::nme::Loader_obj::load(HX_CSTRING("native_device_hide_keyboard"),(int)0);
	native_setKeyboardText= ::nme::Loader_obj::load(HX_CSTRING("native_setKeyboardText"),(int)1);
	native_system_ui_show_alert= ::nme::Loader_obj::load(HX_CSTRING("native_system_ui_show_alert"),(int)2);
	native_system_ui_show_system_loading_view= ::nme::Loader_obj::load(HX_CSTRING("native_system_ui_show_system_loading_view"),(int)0);
	native_system_ui_hide_system_loading_view= ::nme::Loader_obj::load(HX_CSTRING("native_system_ui_hide_system_loading_view"),(int)0);
}

