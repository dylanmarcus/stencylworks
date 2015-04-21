#ifndef INCLUDED_com_stencyl_Input
#define INCLUDED_com_stencyl_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(RoxGestureEvent)
HX_DECLARE_CLASS2(com,stencyl,Input)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Input_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Input_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Input"); }

		static ::String keyString;
		static ::flash::events::KeyboardEvent lastEvent;
		static int lastKey;
		static Float mouseX;
		static Float mouseY;
		static bool mouseDown;
		static bool mouseUp;
		static bool mousePressed;
		static bool mouseReleased;
		static bool mouseWheel;
		static Float accelX;
		static Float accelY;
		static Float accelZ;
		static bool multiTouchEnabled;
		static ::haxe::ds::StringMap multiTouchPoints;
		static int numTouches;
		static int swipeDirection;
		static bool swipedUp;
		static bool swipedDown;
		static bool swipedLeft;
		static bool swipedRight;
		static Void define( ::String name,Array< int > keys);
		static Dynamic define_dyn();

		static bool check( Dynamic input);
		static Dynamic check_dyn();

		static bool pressed( Dynamic input);
		static Dynamic pressed_dyn();

		static bool released( Dynamic input);
		static Dynamic released_dyn();

		static int indexOf( Array< int > a,int v);
		static Dynamic indexOf_dyn();

		static Void enableSwipeDetection( );
		static Dynamic enableSwipeDetection_dyn();

		static Void disableSwipeDetection( );
		static Dynamic disableSwipeDetection_dyn();

		static Void enable( );
		static Dynamic enable_dyn();

		static Void onSwipe( ::RoxGestureEvent e);
		static Dynamic onSwipe_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void simulateKeyPress( ::String key);
		static Dynamic simulateKeyPress_dyn();

		static Void simulateKeyRelease( ::String key);
		static Dynamic simulateKeyRelease_dyn();

		static Void onKeyDown( ::flash::events::KeyboardEvent e);
		static Dynamic onKeyDown_dyn();

		static Void onKeyUp( ::flash::events::KeyboardEvent e);
		static Dynamic onKeyUp_dyn();

		static Void onMouseDown( ::flash::events::MouseEvent e);
		static Dynamic onMouseDown_dyn();

		static Void onMouseUp( ::flash::events::MouseEvent e);
		static Dynamic onMouseUp_dyn();

		static Void onMouseWheel( ::flash::events::MouseEvent e);
		static Dynamic onMouseWheel_dyn();

		static Void onTouchBegin( ::flash::events::TouchEvent e);
		static Dynamic onTouchBegin_dyn();

		static Void onTouchMove( ::flash::events::TouchEvent e);
		static Dynamic onTouchMove_dyn();

		static Void onTouchEnd( ::flash::events::TouchEvent e);
		static Dynamic onTouchEnd_dyn();

		static int kKeyStringMax;
		static bool _enabled;
		static Array< bool > _key;
		static int _keyNum;
		static Array< int > _press;
		static int _pressNum;
		static Array< int > _release;
		static int _releaseNum;
		static ::haxe::ds::StringMap _control;
		static int _mouseWheelDelta;
};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_Input */ 
