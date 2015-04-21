#ifndef INCLUDED_Joystick
#define INCLUDED_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(Joystick)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Joystick_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Joystick_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Joystick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Joystick"); }

		virtual Void onTouchEnd( ::flash::events::TouchEvent e);
		Dynamic onTouchEnd_dyn();

		virtual Void onFloatMove( ::flash::events::TouchEvent e);
		Dynamic onFloatMove_dyn();

		virtual Void onAbsoluteMove( ::flash::events::TouchEvent e);
		Dynamic onAbsoluteMove_dyn();

		virtual Void onRelativeMove( ::flash::events::TouchEvent e);
		Dynamic onRelativeMove_dyn();

		virtual Void onStaticMove( ::flash::events::TouchEvent e);
		Dynamic onStaticMove_dyn();

		virtual Void onTouchMove( ::flash::events::TouchEvent e);
		Dynamic onTouchMove_dyn();

		virtual Void onAbsoluteTouch( ::flash::events::TouchEvent e);
		Dynamic onAbsoluteTouch_dyn();

		virtual Void onRelativeTouch( ::flash::events::TouchEvent e);
		Dynamic onRelativeTouch_dyn();

		virtual Void onStaticTouch( ::flash::events::TouchEvent e);
		Dynamic onStaticTouch_dyn();

		virtual Void onTouchBegin( ::flash::events::TouchEvent e);
		Dynamic onTouchBegin_dyn();

		virtual Void sendEvent( ::String type,Float distance,Float direction);
		Dynamic sendEvent_dyn();

		virtual bool isWithinBounds( ::flash::geom::Point point);
		Dynamic isWithinBounds_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void setCenterY( Float centerY);
		Dynamic setCenterY_dyn();

		virtual Void setCenterX( Float centerX);
		Dynamic setCenterX_dyn();

		virtual Float getCenterY( );
		Dynamic getCenterY_dyn();

		virtual Float getCenterX( );
		Dynamic getCenterX_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Void positionContent( );
		Dynamic positionContent_dyn();

		virtual Void setBounds( ::flash::geom::Rectangle bounds);
		Dynamic setBounds_dyn();

		virtual Void setInnerRadius( Float innerRadius);
		Dynamic setInnerRadius_dyn();

		virtual Void setOuterRadius( Float outerRadius);
		Dynamic setOuterRadius_dyn();

		virtual Void setTouchRadius( Float touchRadius);
		Dynamic setTouchRadius_dyn();

		virtual Void setType( int type);
		Dynamic setType_dyn();

		virtual Void setInnerImage( ::flash::display::Bitmap innerImage);
		Dynamic setInnerImage_dyn();

		virtual Void setOuterImage( ::flash::display::Bitmap outerImage);
		Dynamic setOuterImage_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		Float mDirection;
		Float mDistance;
		Float mInnerImageScaleOnTouch;
		Float mRelativeY;
		Float mRelativeX;
		int mCurTouch;
		bool enabled;
		bool mRender;
		::flash::geom::Rectangle mBounds;
		Float mInnerRadius;
		Float mOuterRadius;
		Float mTouchRadius;
		int mType;
		::flash::display::Bitmap mInnerImage;
		::flash::display::Bitmap mOuterImage;
		static ::String EVENT_TOUCH;
		static ::String EVENT_MOVE;
		static ::String EVENT_TOUCHUP;
		static ::String EVENT_CHANGED;
		static Float DEFAULT_TOUCHRADIUS;
		static Float DEFAULT_OUTERRADIUS;
		static Float DEFAULT_INNERRADIUS;
		static int JoystickStatic;
		static int JoystickRelative;
		static int JoystickAbsolute;
		static int JoystickFloat;
};


#endif /* INCLUDED_Joystick */ 
