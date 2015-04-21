#ifndef INCLUDED_com_stencyl_models_scene_Layer
#define INCLUDED_com_stencyl_models_scene_Layer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/scene/layers/RegularLayer.h>
HX_DECLARE_CLASS4(com,stencyl,models,scene,Layer)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TileLayer)
HX_DECLARE_CLASS5(com,stencyl,models,scene,layers,RegularLayer)
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


class HXCPP_CLASS_ATTRIBUTES  Layer_obj : public ::com::stencyl::models::scene::layers::RegularLayer_obj{
	public:
		typedef ::com::stencyl::models::scene::layers::RegularLayer_obj super;
		typedef Layer_obj OBJ_;
		Layer_obj();
		Void __construct(int ID,int order,::com::stencyl::models::scene::TileLayer tiles,::flash::display::Sprite overlay,Dynamic bitmapOverlay);

	public:
		static hx::ObjectPtr< Layer_obj > __new(int ID,int order,::com::stencyl::models::scene::TileLayer tiles,::flash::display::Sprite overlay,Dynamic bitmapOverlay);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Layer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Layer"); }

		bool drawnOn;
		Dynamic bitmapOverlay;
		::flash::display::Sprite overlay;
		int color;
		int order;
		int ID;
		::com::stencyl::models::scene::TileLayer tiles;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_Layer */ 
