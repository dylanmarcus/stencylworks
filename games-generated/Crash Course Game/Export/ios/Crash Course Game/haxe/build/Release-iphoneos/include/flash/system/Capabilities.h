#ifndef INCLUDED_flash_system_Capabilities
#define INCLUDED_flash_system_Capabilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,system,Capabilities)
namespace flash{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  Capabilities_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Capabilities_obj OBJ_;
		Capabilities_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Capabilities_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Capabilities_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Capabilities"); }

		static ::String language;
		static Float pixelAspectRatio;
		static Float screenDPI;
		static Array< ::Dynamic > screenResolutions;
		static Float screenResolutionX;
		static Float screenResolutionY;
		static ::String get_language( );
		static Dynamic get_language_dyn();

		static Float get_pixelAspectRatio( );
		static Dynamic get_pixelAspectRatio_dyn();

		static Float get_screenDPI( );
		static Dynamic get_screenDPI_dyn();

		static Array< ::Dynamic > get_screenResolutions( );
		static Dynamic get_screenResolutions_dyn();

		static Float get_screenResolutionX( );
		static Dynamic get_screenResolutionX_dyn();

		static Float get_screenResolutionY( );
		static Dynamic get_screenResolutionY_dyn();

		static Dynamic nme_capabilities_get_pixel_aspect_ratio;
		static Dynamic &nme_capabilities_get_pixel_aspect_ratio_dyn() { return nme_capabilities_get_pixel_aspect_ratio;}
		static Dynamic nme_capabilities_get_screen_dpi;
		static Dynamic &nme_capabilities_get_screen_dpi_dyn() { return nme_capabilities_get_screen_dpi;}
		static Dynamic nme_capabilities_get_screen_resolution_x;
		static Dynamic &nme_capabilities_get_screen_resolution_x_dyn() { return nme_capabilities_get_screen_resolution_x;}
		static Dynamic nme_capabilities_get_screen_resolution_y;
		static Dynamic &nme_capabilities_get_screen_resolution_y_dyn() { return nme_capabilities_get_screen_resolution_y;}
		static Dynamic nme_capabilities_get_screen_resolutions;
		static Dynamic &nme_capabilities_get_screen_resolutions_dyn() { return nme_capabilities_get_screen_resolutions;}
		static Dynamic nme_capabilities_get_language;
		static Dynamic &nme_capabilities_get_language_dyn() { return nme_capabilities_get_language;}
};

} // end namespace flash
} // end namespace system

#endif /* INCLUDED_flash_system_Capabilities */ 
