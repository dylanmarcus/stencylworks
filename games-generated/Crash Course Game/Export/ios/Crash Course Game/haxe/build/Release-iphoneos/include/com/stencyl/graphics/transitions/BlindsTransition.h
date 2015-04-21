#ifndef INCLUDED_com_stencyl_graphics_transitions_BlindsTransition
#define INCLUDED_com_stencyl_graphics_transitions_BlindsTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/transitions/Transition.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,BlindsTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES  BlindsTransition_obj : public ::com::stencyl::graphics::transitions::Transition_obj{
	public:
		typedef ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef BlindsTransition_obj OBJ_;
		BlindsTransition_obj();
		Void __construct(::String direction,Float duration,hx::Null< int >  __o_numBlinds,int color);

	public:
		static hx::ObjectPtr< BlindsTransition_obj > __new(::String direction,Float duration,hx::Null< int >  __o_numBlinds,int color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BlindsTransition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BlindsTransition"); }

		virtual Void cleanup( );

		virtual Void draw( ::flash::display::Graphics g);

		virtual Void start( );

		::flash::display::Graphics graphics;
		::flash::display::Shape rect;
		::flash::geom::Rectangle blindRect;
		Float endBlindWidth;
		Float beginBlindWidth;
		Float blindWidth;
		int numBlinds;
		int color;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_BlindsTransition */ 
