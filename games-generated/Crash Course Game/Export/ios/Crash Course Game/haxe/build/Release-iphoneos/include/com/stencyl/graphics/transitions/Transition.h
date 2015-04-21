#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#define INCLUDED_com_stencyl_graphics_transitions_Transition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(flash,display,Graphics)
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES  Transition_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transition_obj OBJ_;
		Transition_obj();
		Void __construct(Float duration);

	public:
		static hx::ObjectPtr< Transition_obj > __new(Float duration);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Transition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Transition"); }

		virtual Float getDuration( );
		Dynamic getDuration_dyn();

		virtual Void draw( ::flash::display::Graphics g);
		Dynamic draw_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		virtual bool isComplete( );
		Dynamic isComplete_dyn();

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual Void cleanup( );
		Dynamic cleanup_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		bool complete;
		bool active;
		::String direction;
		Float duration;
		static ::String IN;
		static ::String OUT;
		static ::String THROUGH;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_Transition */ 
