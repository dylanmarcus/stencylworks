#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#define INCLUDED_com_stencyl_behavior_TimedTask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,behavior,TimedTask)
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


class HXCPP_CLASS_ATTRIBUTES  TimedTask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimedTask_obj OBJ_;
		TimedTask_obj();
		Void __construct(Dynamic toExecute,int interval,bool repeats,::com::stencyl::models::Actor actor);

	public:
		static hx::ObjectPtr< TimedTask_obj > __new(Dynamic toExecute,int interval,bool repeats,::com::stencyl::models::Actor actor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TimedTask_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TimedTask"); }

		virtual Void update( int timeElapsed);
		Dynamic update_dyn();

		Float actorCreateTime;
		bool done;
		int timer;
		::com::stencyl::models::Actor actor;
		bool repeats;
		int interval;
		Dynamic toExecute;
		Dynamic &toExecute_dyn() { return toExecute;}
};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_TimedTask */ 
