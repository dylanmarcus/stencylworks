#ifndef INCLUDED_com_stencyl_graphics_transitions_PixelizeTransition
#define INCLUDED_com_stencyl_graphics_transitions_PixelizeTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/transitions/Transition.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,PixelizeTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,BitmapData)
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


class HXCPP_CLASS_ATTRIBUTES  PixelizeTransition_obj : public ::com::stencyl::graphics::transitions::Transition_obj{
	public:
		typedef ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef PixelizeTransition_obj OBJ_;
		PixelizeTransition_obj();
		Void __construct(Float duration,int beginPixelSize,int endPixelSize);

	public:
		static hx::ObjectPtr< PixelizeTransition_obj > __new(Float duration,int beginPixelSize,int endPixelSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PixelizeTransition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PixelizeTransition"); }

		virtual Void cleanup( );

		virtual Void draw( ::flash::display::Graphics g);

		virtual Void start( );

		int halfSize;
		::flash::geom::Rectangle pixelRect;
		int yOverflow;
		int xOverflow;
		int r;
		int c;
		::flash::display::BitmapData srcImg;
		::flash::display::Graphics graphics;
		::flash::display::Shape rect;
		int endPixelSize;
		int beginPixelSize;
		int pixelSize;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_PixelizeTransition */ 
