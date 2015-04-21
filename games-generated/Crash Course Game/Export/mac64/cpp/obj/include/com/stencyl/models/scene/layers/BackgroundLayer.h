#ifndef INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer
#define INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Bitmap.h>
HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,background,ImageBackground)
HX_DECLARE_CLASS5(com,stencyl,models,scene,layers,BackgroundLayer)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace models{
namespace scene{
namespace layers{


class HXCPP_CLASS_ATTRIBUTES  BackgroundLayer_obj : public ::flash::display::Bitmap_obj{
	public:
		typedef ::flash::display::Bitmap_obj super;
		typedef BackgroundLayer_obj OBJ_;
		BackgroundLayer_obj();
		Void __construct(::flash::display::BitmapData bitmapData,::com::stencyl::models::background::ImageBackground model);

	public:
		static hx::ObjectPtr< BackgroundLayer_obj > __new(::flash::display::BitmapData bitmapData,::com::stencyl::models::background::ImageBackground model);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BackgroundLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BackgroundLayer"); }

		virtual Void updateAnimation( Float elapsedTime);
		Dynamic updateAnimation_dyn();

		virtual Void setImage( ::flash::display::BitmapData bitmapData);
		Dynamic setImage_dyn();

		Float cacheHeight;
		Float cacheWidth;
		Float currTime;
		int currIndex;
		int frameCount;
		bool isAnimated;
		::com::stencyl::models::background::ImageBackground model;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
} // end namespace layers

#endif /* INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer */ 
