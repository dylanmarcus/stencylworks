#ifndef INCLUDED_com_stencyl_graphics_transitions_RectangleTransition
#define INCLUDED_com_stencyl_graphics_transitions_RectangleTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/transitions/Transition.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,RectangleTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES  RectangleTransition_obj : public ::com::stencyl::graphics::transitions::Transition_obj{
	public:
		typedef ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef RectangleTransition_obj OBJ_;
		RectangleTransition_obj();
		Void __construct(::String direction,Float duration,int color);

	public:
		static hx::ObjectPtr< RectangleTransition_obj > __new(::String direction,Float duration,int color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RectangleTransition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RectangleTransition"); }

		virtual Void cleanup( );

		virtual Void draw( ::flash::display::Graphics g);

		virtual Void start( );

		::flash::display::Shape rect;
		int endHeight;
		int beginHeight;
		int endWidth;
		int beginWidth;
		int height;
		int width;
		int color;
		::flash::display::Graphics graphics;
		::flash::display::BitmapData rectangleImg;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_RectangleTransition */ 
