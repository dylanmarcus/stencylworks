#ifndef INCLUDED_RoxGestureAgent
#define INCLUDED_RoxGestureAgent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(RoxGestureAgent)
HX_DECLARE_CLASS0(RoxGestureEvent)
HX_DECLARE_CLASS1(_RoxGestureAgent,TouchPoint)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)


class HXCPP_CLASS_ATTRIBUTES  RoxGestureAgent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RoxGestureAgent_obj OBJ_;
		RoxGestureAgent_obj();
		Void __construct(::flash::display::InteractiveObject inOwner,Dynamic __o_inMode);

	public:
		static hx::ObjectPtr< RoxGestureAgent_obj > __new(::flash::display::InteractiveObject inOwner,Dynamic __o_inMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RoxGestureAgent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RoxGestureAgent"); }

		virtual Void cancelLongPress( );
		Dynamic cancelLongPress_dyn();

		virtual Void setTwoFingerMove( ::_RoxGestureAgent::TouchPoint pt);
		Dynamic setTwoFingerMove_dyn();

		virtual Void setMove( ::_RoxGestureAgent::TouchPoint pt);
		Dynamic setMove_dyn();

		virtual Void setReady( );
		Dynamic setReady_dyn();

		virtual Void sendLongPress( ::_RoxGestureAgent::TouchPoint pt);
		Dynamic sendLongPress_dyn();

		virtual bool handleTouch( ::String type,Dynamic e,bool prim,int touchId);
		Dynamic handleTouch_dyn();

		virtual Void onMouse( Dynamic e);
		Dynamic onMouse_dyn();

		virtual Void onTouch( Dynamic e);
		Dynamic onTouch_dyn();

		virtual Void convertMouse( Dynamic e);
		Dynamic convertMouse_dyn();

		virtual Void convertTouch( Dynamic e);
		Dynamic convertTouch_dyn();

		virtual Void handleEvent( int flags,::RoxGestureEvent e);
		Dynamic handleEvent_dyn();

		virtual Void stopTween( );
		Dynamic stopTween_dyn();

		virtual Void startTween( Dynamic target,Float interval,Dynamic properties);
		Dynamic startTween_dyn();

		virtual Dynamic getHandler( Dynamic flags);
		Dynamic getHandler_dyn();

		virtual Void detach( );
		Dynamic detach_dyn();

		int state;
		::flash::display::Sprite overlay;
		::motion::actuators::GenericActuator tweener;
		::motion::actuators::GenericActuator longPressTimer;
		Dynamic handler;
		Dynamic &handler_dyn() { return handler;}
		Array< ::String > listenEvents;
		::List touchList;
		::_RoxGestureAgent::TouchPoint touch1;
		::_RoxGestureAgent::TouchPoint touch0;
		::flash::display::InteractiveObject owner;
		Float swipeTimeout;
		Float longPressDelay;
		int mode;
		static int TOUCH_POINT;
		static int GESTURE;
		static int GESTURE_CAPTURE;
		static int PAN_X;
		static int PAN_Y;
		static int PAN_XY;
		static bool multitouchSupported;
		static int READY;
		static int BEGIN;
		static int TWO_FINGER_MOVE;
		static int MOVE;
		static Float R2D;
		static Float SWIPE_SCROLL_TIME;
		static Float SWIPE_SAMPLE_TIME;
		static Float VELOCITY_RATIO;
		static Array< ::String > touchEvents;
		static Array< ::String > mouseEvents;
		static Array< ::String > geTouchEvents;
		static Array< ::String > geMouseEvents;
		static bool initialized;
		static Float moveToleSqr;
		static Void init( );
		static Dynamic init_dyn();

		static ::flash::geom::Point localOffset( ::flash::display::InteractiveObject obj,::flash::geom::Point globalOffset);
		static Dynamic localOffset_dyn();

		static bool get_multitouchSupported( );
		static Dynamic get_multitouchSupported_dyn();

		static Array< ::String > MAP;
		static ::haxe::ds::StringMap typeMap;
		static ::haxe::ds::StringMap initTypeMap( );
		static Dynamic initTypeMap_dyn();

};


#endif /* INCLUDED_RoxGestureAgent */ 
