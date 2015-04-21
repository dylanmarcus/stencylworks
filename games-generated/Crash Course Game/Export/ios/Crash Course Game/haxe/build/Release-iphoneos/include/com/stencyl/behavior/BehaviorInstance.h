#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#define INCLUDED_com_stencyl_behavior_BehaviorInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,behavior,BehaviorInstance)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  BehaviorInstance_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BehaviorInstance_obj OBJ_;
		BehaviorInstance_obj();
		Void __construct(int behaviorID,::haxe::ds::StringMap values);

	public:
		static hx::ObjectPtr< BehaviorInstance_obj > __new(int behaviorID,::haxe::ds::StringMap values);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BehaviorInstance_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BehaviorInstance"); }

		bool enabled;
		::haxe::ds::StringMap values;
		int behaviorID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_BehaviorInstance */ 
