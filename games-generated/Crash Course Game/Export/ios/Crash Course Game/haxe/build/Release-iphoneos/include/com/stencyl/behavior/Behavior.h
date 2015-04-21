#ifndef INCLUDED_com_stencyl_behavior_Behavior
#define INCLUDED_com_stencyl_behavior_Behavior

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,Behavior)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  Behavior_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Behavior_obj OBJ_;
		Behavior_obj();
		Void __construct(Dynamic parent,::com::stencyl::Engine engine,int ID,::String name,::String classname,bool enabled,bool drawable,::haxe::ds::StringMap attributes,::String type,bool isEvent);

	public:
		static hx::ObjectPtr< Behavior_obj > __new(Dynamic parent,::com::stencyl::Engine engine,int ID,::String name,::String classname,bool enabled,bool drawable,::haxe::ds::StringMap attributes,::String type,bool isEvent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Behavior_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Behavior"); }

		virtual Void initAttributes( );
		Dynamic initAttributes_dyn();

		virtual Void initScript( hx::Null< bool >  initJustScript);
		Dynamic initScript_dyn();

		::haxe::ds::StringMap attributes;
		::com::stencyl::behavior::Script script;
		::Class cls;
		::String classname;
		::String type;
		::String name;
		int ID;
		bool isEvent;
		bool drawable;
		bool enabled;
		::com::stencyl::Engine engine;
		Dynamic parent;
};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_Behavior */ 
