#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#define INCLUDED_com_stencyl_behavior_ActorScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/Script.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,ActorScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  ActorScript_obj : public ::com::stencyl::behavior::Script_obj{
	public:
		typedef ::com::stencyl::behavior::Script_obj super;
		typedef ActorScript_obj OBJ_;
		ActorScript_obj();
		Void __construct(::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< ActorScript_obj > __new(::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorScript_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ActorScript"); }

		virtual Void disableThisBehavior( );

		virtual Dynamic shout( ::String msg,Dynamic args);
		Dynamic shout_dyn();

		virtual Void setValue( ::String behaviorName,::String attributeName,Dynamic value);
		Dynamic setValue_dyn();

		virtual Dynamic getValue( ::String behaviorName,::String attributeName);
		Dynamic getValue_dyn();

		::com::stencyl::models::Actor actor;
};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_ActorScript */ 
