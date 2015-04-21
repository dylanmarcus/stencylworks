#ifndef INCLUDED_GameCenter
#define INCLUDED_GameCenter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameCenter)


class HXCPP_CLASS_ATTRIBUTES  GameCenter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameCenter_obj OBJ_;
		GameCenter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GameCenter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameCenter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameCenter"); }

		static bool initialized;
		static ::String ANDROID_CLASS;
		static Dynamic _init_func;
		static Void notifyListeners( Dynamic inEvent);
		static Dynamic notifyListeners_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static Void authenticate( );
		static Dynamic authenticate_dyn();

		static bool isAvailable( );
		static Dynamic isAvailable_dyn();

		static bool isAuthenticated( );
		static Dynamic isAuthenticated_dyn();

		static ::String getPlayerName( );
		static Dynamic getPlayerName_dyn();

		static ::String getPlayerID( );
		static Dynamic getPlayerID_dyn();

		static Void showLeaderboard( ::String categoryID);
		static Dynamic showLeaderboard_dyn();

		static Void showAchievements( );
		static Dynamic showAchievements_dyn();

		static Void reportScore( ::String categoryID,int score);
		static Dynamic reportScore_dyn();

		static Void reportAchievement( ::String achievementID,Float percent);
		static Dynamic reportAchievement_dyn();

		static Void resetAchievements( );
		static Dynamic resetAchievements_dyn();

		static Dynamic set_event_handle;
		static Dynamic &set_event_handle_dyn() { return set_event_handle;}
		static Dynamic gamecenter_initialize;
		static Dynamic &gamecenter_initialize_dyn() { return gamecenter_initialize;}
		static Dynamic gamecenter_authenticate;
		static Dynamic &gamecenter_authenticate_dyn() { return gamecenter_authenticate;}
		static Dynamic gamecenter_isavailable;
		static Dynamic &gamecenter_isavailable_dyn() { return gamecenter_isavailable;}
		static Dynamic gamecenter_isauthenticated;
		static Dynamic &gamecenter_isauthenticated_dyn() { return gamecenter_isauthenticated;}
		static Dynamic gamecenter_playername;
		static Dynamic &gamecenter_playername_dyn() { return gamecenter_playername;}
		static Dynamic gamecenter_playerid;
		static Dynamic &gamecenter_playerid_dyn() { return gamecenter_playerid;}
		static Dynamic gamecenter_showleaderboard;
		static Dynamic &gamecenter_showleaderboard_dyn() { return gamecenter_showleaderboard;}
		static Dynamic gamecenter_showachievements;
		static Dynamic &gamecenter_showachievements_dyn() { return gamecenter_showachievements;}
		static Dynamic gamecenter_reportscore;
		static Dynamic &gamecenter_reportscore_dyn() { return gamecenter_reportscore;}
		static Dynamic gamecenter_reportachievement;
		static Dynamic &gamecenter_reportachievement_dyn() { return gamecenter_reportachievement;}
		static Dynamic gamecenter_resetachievements;
		static Dynamic &gamecenter_resetachievements_dyn() { return gamecenter_resetachievements;}
};


#endif /* INCLUDED_GameCenter */ 
