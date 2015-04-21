#ifndef INCLUDED_com_stencyl_event_NativeListener
#define INCLUDED_com_stencyl_event_NativeListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,event,EventMaster)
HX_DECLARE_CLASS3(com,stencyl,event,NativeListener)
namespace com{
namespace stencyl{
namespace event{


class HXCPP_CLASS_ATTRIBUTES  NativeListener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeListener_obj OBJ_;
		NativeListener_obj();
		Void __construct(int metaType,int type,Dynamic fn);

	public:
		static hx::ObjectPtr< NativeListener_obj > __new(int metaType,int type,Dynamic fn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NativeListener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NativeListener"); }

		virtual Void checkEvents( ::com::stencyl::event::EventMaster q);
		Dynamic checkEvents_dyn();

		Dynamic fn;
		int type;
		int metaType;
};

} // end namespace com
} // end namespace stencyl
} // end namespace event

#endif /* INCLUDED_com_stencyl_event_NativeListener */ 
