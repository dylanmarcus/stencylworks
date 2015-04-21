#ifndef INCLUDED_JoystickController
#define INCLUDED_JoystickController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Joystick)
HX_DECLARE_CLASS0(JoystickController)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  JoystickController_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JoystickController_obj OBJ_;
		JoystickController_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JoystickController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JoystickController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JoystickController"); }

		static ::Joystick joystick1;
		static ::Joystick joystick2;
		static Void initialize( );
		static Dynamic initialize_dyn();

		static Void setStyle( int joystick,int style);
		static Dynamic setStyle_dyn();

		static Void setX( int joystick,Float x);
		static Dynamic setX_dyn();

		static Void setY( int joystick,Float y);
		static Dynamic setY_dyn();

		static Void enable( int joystick);
		static Dynamic enable_dyn();

		static Void disable( int joystick);
		static Dynamic disable_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Float getDirection( int joystick);
		static Dynamic getDirection_dyn();

		static Float getDistance( int joystick);
		static Dynamic getDistance_dyn();

		static ::Joystick createJoystick( ::flash::display::Sprite target,::flash::display::BitmapData outer,::flash::display::BitmapData inner,int type);
		static Dynamic createJoystick_dyn();

};


#endif /* INCLUDED_JoystickController */ 
