#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#define INCLUDED_com_stencyl_models_background_ImageBackground

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
#include <com/stencyl/models/Background.h>
HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,background,ImageBackground)
HX_DECLARE_CLASS5(com,stencyl,models,scene,layers,BackgroundLayer)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace models{
namespace background{


class HXCPP_CLASS_ATTRIBUTES  ImageBackground_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef ImageBackground_obj OBJ_;
		ImageBackground_obj();
		Void __construct(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats);

	public:
		static hx::ObjectPtr< ImageBackground_obj > __new(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ImageBackground_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::models::Background_obj *()
			{ return new ::com::stencyl::models::Background_delegate_< ImageBackground_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ImageBackground"); }

		virtual Void unloadGraphics( );

		virtual Void loadGraphics( );

		virtual Void drawRepeated( ::com::stencyl::models::scene::layers::BackgroundLayer bitmap,int screenWidth,int screenHeight);
		Dynamic drawRepeated_dyn();

		virtual Void draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight);
		Dynamic draw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool repeated;
		bool repeats;
		Float parallaxY;
		Float parallaxX;
		Array< int > durations;
		Dynamic frames;
		::flash::display::BitmapData img;
		Float currTime;
		int currFrame;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background

#endif /* INCLUDED_com_stencyl_models_background_ImageBackground */ 
