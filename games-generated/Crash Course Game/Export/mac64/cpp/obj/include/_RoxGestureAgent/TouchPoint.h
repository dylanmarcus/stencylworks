#ifndef INCLUDED__RoxGestureAgent_TouchPoint
#define INCLUDED__RoxGestureAgent_TouchPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_RoxGestureAgent,TouchPoint)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace _RoxGestureAgent{


class HXCPP_CLASS_ATTRIBUTES  TouchPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchPoint_obj OBJ_;
		TouchPoint_obj();
		Void __construct(::flash::display::InteractiveObject src,Dynamic e,int touchId);

	public:
		static hx::ObjectPtr< TouchPoint_obj > __new(::flash::display::InteractiveObject src,Dynamic e,int touchId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TouchPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TouchPoint"); }

		virtual Float distSqr( ::_RoxGestureAgent::TouchPoint pt);
		Dynamic distSqr_dyn();

		Float time;
		::flash::geom::Point spt;
		::flash::geom::Point lpt;
		Float sy;
		Float sx;
		Float ly;
		Float lx;
		int tid;
};

} // end namespace _RoxGestureAgent

#endif /* INCLUDED__RoxGestureAgent_TouchPoint */ 
