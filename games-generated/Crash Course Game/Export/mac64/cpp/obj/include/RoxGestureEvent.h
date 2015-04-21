#ifndef INCLUDED_RoxGestureEvent
#define INCLUDED_RoxGestureEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS0(RoxGestureAgent)
HX_DECLARE_CLASS0(RoxGestureEvent)
HX_DECLARE_CLASS2(flash,events,Event)


class HXCPP_CLASS_ATTRIBUTES  RoxGestureEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef RoxGestureEvent_obj OBJ_;
		RoxGestureEvent_obj();
		Void __construct(::String type,Dynamic __o_bubbles,Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY,Dynamic __o_inTouchPointId,::RoxGestureAgent inAgent,Dynamic inExtra);

	public:
		static hx::ObjectPtr< RoxGestureEvent_obj > __new(::String type,Dynamic __o_bubbles,Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY,Dynamic __o_inTouchPointId,::RoxGestureAgent inAgent,Dynamic inExtra);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RoxGestureEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RoxGestureEvent"); }

		virtual ::String toString( );

		Dynamic extra;
		::RoxGestureAgent agent;
		int touchPointID;
		Float stageY;
		Float stageX;
		Float localY;
		Float localX;
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_END;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OVER;
		static ::String TOUCH_OUT;
		static ::String TOUCH_ROLL_OVER;
		static ::String TOUCH_ROLL_OUT;
		static ::String TOUCH_TAP;
		static ::String GESTURE_TAP;
		static ::String GESTURE_LONG_PRESS;
		static ::String GESTURE_PAN;
		static ::String GESTURE_SWIPE;
		static ::String GESTURE_BEGIN;
		static ::String GESTURE_PINCH;
		static ::String GESTURE_ROTATION;
		static ::String GESTURE_END;
};


#endif /* INCLUDED_RoxGestureEvent */ 
