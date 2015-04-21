#ifndef INCLUDED_com_stencyl_behavior_BehaviorManager
#define INCLUDED_com_stencyl_behavior_BehaviorManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,behavior,Behavior)
HX_DECLARE_CLASS3(com,stencyl,behavior,BehaviorManager)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  BehaviorManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BehaviorManager_obj OBJ_;
		BehaviorManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BehaviorManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BehaviorManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BehaviorManager"); }

		virtual Dynamic call2( ::String behaviorName,::String msg,Dynamic args);
		Dynamic call2_dyn();

		virtual Dynamic call( ::String msg,Dynamic args);
		Dynamic call_dyn();

		virtual Void setAttribute( ::String behaviorName,::String attributeName,Dynamic value);
		Dynamic setAttribute_dyn();

		virtual Dynamic getAttribute( ::String behaviorName,::String attributeName);
		Dynamic getAttribute_dyn();

		virtual Void initScripts( );
		Dynamic initScripts_dyn();

		virtual bool isBehaviorEnabled( ::String b);
		Dynamic isBehaviorEnabled_dyn();

		virtual Void disableBehavior( ::String b);
		Dynamic disableBehavior_dyn();

		virtual Void enableBehavior( ::String b);
		Dynamic enableBehavior_dyn();

		virtual bool hasBehavior( ::String b);
		Dynamic hasBehavior_dyn();

		virtual Void add( ::com::stencyl::behavior::Behavior b);
		Dynamic add_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::haxe::ds::StringMap cache;
		Array< ::Dynamic > behaviors;
};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_BehaviorManager */ 
