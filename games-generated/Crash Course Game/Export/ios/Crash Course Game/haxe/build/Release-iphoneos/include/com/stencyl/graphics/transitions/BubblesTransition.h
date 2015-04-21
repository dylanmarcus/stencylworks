#ifndef INCLUDED_com_stencyl_graphics_transitions_BubblesTransition
#define INCLUDED_com_stencyl_graphics_transitions_BubblesTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/transitions/Transition.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,BubblesTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES  BubblesTransition_obj : public ::com::stencyl::graphics::transitions::Transition_obj{
	public:
		typedef ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef BubblesTransition_obj OBJ_;
		BubblesTransition_obj();
		Void __construct(::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color);

	public:
		static hx::ObjectPtr< BubblesTransition_obj > __new(::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BubblesTransition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BubblesTransition"); }

		virtual Void cleanup( );

		virtual Void draw( ::flash::display::Graphics g);

		virtual Void start( );

		int screenHeight;
		int screenWidth;
		::flash::geom::Rectangle bubbleRect;
		Array< ::Dynamic > bubblePositions;
		::flash::display::BitmapData drawBitmap;
		::flash::display::Graphics graphics;
		::flash::display::Shape rect;
		Float endRadius;
		Float beginRadius;
		Float radius;
		int numBubbles;
		int color;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_BubblesTransition */ 
