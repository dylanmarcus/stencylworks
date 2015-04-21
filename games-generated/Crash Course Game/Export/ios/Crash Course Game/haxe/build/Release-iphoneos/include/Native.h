#ifndef INCLUDED_Native
#define INCLUDED_Native

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Native)


class HXCPP_CLASS_ATTRIBUTES  Native_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Native_obj OBJ_;
		Native_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Native_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Native_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Native"); }

		static ::String osName( );
		static Dynamic osName_dyn();

		static ::String osVersion( );
		static Dynamic osVersion_dyn();

		static ::String deviceName( );
		static Dynamic deviceName_dyn();

		static ::String model( );
		static Dynamic model_dyn();

		static bool networkAvailable( );
		static Dynamic networkAvailable_dyn();

		static Void vibrate( Float time);
		static Dynamic vibrate_dyn();

		static Void showKeyboard( );
		static Dynamic showKeyboard_dyn();

		static Void hideKeyboard( );
		static Dynamic hideKeyboard_dyn();

		static Void setKeyboardText( ::String text);
		static Dynamic setKeyboardText_dyn();

		static Void initKeyboard( );
		static Dynamic initKeyboard_dyn();

		static Void notifyListeners( Dynamic inEvent);
		static Dynamic notifyListeners_dyn();

		static Void setIconBadgeNumber( int n);
		static Dynamic setIconBadgeNumber_dyn();

		static ::String alertTitle;
		static ::String alertMSG;
		static Void showAlert( ::String title,::String message);
		static Dynamic showAlert_dyn();

		static Void delayAlert( );
		static Dynamic delayAlert_dyn();

		static Void showLoadingScreen( );
		static Dynamic showLoadingScreen_dyn();

		static Void hideLoadingScreen( );
		static Dynamic hideLoadingScreen_dyn();

		static bool keyboardInitialized;
		static Dynamic keyboard_set_event_handle;
		static Dynamic &keyboard_set_event_handle_dyn() { return keyboard_set_event_handle;}
		static Dynamic native_device_os;
		static Dynamic &native_device_os_dyn() { return native_device_os;}
		static Dynamic native_device_vervion;
		static Dynamic &native_device_vervion_dyn() { return native_device_vervion;}
		static Dynamic native_device_name;
		static Dynamic &native_device_name_dyn() { return native_device_name;}
		static Dynamic native_device_model;
		static Dynamic &native_device_model_dyn() { return native_device_model;}
		static Dynamic native_device_network_available;
		static Dynamic &native_device_network_available_dyn() { return native_device_network_available;}
		static Dynamic native_device_vibrate;
		static Dynamic &native_device_vibrate_dyn() { return native_device_vibrate;}
		static Dynamic native_device_badge;
		static Dynamic &native_device_badge_dyn() { return native_device_badge;}
		static Dynamic native_device_show_keyboard;
		static Dynamic &native_device_show_keyboard_dyn() { return native_device_show_keyboard;}
		static Dynamic native_device_hide_keyboard;
		static Dynamic &native_device_hide_keyboard_dyn() { return native_device_hide_keyboard;}
		static Dynamic native_setKeyboardText;
		static Dynamic &native_setKeyboardText_dyn() { return native_setKeyboardText;}
		static Dynamic native_system_ui_show_alert;
		static Dynamic &native_system_ui_show_alert_dyn() { return native_system_ui_show_alert;}
		static Dynamic native_system_ui_show_system_loading_view;
		static Dynamic &native_system_ui_show_system_loading_view_dyn() { return native_system_ui_show_system_loading_view;}
		static Dynamic native_system_ui_hide_system_loading_view;
		static Dynamic &native_system_ui_hide_system_loading_view_dyn() { return native_system_ui_hide_system_loading_view;}
};


#endif /* INCLUDED_Native */ 
