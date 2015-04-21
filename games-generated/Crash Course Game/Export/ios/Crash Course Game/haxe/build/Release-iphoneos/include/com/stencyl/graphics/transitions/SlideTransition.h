#ifndef INCLUDED_com_stencyl_graphics_transitions_SlideTransition
#define INCLUDED_com_stencyl_graphics_transitions_SlideTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/transitions/Transition.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,SlideTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES  SlideTransition_obj : public ::com::stencyl::graphics::transitions::Transition_obj{
	public:
		typedef ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef SlideTransition_obj OBJ_;
		SlideTransition_obj();
		Void __construct(::flash::display::Sprite sceneSpr,Float duration,::String slideDirection);

	public:
		static hx::ObjectPtr< SlideTransition_obj > __new(::flash::display::Sprite sceneSpr,Float duration,::String slideDirection);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SlideTransition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SlideTransition"); }

		virtual Void cleanup( );

		virtual Void draw( ::flash::display::Graphics g);

		virtual Void start( );

		::flash::display::Shape rect;
		Float ty;
		Float tx;
		::flash::geom::Matrix newSceneMatrix;
		::flash::geom::Matrix oldSceneMatrix;
		::flash::display::Graphics graphics;
		::flash::display::BitmapData drawBitmap;
		::flash::display::BitmapData newBitmap;
		::flash::display::BitmapData oldBitmap;
		::flash::display::Sprite sceneSpr;
		static ::String SLIDE_UP;
		static ::String SLIDE_DOWN;
		static ::String SLIDE_LEFT;
		static ::String SLIDE_RIGHT;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_SlideTransition */ 
