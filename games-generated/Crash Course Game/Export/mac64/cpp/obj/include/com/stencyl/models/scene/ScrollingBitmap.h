#ifndef INCLUDED_com_stencyl_models_scene_ScrollingBitmap
#define INCLUDED_com_stencyl_models_scene_ScrollingBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS4(com,stencyl,models,scene,ScrollingBitmap)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  ScrollingBitmap_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef ScrollingBitmap_obj OBJ_;
		ScrollingBitmap_obj();
		Void __construct(Dynamic img,Float dx,Float dy,hx::Null< Float >  __o_px,hx::Null< Float >  __o_py,hx::Null< int >  __o_ID);

	public:
		static hx::ObjectPtr< ScrollingBitmap_obj > __new(Dynamic img,Float dx,Float dy,hx::Null< Float >  __o_px,hx::Null< Float >  __o_py,hx::Null< int >  __o_ID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScrollingBitmap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScrollingBitmap"); }

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void resetPositions( );
		Dynamic resetPositions_dyn();

		virtual Void updateParallax( );
		Dynamic updateParallax_dyn();

		virtual Void updateAuto( Float elapsedTime);
		Dynamic updateAuto_dyn();

		int backgroundID;
		Float parallaxY;
		Float parallaxX;
		Float yVelocity;
		Float xVelocity;
		Float yPos;
		Float xPos;
		Float yP;
		Float xP;
		Float cacheHeight;
		Float cacheWidth;
		bool parallax;
		bool running;
		Float curStep;
		Float speed;
		::flash::display::Bitmap image9;
		::flash::display::Bitmap image8;
		::flash::display::Bitmap image7;
		::flash::display::Bitmap image6;
		::flash::display::Bitmap image5;
		::flash::display::Bitmap image4;
		::flash::display::Bitmap image3;
		::flash::display::Bitmap image2;
		::flash::display::Bitmap image1;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_ScrollingBitmap */ 
