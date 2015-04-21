#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeOutTransition
#define INCLUDED_com_stencyl_graphics_transitions_FadeOutTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/transitions/Transition.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,FadeOutTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES  FadeOutTransition_obj : public ::com::stencyl::graphics::transitions::Transition_obj{
	public:
		typedef ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef FadeOutTransition_obj OBJ_;
		FadeOutTransition_obj();
		Void __construct(Float duration,hx::Null< int >  __o_color);

	public:
		static hx::ObjectPtr< FadeOutTransition_obj > __new(Float duration,hx::Null< int >  __o_color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FadeOutTransition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FadeOutTransition"); }

		virtual Void cleanup( );

		virtual Void start( );

		::flash::display::Shape rect;
		int color;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_FadeOutTransition */ 
