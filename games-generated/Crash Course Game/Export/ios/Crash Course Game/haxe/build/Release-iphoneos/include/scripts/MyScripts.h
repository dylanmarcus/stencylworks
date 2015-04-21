#ifndef INCLUDED_scripts_MyScripts
#define INCLUDED_scripts_MyScripts

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(scripts,MyScripts)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  MyScripts_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MyScripts_obj OBJ_;
		MyScripts_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MyScripts_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MyScripts_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MyScripts"); }

		::haxe::ds::StringMap m;
		::com::stencyl::behavior::Script s;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_MyScripts */ 
