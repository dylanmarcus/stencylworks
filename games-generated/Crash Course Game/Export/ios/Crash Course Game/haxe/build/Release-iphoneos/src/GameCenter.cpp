#include <hxcpp.h>

#ifndef INCLUDED_GameCenter
#include <GameCenter.h>
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
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif

Void GameCenter_obj::__construct()
{
	return null();
}

GameCenter_obj::~GameCenter_obj() { }

Dynamic GameCenter_obj::__CreateEmpty() { return  new GameCenter_obj; }
hx::ObjectPtr< GameCenter_obj > GameCenter_obj::__new()
{  hx::ObjectPtr< GameCenter_obj > result = new GameCenter_obj();
	result->__construct();
	return result;}

Dynamic GameCenter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameCenter_obj > result = new GameCenter_obj();
	result->__construct();
	return result;}

bool GameCenter_obj::initialized;

::String GameCenter_obj::ANDROID_CLASS;

Dynamic GameCenter_obj::_init_func;

Void GameCenter_obj::notifyListeners( Dynamic inEvent){
{
		HX_STACK_PUSH("GameCenter::notifyListeners","GameCenter.hx",32);
		HX_STACK_ARG(inEvent,"inEvent");
		HX_STACK_LINE(34)
		::String type = ::Std_obj::string(::Reflect_obj::field(inEvent,HX_CSTRING("type")));		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(35)
		::String data = ::Std_obj::string(::Reflect_obj::field(inEvent,HX_CSTRING("data")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(37)
		if (((type == HX_CSTRING("auth-success")))){
			HX_STACK_LINE(39)
			::haxe::Log_obj::trace(HX_CSTRING("Game Center: Authenticated"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),39,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
			HX_STACK_LINE(40)
			::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_READY,null()));
		}
		else{
			HX_STACK_LINE(43)
			if (((type == HX_CSTRING("auth-failed")))){
				HX_STACK_LINE(45)
				::haxe::Log_obj::trace(HX_CSTRING("Game Center: Failed to Authenticate"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),45,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
				HX_STACK_LINE(46)
				::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_READY_FAIL,data));
			}
			else{
				HX_STACK_LINE(49)
				if (((type == HX_CSTRING("score-success")))){
					HX_STACK_LINE(51)
					::haxe::Log_obj::trace(HX_CSTRING("Game Center: Submitted Score"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),51,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
					HX_STACK_LINE(52)
					::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_SCORE,data));
				}
				else{
					HX_STACK_LINE(55)
					if (((type == HX_CSTRING("score-failed")))){
						HX_STACK_LINE(57)
						::haxe::Log_obj::trace(HX_CSTRING("Game Center: Failed to Submit Score"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),57,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
						HX_STACK_LINE(58)
						::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_SCORE_FAIL,data));
					}
					else{
						HX_STACK_LINE(61)
						if (((type == HX_CSTRING("achieve-success")))){
							HX_STACK_LINE(63)
							::haxe::Log_obj::trace(HX_CSTRING("Game Center: Submitted Achievement"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),63,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
							HX_STACK_LINE(64)
							::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_ACHIEVEMENT,data));
						}
						else{
							HX_STACK_LINE(67)
							if (((type == HX_CSTRING("achieve-failed")))){
								HX_STACK_LINE(69)
								::haxe::Log_obj::trace(HX_CSTRING("Game Center: Failed to Submit Achievement"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),69,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
								HX_STACK_LINE(70)
								::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_FAIL,data));
							}
							else{
								HX_STACK_LINE(73)
								if (((type == HX_CSTRING("achieve-reset-success")))){
									HX_STACK_LINE(75)
									::haxe::Log_obj::trace(HX_CSTRING("Game Center: Reset Achievements"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),75,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
									HX_STACK_LINE(76)
									::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET,data));
								}
								else{
									HX_STACK_LINE(79)
									if (((type == HX_CSTRING("achieve-reset-failed")))){
										HX_STACK_LINE(81)
										::haxe::Log_obj::trace(HX_CSTRING("Game Center: Failed to Reset Achievements"),hx::SourceInfo(HX_CSTRING("GameCenter.hx"),81,HX_CSTRING("GameCenter"),HX_CSTRING("notifyListeners")));
										HX_STACK_LINE(82)
										::com::stencyl::Engine_obj::events->addGameCenterEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET_FAIL,data));
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameCenter_obj,notifyListeners,(void))

Void GameCenter_obj::initialize( ){
{
		HX_STACK_PUSH("GameCenter::initialize","GameCenter.hx",88);
		HX_STACK_LINE(88)
		if ((!(::GameCenter_obj::initialized))){
			HX_STACK_LINE(104)
			::GameCenter_obj::set_event_handle(::GameCenter_obj::notifyListeners_dyn());
			HX_STACK_LINE(105)
			::GameCenter_obj::gamecenter_initialize();
			HX_STACK_LINE(106)
			::GameCenter_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,initialize,(void))

Void GameCenter_obj::authenticate( ){
{
		HX_STACK_PUSH("GameCenter::authenticate","GameCenter.hx",112);
		HX_STACK_LINE(112)
		::GameCenter_obj::gamecenter_authenticate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,authenticate,(void))

bool GameCenter_obj::isAvailable( ){
	HX_STACK_PUSH("GameCenter::isAvailable","GameCenter.hx",119);
	HX_STACK_LINE(119)
	return ::GameCenter_obj::gamecenter_isavailable();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,isAvailable,return )

bool GameCenter_obj::isAuthenticated( ){
	HX_STACK_PUSH("GameCenter::isAuthenticated","GameCenter.hx",128);
	HX_STACK_LINE(128)
	return ::GameCenter_obj::gamecenter_isauthenticated();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,isAuthenticated,return )

::String GameCenter_obj::getPlayerName( ){
	HX_STACK_PUSH("GameCenter::getPlayerName","GameCenter.hx",137);
	HX_STACK_LINE(137)
	return ::GameCenter_obj::gamecenter_playername();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,getPlayerName,return )

::String GameCenter_obj::getPlayerID( ){
	HX_STACK_PUSH("GameCenter::getPlayerID","GameCenter.hx",146);
	HX_STACK_LINE(146)
	return ::GameCenter_obj::gamecenter_playerid();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,getPlayerID,return )

Void GameCenter_obj::showLeaderboard( ::String categoryID){
{
		HX_STACK_PUSH("GameCenter::showLeaderboard","GameCenter.hx",155);
		HX_STACK_ARG(categoryID,"categoryID");
		HX_STACK_LINE(155)
		::GameCenter_obj::gamecenter_showleaderboard(categoryID);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameCenter_obj,showLeaderboard,(void))

Void GameCenter_obj::showAchievements( ){
{
		HX_STACK_PUSH("GameCenter::showAchievements","GameCenter.hx",162);
		HX_STACK_LINE(162)
		::GameCenter_obj::gamecenter_showachievements();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,showAchievements,(void))

Void GameCenter_obj::reportScore( ::String categoryID,int score){
{
		HX_STACK_PUSH("GameCenter::reportScore","GameCenter.hx",169);
		HX_STACK_ARG(categoryID,"categoryID");
		HX_STACK_ARG(score,"score");
		HX_STACK_LINE(169)
		::GameCenter_obj::gamecenter_reportscore(categoryID,score);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameCenter_obj,reportScore,(void))

Void GameCenter_obj::reportAchievement( ::String achievementID,Float percent){
{
		HX_STACK_PUSH("GameCenter::reportAchievement","GameCenter.hx",176);
		HX_STACK_ARG(achievementID,"achievementID");
		HX_STACK_ARG(percent,"percent");
		HX_STACK_LINE(176)
		::GameCenter_obj::gamecenter_reportachievement(achievementID,percent);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameCenter_obj,reportAchievement,(void))

Void GameCenter_obj::resetAchievements( ){
{
		HX_STACK_PUSH("GameCenter::resetAchievements","GameCenter.hx",183);
		HX_STACK_LINE(183)
		::GameCenter_obj::gamecenter_resetachievements();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameCenter_obj,resetAchievements,(void))

Dynamic GameCenter_obj::set_event_handle;

Dynamic GameCenter_obj::gamecenter_initialize;

Dynamic GameCenter_obj::gamecenter_authenticate;

Dynamic GameCenter_obj::gamecenter_isavailable;

Dynamic GameCenter_obj::gamecenter_isauthenticated;

Dynamic GameCenter_obj::gamecenter_playername;

Dynamic GameCenter_obj::gamecenter_playerid;

Dynamic GameCenter_obj::gamecenter_showleaderboard;

Dynamic GameCenter_obj::gamecenter_showachievements;

Dynamic GameCenter_obj::gamecenter_reportscore;

Dynamic GameCenter_obj::gamecenter_reportachievement;

Dynamic GameCenter_obj::gamecenter_resetachievements;


GameCenter_obj::GameCenter_obj()
{
}

void GameCenter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameCenter);
	HX_MARK_END_CLASS();
}

void GameCenter_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic GameCenter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_init_func") ) { return _init_func; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"isAvailable") ) { return isAvailable_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayerID") ) { return getPlayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"reportScore") ) { return reportScore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"authenticate") ) { return authenticate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getPlayerName") ) { return getPlayerName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyListeners") ) { return notifyListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"isAuthenticated") ) { return isAuthenticated_dyn(); }
		if (HX_FIELD_EQ(inName,"showLeaderboard") ) { return showLeaderboard_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"showAchievements") ) { return showAchievements_dyn(); }
		if (HX_FIELD_EQ(inName,"set_event_handle") ) { return set_event_handle; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reportAchievement") ) { return reportAchievement_dyn(); }
		if (HX_FIELD_EQ(inName,"resetAchievements") ) { return resetAchievements_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"gamecenter_playerid") ) { return gamecenter_playerid; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"gamecenter_initialize") ) { return gamecenter_initialize; }
		if (HX_FIELD_EQ(inName,"gamecenter_playername") ) { return gamecenter_playername; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamecenter_isavailable") ) { return gamecenter_isavailable; }
		if (HX_FIELD_EQ(inName,"gamecenter_reportscore") ) { return gamecenter_reportscore; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamecenter_authenticate") ) { return gamecenter_authenticate; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"gamecenter_isauthenticated") ) { return gamecenter_isauthenticated; }
		if (HX_FIELD_EQ(inName,"gamecenter_showleaderboard") ) { return gamecenter_showleaderboard; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"gamecenter_showachievements") ) { return gamecenter_showachievements; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"gamecenter_reportachievement") ) { return gamecenter_reportachievement; }
		if (HX_FIELD_EQ(inName,"gamecenter_resetachievements") ) { return gamecenter_resetachievements; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameCenter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_init_func") ) { _init_func=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_event_handle") ) { set_event_handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"gamecenter_playerid") ) { gamecenter_playerid=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"gamecenter_initialize") ) { gamecenter_initialize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamecenter_playername") ) { gamecenter_playername=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamecenter_isavailable") ) { gamecenter_isavailable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamecenter_reportscore") ) { gamecenter_reportscore=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamecenter_authenticate") ) { gamecenter_authenticate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"gamecenter_isauthenticated") ) { gamecenter_isauthenticated=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamecenter_showleaderboard") ) { gamecenter_showleaderboard=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"gamecenter_showachievements") ) { gamecenter_showachievements=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"gamecenter_reportachievement") ) { gamecenter_reportachievement=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamecenter_resetachievements") ) { gamecenter_resetachievements=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameCenter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("initialized"),
	HX_CSTRING("ANDROID_CLASS"),
	HX_CSTRING("_init_func"),
	HX_CSTRING("notifyListeners"),
	HX_CSTRING("initialize"),
	HX_CSTRING("authenticate"),
	HX_CSTRING("isAvailable"),
	HX_CSTRING("isAuthenticated"),
	HX_CSTRING("getPlayerName"),
	HX_CSTRING("getPlayerID"),
	HX_CSTRING("showLeaderboard"),
	HX_CSTRING("showAchievements"),
	HX_CSTRING("reportScore"),
	HX_CSTRING("reportAchievement"),
	HX_CSTRING("resetAchievements"),
	HX_CSTRING("set_event_handle"),
	HX_CSTRING("gamecenter_initialize"),
	HX_CSTRING("gamecenter_authenticate"),
	HX_CSTRING("gamecenter_isavailable"),
	HX_CSTRING("gamecenter_isauthenticated"),
	HX_CSTRING("gamecenter_playername"),
	HX_CSTRING("gamecenter_playerid"),
	HX_CSTRING("gamecenter_showleaderboard"),
	HX_CSTRING("gamecenter_showachievements"),
	HX_CSTRING("gamecenter_reportscore"),
	HX_CSTRING("gamecenter_reportachievement"),
	HX_CSTRING("gamecenter_resetachievements"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameCenter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameCenter_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(GameCenter_obj::ANDROID_CLASS,"ANDROID_CLASS");
	HX_MARK_MEMBER_NAME(GameCenter_obj::_init_func,"_init_func");
	HX_MARK_MEMBER_NAME(GameCenter_obj::set_event_handle,"set_event_handle");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_initialize,"gamecenter_initialize");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_authenticate,"gamecenter_authenticate");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_isavailable,"gamecenter_isavailable");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_isauthenticated,"gamecenter_isauthenticated");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_playername,"gamecenter_playername");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_playerid,"gamecenter_playerid");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_showleaderboard,"gamecenter_showleaderboard");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_showachievements,"gamecenter_showachievements");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_reportscore,"gamecenter_reportscore");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_reportachievement,"gamecenter_reportachievement");
	HX_MARK_MEMBER_NAME(GameCenter_obj::gamecenter_resetachievements,"gamecenter_resetachievements");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameCenter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::ANDROID_CLASS,"ANDROID_CLASS");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::_init_func,"_init_func");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::set_event_handle,"set_event_handle");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_initialize,"gamecenter_initialize");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_authenticate,"gamecenter_authenticate");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_isavailable,"gamecenter_isavailable");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_isauthenticated,"gamecenter_isauthenticated");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_playername,"gamecenter_playername");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_playerid,"gamecenter_playerid");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_showleaderboard,"gamecenter_showleaderboard");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_showachievements,"gamecenter_showachievements");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_reportscore,"gamecenter_reportscore");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_reportachievement,"gamecenter_reportachievement");
	HX_VISIT_MEMBER_NAME(GameCenter_obj::gamecenter_resetachievements,"gamecenter_resetachievements");
};

Class GameCenter_obj::__mClass;

void GameCenter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameCenter"), hx::TCanCast< GameCenter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameCenter_obj::__boot()
{
	initialized= false;
	ANDROID_CLASS= HX_CSTRING("GreeSDK");
	set_event_handle= ::nme::Loader_obj::load(HX_CSTRING("gamecenter_set_event_handle"),(int)1);
	gamecenter_initialize= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_initialize"),(int)0);
	gamecenter_authenticate= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_authenticate"),(int)0);
	gamecenter_isavailable= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_isavailable"),(int)0);
	gamecenter_isauthenticated= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_isauthenticated"),(int)0);
	gamecenter_playername= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_playername"),(int)0);
	gamecenter_playerid= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_playerid"),(int)0);
	gamecenter_showleaderboard= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_showleaderboard"),(int)1);
	gamecenter_showachievements= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_showachievements"),(int)0);
	gamecenter_reportscore= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_reportscore"),(int)2);
	gamecenter_reportachievement= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_reportachievement"),(int)2);
	gamecenter_resetachievements= ::cpp::Lib_obj::load(HX_CSTRING("gamecenter"),HX_CSTRING("gamecenter_resetachievements"),(int)0);
}

