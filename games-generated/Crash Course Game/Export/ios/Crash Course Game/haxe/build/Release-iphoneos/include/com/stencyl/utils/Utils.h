#ifndef INCLUDED_com_stencyl_utils_Utils
#define INCLUDED_com_stencyl_utils_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Collision)
HX_DECLARE_CLASS3(com,stencyl,utils,Utils)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,media,SoundTransform)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Utils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Utils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Utils"); }

		static int INTEGER_MAX;
		static Float NUMBER_MAX_VALUE;
		static int blackColor;
		static int width;
		static int height;
		static Float elapsed;
		static Float rate;
		static ::flash::geom::Rectangle bounds;
		static ::flash::geom::Point camera;
		static bool toBoolean( ::String s);
		static Dynamic toBoolean_dyn();

		static Void clear( Dynamic arr);
		static Dynamic clear_dyn();

		static Void removeValueFromArray( Dynamic arr,Dynamic value);
		static Dynamic removeValueFromArray_dyn();

		static bool contains( Dynamic arr,Dynamic value);
		static Dynamic contains_dyn();

		static Void removeAllChildren( ::flash::display::DisplayObjectContainer container);
		static Dynamic removeAllChildren_dyn();

		static Void demouse( ::flash::display::DisplayObjectContainer container);
		static Dynamic demouse_dyn();

		static Void setCamera( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic setCamera_dyn();

		static Void resetCamera( );
		static Dynamic resetCamera_dyn();

		static Float get_volume( );
		static Dynamic get_volume_dyn();

		static Float set_volume( Float value);
		static Dynamic set_volume_dyn();

		static Float get_pan( );
		static Dynamic get_pan_dyn();

		static Float set_pan( Float value);
		static Dynamic set_pan_dyn();

		static Dynamic choose( Dynamic objs);
		static Dynamic choose_dyn();

		static int sign( Float value);
		static Dynamic sign_dyn();

		static Float approach( Float value,Float target,Float amount);
		static Dynamic approach_dyn();

		static Float lerp( Float a,Float b,hx::Null< Float >  t);
		static Dynamic lerp_dyn();

		static int colorLerp( int fromColor,int toColor,hx::Null< Float >  t);
		static Dynamic colorLerp_dyn();

		static Void stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  distance);
		static Dynamic stepTowards_dyn();

		static Void anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  distance);
		static Dynamic anchorTo_dyn();

		static Float angle( Float x1,Float y1,Float x2,Float y2);
		static Dynamic angle_dyn();

		static Void angleXY( Dynamic object,Float angle,hx::Null< Float >  length,hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic angleXY_dyn();

		static Void rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  angle,hx::Null< bool >  relative);
		static Dynamic rotateAround_dyn();

		static Float distance( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distance_dyn();

		static Float distanceSquared( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distanceSquared_dyn();

		static Float distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2);
		static Dynamic distanceRects_dyn();

		static Float distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh);
		static Dynamic distanceRectPoint_dyn();

		static Float clamp( Float value,Float min,Float max);
		static Dynamic clamp_dyn();

		static Void clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  padding);
		static Dynamic clampInRect_dyn();

		static Float scale( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scale_dyn();

		static Float scaleClamp( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scaleClamp_dyn();

		static int get_randomSeed( );
		static Dynamic get_randomSeed_dyn();

		static int set_randomSeed( int value);
		static Dynamic set_randomSeed_dyn();

		static Void randomizeSeed( );
		static Dynamic randomizeSeed_dyn();

		static Float random;
		static Float get_random( );
		static Dynamic get_random_dyn();

		static int rand( int amount);
		static Dynamic rand_dyn();

		static int indexOf( Dynamic a,Dynamic v);
		static Dynamic indexOf_dyn();

		static Dynamic next( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic next_dyn();

		static Dynamic prev( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic prev_dyn();

		static Dynamic swap( Dynamic current,Dynamic a,Dynamic b);
		static Dynamic swap_dyn();

		static int getColorRGB( hx::Null< int >  R,hx::Null< int >  G,hx::Null< int >  B);
		static Dynamic getColorRGB_dyn();

		static int getRed( int color);
		static Dynamic getRed_dyn();

		static int getGreen( int color);
		static Dynamic getGreen_dyn();

		static int getBlue( int color);
		static Dynamic getBlue_dyn();

		static Dynamic convertColor( int color);
		static Dynamic convertColor_dyn();

		static Float timeFlag( );
		static Dynamic timeFlag_dyn();

		static Array< int > frames( int from,int to,hx::Null< int >  skip);
		static Dynamic frames_dyn();

		static Void shuffle( Dynamic a);
		static Dynamic shuffle_dyn();

		static Float time;
		static Float set_time( Float value);
		static Dynamic set_time_dyn();

		static Float _time;
		static Float _updateTime;
		static Float _renderTime;
		static Float _gameTime;
		static Float _flashTime;
		static ::haxe::ds::StringMap _bitmap;
		static int _seed;
		static int _getSeed;
		static Float _volume;
		static Float _pan;
		static ::flash::media::SoundTransform _soundTransform;
		static Float DEG;
		static Float RAD;
		static ::flash::display::Stage stage;
		static ::flash::geom::Point point;
		static ::flash::geom::Point point2;
		static ::flash::geom::Point zero;
		static ::flash::geom::Rectangle rect;
		static ::flash::geom::Matrix matrix;
		static ::flash::display::Sprite sprite;
		static ::com::stencyl::models::actor::Collision collision;
};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_Utils */ 
