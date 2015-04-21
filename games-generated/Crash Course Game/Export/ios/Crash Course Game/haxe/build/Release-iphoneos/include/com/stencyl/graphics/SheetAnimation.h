#ifndef INCLUDED_com_stencyl_graphics_SheetAnimation
#define INCLUDED_com_stencyl_graphics_SheetAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
#include <com/stencyl/graphics/AbstractAnimation.h>
HX_DECLARE_CLASS3(com,stencyl,graphics,AbstractAnimation)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS3(com,stencyl,graphics,SheetAnimation)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Animation)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  SheetAnimation_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef SheetAnimation_obj OBJ_;
		SheetAnimation_obj();
		Void __construct(::openfl::display::Tilesheet tilesheet,Array< int > durations,int width,int height,bool looping,::com::stencyl::models::actor::Animation model);

	public:
		static hx::ObjectPtr< SheetAnimation_obj > __new(::openfl::display::Tilesheet tilesheet,Array< int > durations,int width,int height,bool looping,::com::stencyl::models::actor::Animation model);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SheetAnimation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::graphics::AbstractAnimation_obj *()
			{ return new ::com::stencyl::graphics::AbstractAnimation_delegate_< SheetAnimation_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SheetAnimation"); }

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

		::com::stencyl::models::actor::Animation model;
		Array< Float > data;
		int numFrames;
		Array< int > durations;
		::openfl::display::Tilesheet tilesheet;
		bool needsUpdate;
		Float timer;
		bool looping;
		int frameIndex;
		Float blueValue;
		Float greenValue;
		Float redValue;
		bool tint;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_SheetAnimation */ 
