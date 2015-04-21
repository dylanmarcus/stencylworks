#ifndef INCLUDED_com_stencyl_event_EventMaster
#define INCLUDED_com_stencyl_event_EventMaster

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,event,EventMaster)
HX_DECLARE_CLASS3(com,stencyl,event,StencylEvent)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace stencyl{
namespace event{


class HXCPP_CLASS_ATTRIBUTES  EventMaster_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventMaster_obj OBJ_;
		EventMaster_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EventMaster_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EventMaster_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventMaster"); }

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void addKeyboardEvent( ::com::stencyl::event::StencylEvent e);
		Dynamic addKeyboardEvent_dyn();

		virtual Void addGameCenterEvent( ::com::stencyl::event::StencylEvent e);
		Dynamic addGameCenterEvent_dyn();

		virtual Void addPurchaseEvent( ::com::stencyl::event::StencylEvent e);
		Dynamic addPurchaseEvent_dyn();

		virtual Void addAdEvent( ::com::stencyl::event::StencylEvent e);
		Dynamic addAdEvent_dyn();

		::haxe::ds::IntMap eventTable;
		static int TYPE_ADS;
		static int TYPE_PURCHASES;
		static int TYPE_GAMECENTER;
		static int TYPE_KEYBOARD;
};

} // end namespace com
} // end namespace stencyl
} // end namespace event

#endif /* INCLUDED_com_stencyl_event_EventMaster */ 
