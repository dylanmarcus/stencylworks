#ifndef INCLUDED_Ads
#define INCLUDED_Ads

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Ads)


class HXCPP_CLASS_ATTRIBUTES  Ads_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ads_obj OBJ_;
		Ads_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Ads_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Ads_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ads"); }

		static bool initialized;
		static ::String adwhirlCode;
		static ::String ANDROID_CLASS;
		static Dynamic _init_func;
		static Dynamic _show_func;
		static Dynamic _hide_func;
		static Void notifyListeners( Dynamic inEvent);
		static Dynamic notifyListeners_dyn();

		static Void initialize( ::String apiCode,hx::Null< int >  position);
		static Dynamic initialize_dyn();

		static Void showAd( hx::Null< bool >  onBottom);
		static Dynamic showAd_dyn();

		static Void hideAd( );
		static Dynamic hideAd_dyn();

		static Dynamic set_event_handle;
		static Dynamic &set_event_handle_dyn() { return set_event_handle;}
		static Dynamic ads_showad;
		static Dynamic &ads_showad_dyn() { return ads_showad;}
		static Dynamic ads_hidead;
		static Dynamic &ads_hidead_dyn() { return ads_hidead;}
};


#endif /* INCLUDED_Ads */ 
