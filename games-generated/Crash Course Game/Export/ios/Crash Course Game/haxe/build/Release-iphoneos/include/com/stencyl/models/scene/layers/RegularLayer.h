#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#define INCLUDED_com_stencyl_models_scene_layers_RegularLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
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
namespace layers{


class HXCPP_CLASS_ATTRIBUTES  RegularLayer_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef RegularLayer_obj OBJ_;
		RegularLayer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RegularLayer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RegularLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RegularLayer"); }

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
} // end namespace layers

#endif /* INCLUDED_com_stencyl_models_scene_layers_RegularLayer */ 
