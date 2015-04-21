#ifndef INCLUDED_com_stencyl_graphics_BitmapAnimation
#define INCLUDED_com_stencyl_graphics_BitmapAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Bitmap.h>
#include <com/stencyl/graphics/AbstractAnimation.h>
HX_DECLARE_CLASS3(com,stencyl,graphics,AbstractAnimation)
HX_DECLARE_CLASS3(com,stencyl,graphics,BitmapAnimation)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Animation)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  BitmapAnimation_obj : public ::flash::display::Bitmap_obj{
	public:
		typedef ::flash::display::Bitmap_obj super;
		typedef BitmapAnimation_obj OBJ_;
		BitmapAnimation_obj();
		Void __construct(::flash::display::BitmapData sheet,int numFrames,Array< int > durations,bool looping,::com::stencyl::models::actor::Animation model);

	public:
		static hx::ObjectPtr< BitmapAnimation_obj > __new(::flash::display::BitmapData sheet,int numFrames,Array< int > durations,bool looping,::com::stencyl::models::actor::Animation model);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapAnimation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::graphics::AbstractAnimation_obj *()
			{ return new ::com::stencyl::graphics::AbstractAnimation_delegate_< BitmapAnimation_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BitmapAnimation"); }

		virtual Void setFrameDurations( int time);
		Dynamic setFrameDurations_dyn();

		virtual Array< int > getFrameDurations( );
		Dynamic getFrameDurations_dyn();

		virtual Void draw( ::com::stencyl::graphics::G g,Float x,Float y,Float angle,Float alpha);
		Dynamic draw_dyn();

		virtual Void updateBitmap( );
		Dynamic updateBitmap_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual bool needsBitmapUpdate( );
		Dynamic needsBitmapUpdate_dyn();

		virtual bool isFinished( );
		Dynamic isFinished_dyn();

		virtual Void setFrame( int frame);
		Dynamic setFrame_dyn();

		virtual int getNumFrames( );
		Dynamic getNumFrames_dyn();

		virtual int getCurrentFrame( );
		Dynamic getCurrentFrame_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		bool needsUpdate;
		bool finished;
		::flash::geom::Point pt;
		::flash::geom::Rectangle region;
		int frameWidth;
		int numFrames;
		Array< int > durations;
		::flash::display::BitmapData sheet;
		Float timer;
		bool looping;
		int frameIndex;
		::com::stencyl::models::actor::Animation model;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_BitmapAnimation */ 
